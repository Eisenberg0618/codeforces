#include <bits/stdc++.h>
using namespace std;
int main()
{
    const int primes = 15;
    const int prime[primes] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    int n, m;
    cin >> n >> m;
    bool res = false;
    for (int i = 0; i < primes - 1; i++)
    {
        if (n == prime[i] && m == prime[i + 1])
            res = true;
    }
    if (res == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}