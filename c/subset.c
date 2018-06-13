#include <stdio.h>
#include <stdlib.h>
void PrintSubsets() 
{ 
    int source[3] = {1,2,3}; 
    int currentSubset = 7; 
    int tmp; 
    while(currentSubset) 
    { 
        printf("("); 
        tmp = currentSubset; 
        for(int i = 0; i<3; i++) 
        { 
            if (tmp & 1) 
                printf("%d ", source[i]); 
            tmp >>= 1; 
        } 
        printf(")\n"); 
        currentSubset--; 
    } 
}

void main(void)
{
    PrintSubsets();
}
