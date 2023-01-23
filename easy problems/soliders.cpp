#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int res = 0;
    int ans = 0;
    for (int i = 1; i <= w; i++)
    {
        res += k * i;
    }
    ans = res - n;
    if (ans < 0)
        cout << 0;
    else
        cout << ans;
    return 0;
}