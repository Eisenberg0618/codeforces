#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    int X = 0;
    while (n >= 0)
    {
        getline(cin, s);
        if (s == "++X" || s == "X++")
            ++X;
        if (s == "--X" || s == "X--")
            --X;
        n--;
    }
    cout << X;
    return 0;
}