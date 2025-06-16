#include<bits/stdc++.h>
using namespace std;

void rearrangeElementBySign(int arr[], int n)
{
    vector<int> positiveIndexArr;
    vector<int> negetivrIndexArr;

    for(int i=0; i<n; i++)
    {
        if(arr[i] > 0)
        {
            positiveIndexArr.push_back(arr[i]);
        }
        else
        {
            negetivrIndexArr.push_back(arr[i]);
        }
    }

    if(positiveIndexArr.size() > negetivrIndexArr.size())
    {
        for(size_t i = 0; i < negetivrIndexArr.size(); i++)
        {
            arr[2*i] = positiveIndexArr[i];
            arr[2*i+1] = negetivrIndexArr[i];
        }
        int index = negetivrIndexArr.size() * 2;
        for(size_t j = negetivrIndexArr.size(); j<positiveIndexArr.size(); j++)
        {
            arr[index] = positiveIndexArr[j];
            index++;
        }
    }
    else
    {
        for(size_t i = 0; i < positiveIndexArr.size(); i++)
        {
            arr[2*i] = positiveIndexArr[i];
            arr[2*i+1] = negetivrIndexArr[i];
        }
        int index = positiveIndexArr.size() * 2;
        for(size_t j = positiveIndexArr.size(); j<negetivrIndexArr.size(); j++)
        {
            arr[index] = negetivrIndexArr[j];
            index++;
        }
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

    rearrangeElementBySign(arr, n);
    
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

    cout  << endl;
    return 0;
}
