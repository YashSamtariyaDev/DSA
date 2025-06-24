#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(int arr[], int n)
{
    unordered_set <int> s;
    int count;
    int maxLength = INT_MIN;
    for(int i = 0; i<n; i++)
    {
            s.insert(arr[i]);
    }

    for(auto i : s)
    {
        if(s.find(i-1) == s.end())
        {
            count = 1;
            int currentNum = i;

            while(s.find(currentNum + 1) != s.end())
            {
                count++;
                currentNum++;
            }
            maxLength = max(maxLength, count); 
        }
    }

    
    return maxLength;
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

    int res = longestConsecutive(arr, n);
    
    cout << res << " ";

    cout  << endl;
    return 0;
}