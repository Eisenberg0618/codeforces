#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    int res = max(x1, x2);
    int ans = max(res, x3);
    int res1 = min(x1, x2);
    int ans1 = min(res1, x3);
    cout << ans - ans1 << endl;
    return 0;
}