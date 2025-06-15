#include <bits/stdc++.h>
using namespace std;

int getSingleElement(int arr[], int n)
{
    map<int, int> singleEle;

    for(int i=0; i<n; i++)
    {
        singleEle[arr[i]]++;
    }

    for(auto i: singleEle)
    {
        if(i.second == 1)
        {
            return i.first;
        }
    }
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

    int res = getSingleElement(arr, n);

    cout << res << ' ' << endl;
}