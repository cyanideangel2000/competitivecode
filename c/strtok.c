#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
    char *str = "1.1.1.0/24\n1.2.1.0/24 not-advertise\n1.3.1.0/24 not-advertise\n1.4.1.0/24";
    char *token = NULL;


    token = strtok(str, "//");
    while (token)
    {
        printf("token: %s\n", token);
        token = strtok(NULL, "//");
    }
}
