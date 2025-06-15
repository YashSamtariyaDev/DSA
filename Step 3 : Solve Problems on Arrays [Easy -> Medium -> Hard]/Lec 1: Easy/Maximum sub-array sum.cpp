#include <bits/stdc++.h>
using namespace std;


int maxSubArraySum(int arr[], int n)
{
    int sum = 0;
    int max = INT_MIN;
    for(int i = 0; i < n; i++)
    {
       sum+=arr[i];
       if(sum > max)
       {
            max = sum;
       }
       if(sum < 0)
       {
            sum = 0;
       }
    }
    return max;
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

    int res = maxSubArraySum(arr, n);

    cout << res << endl;
}