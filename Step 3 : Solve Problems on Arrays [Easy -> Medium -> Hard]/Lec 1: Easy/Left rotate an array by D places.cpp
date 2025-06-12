#include<bits/stdc++.h>
using namespace std;

void RoatedByD(int arr[], int d, int n)
{
    int rotate = d%n;
    int temp[rotate];

    for(int i=0; i<rotate; i++)
    {
        temp[i] = arr[i];
    }
    for(int j=rotate; j<n; j++)
    {
        arr[j-rotate] = arr[j];
    }
    for(int k=0; k<rotate;k++)
    {
        arr[n-rotate+k] = temp[k];
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
    // InsertionSort(arr, n);
    RoatedByD(arr, 17, n);
    for(int i=0; i<n; i++)
    {
        cout <<arr[i] << " ";
    }
    cout  << endl;

}


// 1 2 3 4 5