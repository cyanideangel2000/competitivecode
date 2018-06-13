#include <stdio.h>
int main( int argc, const char * argv[] )
{
    char    theText[2] = { 'A', 'B' };
    char*       myString = theText;
    printf( "%c, %c\n", *(++myString), *myString );

    return 0;
}
