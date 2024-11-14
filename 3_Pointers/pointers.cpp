#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a = 10;
    int *p;
    p = &a;

    printf("Pointer with asterix(dereferencing): %d\n", *p);
    printf("Pointer without asterix : %d\n", p);
    printf("Variable without ampersand : %d\n", a);
    printf("Variable with ampersand : %d\n", &a);

    return 0;
}