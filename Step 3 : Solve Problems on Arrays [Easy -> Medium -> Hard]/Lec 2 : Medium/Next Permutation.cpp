#include<bits/stdc++.h>
using namespace std;

void nextPermutation(int arr[], int n)
{
    int pivot = -1;

    for(int i=n-2; i>=0; i--)
    {
        if(arr[i] < arr[i+1])
        {
            pivot = i;
            break;
        }
    }

       if (pivot == -1)
    {
        reverse(arr, arr + n);
        return;
    }


    for(int i=n-1; i>pivot; i--)
    {
        if(arr[i] > arr[pivot])
        {
            swap(arr[pivot], arr[i]);
            break;
        }
    }

    // for(int i=pivot+1; i<n-1; i++)
    // {
    //     int temp = arr[i];
    //     arr[i] = arr[i+1];
    //     arr[i+1] = temp;
    // }

    int start = pivot + 1, end = n - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

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

    nextPermutation(arr, n);
    
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

    cout  << endl;
    return 0;
}