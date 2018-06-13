//
//  main.cpp
//  VarunCert
//
//  Created by Varun Tewari on 28/04/14.
//  Copyright (c) 2014 Varun Tewari. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <Security/Security.h>
#include <Security/SecKey.h>
#include <Security/SecTransform.h>
#include <CoreFoundation/CoreFoundation.h>

int main ()
{
    OSStatus status = errSecSuccess;
    CFTypeRef   certificateRef     = NULL;                      // 1
    const char *certLabelString = "Varun Tewari";
    CFStringRef certLabel = CFStringCreateWithCString(
            NULL, certLabelString,
            kCFStringEncodingUTF8);         // 2

    const void *keys[] =   { kSecClass, kSecAttrLabel, kSecReturnRef };
    const void *values[] = { kSecClassCertificate, certLabel, kCFBooleanTrue };
    CFDictionaryRef dict = CFDictionaryCreate(NULL, keys,
            values, 3,
            NULL, NULL);       // 3
    status = SecItemCopyMatching(dict, &certificateRef);        // 4

    if (status != errSecSuccess) {
        CFRelease(certificateRef);
        certificateRef = NULL;
    }   

    std::cout<<"Varun 1 "<<status<<"\n";

    /* Do something with certificateRef here */
    void *varun = const_cast<void *>(certificateRef);
    SecCertificateRef cert = reinterpret_cast<SecCertificateRef>(varun);
    CFStringRef commonName = NULL;
    status = SecCertificateCopyCommonName(cert, &commonName);

    std::cout<<"Varun 2"<<CFStringGetLength(commonName)<<" Status:: "<<status<<"\n";
    const char *bytes = CFStringGetCStringPtr(commonName, kCFStringEncodingASCII);
    std::cout<<"Varun 3\n";
    std::cout<<"CommonName "<<strlen(bytes)<<" "<<bytes;

    CFStringRef summaryRef = SecCertificateCopySubjectSummary(cert);
    bytes = CFStringGetCStringPtr(commonName, kCFStringEncodingASCII);
    std::cout<<"Varun 4\n";
    std::cout<<"SubjectName "<<strlen(bytes)<<" "<<bytes;

    if (dict)
        CFRelease(dict);

    //Trying for Private Keys
    CFTypeRef  privateKey = NULL;
    const void *values1[] = { kSecClassKey, certLabel, kCFBooleanTrue };
    dict = CFDictionaryCreate(NULL, keys,
            values1, 3,
            NULL, NULL);       // 3
    status = SecItemCopyMatching(dict, &privateKey);        // 4

    if (status != errSecSuccess) {
        CFRelease(certificateRef);
        certificateRef = NULL;
    }
    void *varun1 = const_cast<void *>(privateKey);
    SecKeyRef key = reinterpret_cast<SecKeyRef>(varun1);

    int plainBufferSize = SecKeyGetBlockSize(key);
    char * plainBuffer = (char *)malloc(plainBufferSize);
    std::cout<<"PrivateKeyBlockSize: "<<plainBufferSize;

    std::ifstream is("/Users/vtewari/Documents/file.txt.enc", std::ios::binary);
    char buffer[300] = {0, };
    is.seekg (0, is.end);
    int length = is.tellg();
    is.seekg (0, is.beg);
    is.read(buffer, length);
    std::cout<<"EncryptedDataRead:: "<<length<<std::endl;

    CFErrorRef error;
    CFDataRef sourceData = CFDataCreateWithBytesNoCopy(NULL, (const UInt8*)buffer, length, kCFAllocatorNull);
    CFDataRef decryptedData = NULL;

    SecTransformRef decrypt = SecDecryptTransformCreate(key, &error);
    SecTransformSetAttribute(decrypt, kSecPaddingKey, NULL, &error);
    SecTransformSetAttribute(decrypt, kSecTransformInputAttributeName, sourceData, &error);
    decryptedData = (CFDataRef)SecTransformExecute(decrypt, &error);

    if (decryptedData == NULL) {
        std::cout<<"Failed:: "<<error<<std::endl;
        CFShow(error);
    }
    const UInt8 *ptr = CFDataGetBytePtr(decryptedData);
    int plainlen = CFDataGetLength(decryptedData);
    std::cout<<"CLearText(length:: )"<<plainlen<<":: "<<std::endl;
}
