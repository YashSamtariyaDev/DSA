#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cout << "Please Enter Size of the N : " << endl;
    cin >> n;
    int arr[n];

    cout << "please Enter the elements : " << endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    unordered_map<int, int> hashMap;
       
    for(int i=0; i<n; i++)
    {
        hashMap[arr[i]] += 1;
    }

    for(auto in : hashMap)
    {
        cout << in.first << " -> " << in.second << endl;
    }

    int min = INT_MAX;
    int max = INT_MIN;
    for(auto in : hashMap)
    {
        if(in.second < min)
        {
            min = in.second;
        }
        if(in.second > max)
        {
            max = in.second;
        }
    }
    cout << "Max : " <<  max << " " << "Min : "<< min << endl;

    return 0;
}
