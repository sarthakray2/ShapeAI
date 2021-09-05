#include <iostream>

using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void rotateLeft(int d, int arr[], int n)
{
    for(int i=1; i<=d; i++)
    {
        for(int j=1; j<n; j++)
        {
            swap(&arr[j-1], &arr[j]);
        }
    }
}

int main()
{
    int n, d;

    cin>>n>>d;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    rotateLeft(d, arr, n);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
