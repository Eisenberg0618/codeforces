#include <bits/stdc++.h>
using namespace std;
int main()
{
    long colors[4];
    for (int i = 0; i < 4; i++)
        cin >> colors[i];
    int count = 0;
    if (colors[1] == colors[0])
        count++;
    if (colors[2] == colors[0] || colors[2] == colors[1])
        count++;
    if (colors[3] == colors[0] || colors[3] == colors[1] || colors[3] == colors[2])
        count++;
    if (colors[4] == colors[0] || colors[4] == colors[1] || colors[4] == colors[2] || colors[4] == colors[3])
        count++;
    cout << count;
    return 0;
}