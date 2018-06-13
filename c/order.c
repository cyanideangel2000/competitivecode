#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3};
    int * pa; 

    pa = &a[0];
    printf("a[0] = %d\ta[1] = %d\ta[2] = %d\n",*(pa), *(pa++),*(++pa));
    /* Result: a[0] = 3  a[1] = 2    a[2] = 2 */

    pa = &a[0];
    printf("a[0] = %d\ta[1] = %d\ta[2] = %d\n",*(pa++),*(pa),*(++pa));
    /* Result: a[0] = 2  a[1] = 2     a[2] = 2 */

    pa = &a[0];
    printf("a[0] = %d\ta[1] = %d\ta[2] = %d\n",*(pa++),*(++pa), *(pa));
    /* a[0] = 2  a[1] = 2 a[2] = 1 */

}
