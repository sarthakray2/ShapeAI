#include <iostream>

using namespace std;

void gradingStudents(int arr[], int n)
{

    for(int i=0; i<n; i++)
    {
        if(arr[i]<38)
        {
            arr[i] = arr[i];
        }

        else if(arr[i]%5==0 || arr[i]%5==1 || arr[i]%5==2)
        {
            arr[i] = arr[i];
        }
        else
        {
            arr[i] = arr[i] + (5-(arr[i]%5));
        }
    }

}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    gradingStudents(arr, n);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
