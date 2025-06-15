#include <bits/stdc++.h>
using namespace std;

int longestSubArrayWithK(int arr[], int n, int k)
{
    int left = 0;
    int right = 0;
    int maxLength = 0;
    int sum = arr[0];
    while(right<n)
    {
        while (left <= right && sum > k)
        {
            sum -= arr[left];
            left++;
        }
        if(sum == k)
        {
            maxLength = max(maxLength, right-left+1);
        }
        right++;
        if(right < n)
        {
            sum += arr[right];
        }
    }
    return maxLength;
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

    int res = longestSubArrayWithK(arr, n, 3);

    cout << res << ' ' << endl;
}