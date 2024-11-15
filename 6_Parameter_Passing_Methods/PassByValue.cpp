#include <stdio.h>
/*Main takeaway from this is that,
the actual parameters will not be modified
if any changes are done to the formal parameters.*/
void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a, b;
    a = 10;
    b = 20;
    swap(a, b);
    printf("%d %d", a, b);
}
