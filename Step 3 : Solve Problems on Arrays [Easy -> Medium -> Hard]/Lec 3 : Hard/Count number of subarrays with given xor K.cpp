#include <bits/stdc++.h>
using namespace std;

int xorK(int arr[], int n, int k)
{
    int count = 0;
    map<int, int> mpp;
    int xr = 0;
    mpp[xr]++; 

    for(int i=0; i<n; i++)
    {
        xr = xr ^ arr[i];

        int  x = xr ^ k;

        count += mpp[x];
        mpp[xr]++;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int res = xorK(arr, n, 6);

    cout << res << ' ' << endl;
}