#include <iostream>

using namespace std;

int main()
{
    FILE* stream = popen("kextstat -b com.riverbed.kext.shm", "r" );
    if (stream == NULL) {
        cout<<"Failed to open pipe";
        return 0;
    }
    cout<<"Data Read from Pipe"<<endl;
    while (1)
    {
        int c = fgetc( stream );
        if ( c == EOF) {
            cout<<"\nReached EndOFFIle for Pipe";
            return 0;
        }
        else cout<<(char)c;
    }
}
