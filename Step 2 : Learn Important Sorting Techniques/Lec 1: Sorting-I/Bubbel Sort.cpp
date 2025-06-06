#include <bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[], int n)
{
    
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            int a = j;
            int b = j+1;
            if(arr[a] > arr[b])
            {
                int temp = arr[a];
                arr[a] = arr[b];
                arr[b] = temp;
            }
        }
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
    BubbleSort(arr, n);
}