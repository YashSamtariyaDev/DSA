#include <bits/stdc++.h>
using namespace std;

void findLargestNumber(int arr[], int n)
{
    int large = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] > large)
        {
            large = arr[i];
        }
    }

    cout << large << endl;
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

    findLargestNumber(arr, n);
}