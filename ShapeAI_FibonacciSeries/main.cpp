#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if(n == 1)
    {
        cout<< "Fibonacci sequence : 0" << endl;
    }
    if (n == 2 )
    {
        cout<< "Fibonacci sequence : 0 1" << endl;
    }


    if (n>2)
    {
        cout<< "Fibonacci sequence : 0 1 " ;
        int prev_0 = 0;
        int prev_1 = 1;

        for (int i = 3; i <= n; i++)
        {
            int f;
            f = prev_0 + prev_1;
            prev_0 = prev_1;
            prev_1 = f;

            cout << f << " ";
        }
    }





    return 0;
}
