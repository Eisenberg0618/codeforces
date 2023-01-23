#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = 0;
    while (a * (a + 1) * (a + 2) <= 6 * n)
    {
        a++;
    }
    a--;
    cout << a << endl;
    return 0;
}