#include <bits/stdc++.h>
using namespace std;

int subArraySumOfK(int arr[], int n, int k)
{
    int count = 0;
    int preFixSumArr[n];
    preFixSumArr[0] = arr[0];
    for(int i=1; i<n; i++)
    {
        preFixSumArr[i] = preFixSumArr[i-1] + arr[i];
    }

    unordered_map <int, int> m;
    for(int j=0; j<n; j++)
    {
        if(preFixSumArr[j] == k)
        {
            count++;
        }
        int val = preFixSumArr[j] - k;
        if(m.find(val) != m.end())
        {
            count += m[val];
        }
        if(m.find(j) == m.end())
        {
            m[preFixSumArr[j]] = 0;
        }
        m[preFixSumArr[j]]++;
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

    int res = subArraySumOfK(arr, n, 2);

    cout << res << ' ' << endl;
}