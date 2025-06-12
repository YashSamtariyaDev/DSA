#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int k)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] == k)
        {
            return i;
        }
    }
    return -1;
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
    int res = linearSearch(arr, n, 6);
    cout << res << " ";
    cout  << endl;
    return 0;
}
