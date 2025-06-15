#include <bits/stdc++.h>
using namespace std;


int mostDominatingNum(int arr[], int n)
{
    int el;
    int count;
    for(int i = 0; i < n; i++)
    {
        if(count == 0)
        {
            count = 1;
            el = arr[i];
        }
        else if(el == arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    return el;
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

    int res = mostDominatingNum(arr, n);

    cout << res << endl;
}