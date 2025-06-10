#include <bits/stdc++.h>
using namespace std;

bool isArraySorted(int arr[], int n, int start)
{

    for(int i=start; i<n-1; i++)
    {
        if(arr[i] < arr[i+1])
        {
            return isArraySorted(arr, n, i+1);
        }
        else
        {
            return false;
        }
    }
    return true;
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
    bool sorted =  isArraySorted(arr, n, 0);
    cout << sorted << endl;
}