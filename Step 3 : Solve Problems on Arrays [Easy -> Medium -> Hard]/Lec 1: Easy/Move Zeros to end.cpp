#include<bits/stdc++.h>
using namespace std;


void moveZeroToEnd2Pointer(int arr[], int n)
{

    int j = 0;

    // for(int i=0; j<n; i++)
    // {
    //     if(arr[i] == 0)
    //     j = i;
    //     break;
    // }

    for(int i=0; i<n; i++)
    {
        if(arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }

}


void moveZeroToEnd(int arr[], int n)
{
    int temp[n] = {0};
    int j = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] != 0)
        {
            temp[j] = arr[i];
            j++;
        }
    }
    for(int j=0; j<n; j++)
    {
        arr[j] = temp[j];
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
    // moveZeroToEnd(arr, n);
    moveZeroToEnd2Pointer(arr, n);
    for(int i=0; i<n; i++)
    {
        cout <<arr[i] << " ";
    }
    cout  << endl;

}
