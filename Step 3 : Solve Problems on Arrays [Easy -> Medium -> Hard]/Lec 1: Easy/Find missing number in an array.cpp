#include<bits/stdc++.h>
using namespace std;

int missingElementInArray(int arr[], int n)
{
    int actualTotal = n*(n+1)/2;
    int arraySum = 0;
    int res;
    for(int i=0; i<n-1; i++)
    {
        arraySum += arr[i];
    }
    return res = actualTotal - arraySum;
}

int main()
{
    int n;
    cin>>n;
    int arr[n-1];
    for(int i=0; i<n-1; i++)
    {
        cin>>arr[i];
    }

    int missingElement = missingElementInArray(arr, n);
    cout << missingElement << " ";
    cout  << endl;
    return 0;
}
