#include <bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[], int n)
{

    //recusion approch

    if(n==1) return;

    int didSwap = 0;
    for(int j = 0; j <= n-2; j++)
    {
        if(arr[j] > arr[j+1])
        {
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
        }
        didSwap = 1;
    }

    if(didSwap == 0) return;

    BubbleSort(arr, n-1);
    
    // normal approch

    // for(int i=0; i<n-1; i++)
    // {
    //     for(int j=0; j<n-i-1; j++)
    //     {
    //         int a = j;
    //         int b = j+1;
    //         if(arr[a] > arr[b])
    //         {
    //             int temp = arr[a];
    //             arr[a] = arr[b];
    //             arr[b] = temp;
    //         }
    //     }
    // }
    // for(int i=0; i<n; i++)
    // {
    //     cout <<arr[i] << " " << endl;
    // }
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
    BubbleSort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}