#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(int arr[], int n, int k)
{
    map<int, int> preSumMap;
    int sum = 0;
    int maxLen = 0;
    for(int i=0; i<n; i++)
    {
        sum+=arr[i];

        if(sum == k)
        {
            maxLen = i+1;
        }

        if(preSumMap.find(sum-k) != preSumMap.end())
        {
            maxLen = max(maxLen, i-preSumMap[sum-k]);
        }

        if(preSumMap.find(sum) == preSumMap.end())
        {
            preSumMap[sum] = i;
        }
    }
    return maxLen;
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

    int res = getLongestSubarray(arr, n, 3);

    cout << res << ' ' << endl;
}