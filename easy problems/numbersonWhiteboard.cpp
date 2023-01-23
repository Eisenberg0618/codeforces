#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        puts("2");
        long curr(n);
        for (int i = n - 1; i >= 1; i--)
        {
            cout << i << " " << curr << endl;
            curr = (curr + i + 1) / 2;
        }
    }
    return 0;
}