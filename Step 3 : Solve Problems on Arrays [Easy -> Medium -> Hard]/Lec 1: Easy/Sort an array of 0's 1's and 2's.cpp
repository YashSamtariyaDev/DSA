#include <bits/stdc++.h>
using namespace std;


void zeroOneTwos(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n-1;

    while(mid <= high)
    {
        if(arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1)
        {
            mid++;
        }
        else if(arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
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

     zeroOneTwos(arr, n);

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}