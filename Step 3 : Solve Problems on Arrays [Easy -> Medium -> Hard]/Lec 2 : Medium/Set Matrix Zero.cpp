#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> zeroMatrix(vector<vector<int>> arr, int m, int n)
{
    vector<int> row(m, 0); // Initialize row array
    vector<int> col(n, 0); // Initialize col array

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(row[i] || col[j])
            {
                arr[i][j] = 0;
            }
        }
    }

    return arr;
}


int main()
{
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> ans = zeroMatrix(matrix, n, m);

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