#include <iostream>

using namespace std;

void swap_func(int *a, int *b);

int main()
{
    int a, b;

    cin >> a ;
    cin >> b ;

    cout << "Initial values: a = " << a << ", b = " << b << endl;

    swap_func(&a, &b);

    cout << "Final values: a = " << a << ", b = " << b << endl;

    return 0;
}

void swap_func(int *a, int *b)
{
    int t;

    t = *a;
    *a = *b;
    *b = t;
}
