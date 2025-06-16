#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeElementBySign(int arr[], int n)
{
    vector<int> ans(n,0);
    int positiveIndex = 0;
    int negetivrIndex = 1;

    for(int i=0; i<n; i++)
    {
        if(arr[i] > 0)
        {
            ans[positiveIndex] = arr[i];
            positiveIndex += 2;
        }
        else
        {
            ans[negetivrIndex] = arr[i];
            negetivrIndex += 2;
        }
    }

    return ans;
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

    vector<int> res =  rearrangeElementBySign(arr, n);
    
    for(int i=0; i<n; i++)
    {
        cout << res[i] << " ";
    }

    cout  << endl;
    return 0;
}
