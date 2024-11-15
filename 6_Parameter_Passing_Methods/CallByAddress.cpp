#include <stdio.h>
/* Here the address of the actual parameters
are passed to formal parameter and
formal parameters must be pointers. */
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
/* Any changes done with modify the actual parameters */
int main()
{
    int a, b;
    a = 10;
    b = 15;
    swap(&a, &b);
    printf("%d %d", a, b);
    return 0;
}