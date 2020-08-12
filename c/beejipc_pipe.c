#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
int main(void)
{
    int pfds[2], count = 0;
    char buf[30];
    if (pipe(pfds) == 1)
    {
        perror("pipe");
        exit(1);
    }
    while (count++ < 10)
    {
        printf("writing to file descriptor #%d\n", pfds[1]);
        write(pfds[1], "test Varun", 11 );
        printf("reading from file descriptor #%d\n", pfds[0]);
        read(pfds[0], buf, 11);
        printf("read \"%s\"\n", buf);
    }
    return 0;
}
