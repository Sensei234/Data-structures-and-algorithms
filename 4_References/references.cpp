#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int &r = a;
    int b = 30;
    a = 25;
    r = b;

    cout << "Integer " << a << " and Reference " << r << endl;
    printf("Integer %d and Reference %d", a, r);
}