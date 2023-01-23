#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= 2 * n; i++)
    {
        for (int j = 0; j <= 2 * n; j++)
        {
            int modrow = min(i, 2 * n - i);
            if (j >= n - modrow && j <= n + modrow)
            {
                printf("%d", min(j + modrow - n, n + modrow - j));
            }
            cout << " ";
        }
        cout << "\n";
    }
    return 0;
}