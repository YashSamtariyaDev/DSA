#include<bits/stdc++.h>
using namespace std;

vector<int> leadersArray(int arr[], int n)
{
    vector<int> leaders;
    int maxLeader = INT_MIN;
    for(int i = n-1; i>=0; i--)
    {
        if(arr[i] > maxLeader)
        {
            maxLeader = arr[i];
            leaders.push_back(maxLeader);
        }
    }
    reverse(leaders.begin(), leaders.end()); 
    return leaders;
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

    vector<int> res = leadersArray(arr, n);
    
    for(size_t i=0; i<res.size(); i++)
    {
        cout << res[i] << " ";
    }

    cout  << endl;
    return 0;
}