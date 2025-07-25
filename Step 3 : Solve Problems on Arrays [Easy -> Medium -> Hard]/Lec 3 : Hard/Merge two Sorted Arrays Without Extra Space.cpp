
#include <bits/stdc++.h>
using namespace std;

void swapIfGreater(long long arr1[], long long arr2[], int ind1, int ind2) {
    if (arr1[ind1] > arr2[ind2]) {
        swap(arr1[ind1], arr2[ind2]);
    }
}

void merge(long long arr1[], long long arr2[], int n, int m) {
    int len =  n+m;
    int gap = (len / 2) + (len % 2);
    
        while(gap > 0)
        {
            int left = 0;
            int right = left + gap;

            while(right < len)
            {
                if(left < n && right >= n)
                {
                    swapIfGreater(arr1, arr2, left, right - n);
                }
                else if(left >= n)
                {
                    swapIfGreater(arr1, arr2, left - n, right - n);
                }
                else
                {
                    swapIfGreater(arr1, arr2, left, right);
                }
                left++; right++;
            }
            if(gap == 1) break;
            gap = (gap / 2) + (gap % 2);
        }
}


int main()
{
    long long arr1[] = {1, 4, 8, 10};
    long long arr2[] = {2, 3, 9};
    int n = 4, m = 3;
    merge(arr1, arr2, n, m);
    cout << "The merged arrays are: " << "\n";
    cout << "arr1[] = ";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << "\narr2[] = ";
    for (int i = 0; i < m; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}

