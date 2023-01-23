#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int pro = 0;
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            pro = abs(arr[i] - arr[i + 1]);
            res = pro + res;
        }
        cout << res << endl;
    }
    return 0;
}