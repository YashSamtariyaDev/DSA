#include <bits/stdc++.h>
using namespace std;

string twoSum(int arr[], int n, int k)
{
    unordered_map <int, int> m;
    for(int i=0; i<n; i++)
    {
        int num = arr[i];
        int needMore = k - num;
        if(m.find(needMore) != m.end())
        {
            return "YES";
        }
        m[num] = i;
    }
    return "NO";
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

    string res = twoSum(arr, n, 14);

    cout << res << ' ' << endl;
}



// #include <bits/stdc++.h>
// using namespace std;

// pair<int,int> twoSum(int arr[], int n, int k)
// {
//     unordered_map <int, int> m;
//     for(int i=0; i<n; i++)
//     {
//         int num = arr[i];
//         int needMore = k - num;
//         if(m.find(needMore) != m.end())
//         {
//             return {m[needMore], i};
//         }
//         m[num] = i;
//     }
//     return {-1, -1};  // Return -1,-1 if no pair is found
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
    
//     for(int i=0; i<n; i++)
//     {
//         cin >> arr[i];
//     }

//     pair<int,int> res = twoSum(arr, n, 14);

//     if(res.first == -1 && res.second == -1) {
//         cout << "No pair found" << endl;
//     } else {
//         cout << "Indices are: " << res.first << " and " << res.second << endl;
//     }
// }