#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> arr(3);
        for (auto &it : arr)
            cin >> it;
        sort(arr.begin(), arr.end());
        if (arr[1] != arr[2])
            cout << "NO" << endl;
        else
            cout << "YES" << endl
                 << arr[0] << " " << arr[0] << " " << arr[2] << endl;
    }
    return 0;
}