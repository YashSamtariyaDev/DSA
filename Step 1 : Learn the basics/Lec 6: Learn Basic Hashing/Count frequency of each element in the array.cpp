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

    int m;
    cout << "Please Enter Size of the Seacrch M : " << endl;
    cin >> m;
    cout << "please Enter the elements : " << endl;

    while(m--)
    {
        int findNum;
        cin >> findNum; 
        cout << "Accuranse of the num : " <<  findNum << " : "<< hashMap[findNum]  << endl;
    }
    return 0;
}



// int main()
// {
//     int n;
//     cout << "Please Enter Size of the N : " << endl;
//     cin >> n;
//     int arr[n];

//     cout << "please Enter the elements : " << endl;
//     for(int i=0; i<n; i++)
//     {
//         cin >> arr[i];
//     }

//     int hash[13] = {0};
//     for(int i=0; i<n; i++)
//     {
//         hash[arr[i]] += 1;
//     }

//     int m;
//     cout << "Please Enter Size of the Seacrch M : " << endl;
//     cin >> m;
//     cout << "please Enter the elements : " << endl;

//     while(m--)
//     {
//         int findNum;
//         cin >> findNum; 
//         cout << "Accuranse of the num : " <<  findNum << " : "<< hash[findNum]  << endl;
//     }
//     return 0;
// }