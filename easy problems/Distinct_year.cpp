#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (true)
    {
        n = n + 1;
        int a = n / 1000;
        int b = n / 100 % 10;
        int c = n / 10 % 10;
        int d = n % 10;
        if (a != b && a != c && a != d && b != a && b != c && b != d && d != a && d != c && d != b)
            break;
    }
    cout << n;
    return 0;
}