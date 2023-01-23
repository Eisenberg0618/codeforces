#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int curMax = 0, lastchild = 0;
    for (int i = 1; i <= n; i++)
    {
        int n;
        cin >> n;
        int temp = (n / m);
        if (temp >= curMax)
        {
            curMax = temp;
            lastchild = i;
        }
    }
    cout << lastchild;
    return 0;
}