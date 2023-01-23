#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int newscore;
    cin >> newscore;
    int min = newscore, max = newscore, amazing = 0;
    while (n--)
    {
        cin >> newscore;
        if (newscore < min)
        {
            min = newscore;
            amazing++;
        }
        else if (newscore > max)
        {
            max = newscore;
            amazing++;
        }
    }
    cout << amazing;
    return 0;
}