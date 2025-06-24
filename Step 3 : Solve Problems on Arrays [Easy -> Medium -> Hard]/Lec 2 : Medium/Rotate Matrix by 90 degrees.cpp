#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> rotateMatrix(vector<vector<int>> arr, int m, int n)
{

    for(int i=0; i<m-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        reverse(arr[i].begin(), arr[i].end()); // Use std::reverse to reverse the row
    }
    // for (int i = 0; i < arr.size(); i++) { // Iterate through each row
    //     int left = 0; // Start index
    //     int right = arr[i].size() - 1; // End index

    //     // Swap elements until the left index is less than the right index
    //     while (left < right) {
    //         // Swap the elements
    //         swap(arr[i][left], arr[i][right]);
    //         left++; // Move towards the center from the left
    //         right--; // Move towards the center from the right
    //     }
    // }
    return arr;
}

// 1 2 3
// 4 5 6 
// 7 8 9

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> ans = rotateMatrix(matrix, n, m);

    cout << "The Final matrix is: n" << endl;

    for(auto row :  ans)
    {
        for(auto col : row)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    cout  << endl;
    return 0;
}