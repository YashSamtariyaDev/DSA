#include<bits/stdc++.h>
using namespace std;

vector<int> unionArray(int arr1[], int arr2[], int n1, int n2) {
    set<int> s;
        
    for(int i=0; i<n1; i++)
    {
        s.insert(arr1[i]);
    }
    for(int j=0; j<n2; j++)
    {
        s.insert(arr2[j]);
    }

    vector<int> result(s.begin(), s.end());
    return result;
}

int main()
{
    int n1;
    cin>>n1;
    int arr1[n1];
    for(int i=0; i<n1; i++)
    {
        cin>>arr1[i];
    }

    int n2;
    cin>>n2;
    int arr2[n2];
    for(int i=0; i<n2; i++)
    {
        cin>>arr2[i];
    }
    // moveZeroToEnd(arr, n);
    vector<int> mainRes = unionArray(arr1, arr2, n1, n2);

    for(auto val : mainRes)
    {
        cout << val << " ";
    }
    cout  << endl;
    return 0;
}
