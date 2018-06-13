#include <stdio.h>
#include <stdlib.h>
#include <execinfo.h>

void a()
{
    void* tracePtrs[100];
    int count = 0, ii;
    char** funcNames;
    printf("\n%d\n", 1);
    count = backtrace( tracePtrs, 100 );
    funcNames = backtrace_symbols( tracePtrs, count );
    for(ii = 0; ii < count; ii++ )
            printf( "%s\n", funcNames[ii] );
    printf("\n%d\n", 1);
}
void b()
{
    printf("\n%d\n", 2);
    a();
}
void c()
{
    printf("\n%d\n", 3);
    b();
}

int main(void)
{
    c();
}
