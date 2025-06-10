#include <bits/stdc++.h>
using namespace std;

void findSecondSmallestNumber(int arr[], int n)
{
    int smallestNum = INT_MAX;
    int secondSmallestNum = INT_MAX;

    for(int i=0; i<n; i++)
    {
        if(arr[i] < smallestNum)
        {
            smallestNum = arr[i];
        }
    }

    for(int j=0; j<n; j++)
    {
        if(arr[j] < secondSmallestNum && arr[j] != smallestNum)
        {
            secondSmallestNum = arr[j];
        }
    }

    cout << "Second Smallest Number : - " << secondSmallestNum << endl;

}

void findSecondLargestNumber(int arr[], int n)
{
    int largestNum = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i=0; i<n; i++)
    {
        if(arr[i] > largestNum)
        {
            largestNum = arr[i];
        }
    }

    for(int j=0; j<n; j++)
    {
        if(arr[j] > secondLargest && arr[j] != largestNum)
        {
            secondLargest = arr[j];
        }
    }

    cout << "Second Largest Number : - " << secondLargest << endl;

}

void findSecondSmallestNumberOptimize(int arr[], int n)
{
    int smallestNum = INT_MAX;
    int secondSmallestNum = INT_MAX;

    for(int i=0; i<n; i++)
    {
        if(arr[i] < smallestNum)
        {
            secondSmallestNum = smallestNum;
            smallestNum = arr[i];
        }
        else if(arr[i] < secondSmallestNum && secondSmallestNum != smallestNum)
        {
            secondSmallestNum = arr[i];
        }
    }

    cout << "Second Smallest Number : - " << secondSmallestNum << endl;

}

void findSecondLargestNumberOptimize(int arr[], int n)
{
    int largetNum = INT_MIN;
    int secondLargestNum = INT_MIN;

    for(int i=0; i<n; i++)
    {
        if(arr[i] > largetNum)
        {
            secondLargestNum = largetNum;
            largetNum = arr[i];
        }
        else if(arr[i] > secondLargestNum && secondLargestNum != largetNum)
        {
            secondLargestNum = arr[i];
        }
    }

    cout << "Second Largest Number : - " << secondLargestNum << endl;

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

    // Better Solution

    // findSecondSmallestNumber(arr, n);
    // findSecondLargestNumber(arr, n);

    // Best Solution

    findSecondSmallestNumberOptimize(arr, n);
    findSecondLargestNumberOptimize(arr, n);
}