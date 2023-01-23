#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, r;
    cin >> k >> r;
    int d = 10;
    for (int i = 1; i <= d; i++)
    {
        int x = i * k;
        if ((x % d == 0) || (x % d == r))
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}