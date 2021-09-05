#include <iostream>
#include <cctype>

using namespace std;

int camelcase(string s)
{
    int result = 1;
    int N = s.length();
    for(int i=0; i<N; i++)
    {
        if(isupper(s[i]))
        {
            result++;
        }
    }

    return result;
}

int main()
{
    string s;
    getline(cin, s);

    int result = camelcase(s);

    cout<<result<<endl;
    return 0;
}
