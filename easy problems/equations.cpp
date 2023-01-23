#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int b = 0, output = 0;
    for (int a = 0; a * a <= n; a++)
    {
        b = n - a * a;
        if (a + b * b == m)
            output++;
    }
    cout << output;
    return 0;
}