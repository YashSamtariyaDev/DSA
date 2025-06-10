#include<bits/stdc++.h>
using namespace std;

int removeDuplicateUsing2Pointer(int arr[], int n)
{
    int i = 0;
    for(int j=1; j<n; j++)
    {
        if(arr[i] != arr[j])
        {
            arr[i+1]= arr[j];
            i++;
        }
    }
    return i+1;
}


int removeDuplicate(int arr[], int n)
{
    set < int > set;
    for(int i=0; i<n; i++)
    {
        set.insert(arr[i]);
    }

    int k = set.size();
    int j = 0;

    for(auto x:set)
    {
        arr[j++] = x;
    }
    return k;
}

int main()
{
    int n; 
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int k = removeDuplicateUsing2Pointer(arr, n);
    cout << "K - " << k << endl;
    for(int i=0; i<k; i++)
    {
        cout << " " << arr[i] << endl;
    }
}