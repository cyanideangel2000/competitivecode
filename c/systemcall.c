#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>

int main(void)
{
    printf("\nPageSize: %d\n", getpagesize());
}
