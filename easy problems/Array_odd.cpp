#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += (arr[i] % 2 != 0);
        }
        cout << (((sum & 1) || (1 <= sum && sum < n)) ? "YES" : "NO") << endl;
    }
    return 0;
}