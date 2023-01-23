#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int out = 0, in = 0, curcap = 0, maxcap = 0;
    while (n >= 0)
    {
        cin >> out >> in;
        curcap += in - out;
        if (curcap > maxcap)
            maxcap = curcap;
        n--;
    }
    cout << maxcap;
    return 0;
}