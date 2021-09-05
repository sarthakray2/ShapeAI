#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << "1 is neither a prime number nor a composite number."<< endl;
    }

    if(n==2)
    {
        cout << "2 is a prime number."<< endl;
    }

    if(n>2)
    {
        for(int i =2; i<n ; i++)
        {
            if(n%i == 0)
            {
                cout<< n<< " is not a prime number."<<endl;
                break;
            }
            else if (n%i != 0 && i==(n-1))
            {
                 cout<< n << " is a prime number."<< endl;
            }
            else
            {
                continue;
            }

        }

    }
    return 0;
}
