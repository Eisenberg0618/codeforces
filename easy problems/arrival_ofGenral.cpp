#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int l = 0, h = n - 1;
    int count = 0;

    while (h < l)
    {
        swap(arr[l], arr[h]);
        count++;
    }
    cout << count;
    return 0;
}