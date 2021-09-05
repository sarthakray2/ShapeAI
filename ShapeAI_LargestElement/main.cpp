#include <iostream>

using namespace std;


void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void BubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        { if (arr[j] > arr[j+1])
          {
            swap(&arr[j], &arr[j+1]);
          }
        }
    }

}

int main()
{
    int n;
    cout<< "Enter number of elements: ";
    cin>>n;

    int arr[n];

    cout<< "Enter the elements: ";

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    BubbleSort(arr, n);

    cout<<"The second largest element is "<< arr[n-2]<<endl;


    return 0;
}
