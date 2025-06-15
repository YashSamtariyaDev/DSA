#include <bits/stdc++.h>
using namespace std;

int ConsecutiveOnes(int arr[], int n)
{
    int current_count = 0;
    int max_count = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == 1)
        {
            current_count++;
            max_count = max(current_count, max_count);
        }
        else
        {
            current_count = 0;
        }
    }
    return max_count;
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

    int res = ConsecutiveOnes(arr, n);

    cout << res << ' ' << endl;
}