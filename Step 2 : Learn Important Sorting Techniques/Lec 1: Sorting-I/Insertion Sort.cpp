#include <bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        int j = i;
        while(j > 0 && arr[j-1] > arr[j])
        {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }

        // for(int j = i; j>0; j--)
        // {
        //     if(arr[j-1] > arr[j])
        //     {
        //         int temp = arr[j-1];
        //         arr[j-1] = arr[j];
        //         arr[j] = temp;
        //     }
        // }
    }
    for(int i=0; i<n; i++)
    {
        cout <<arr[i] << " " << endl;
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
    InsertionSort(arr, n);
}