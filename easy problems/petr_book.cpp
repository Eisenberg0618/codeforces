#include <bits/stdc++.h>
using namespace std;
int main()
{
    int pages;
    cin >> pages;
    int weekpages[7] = {0};
    int total = 0;
    for (int i = 0; i < 7; i++)
    {
        cin >> weekpages[i];
        total += weekpages[i];
    }
    pages = pages % total;
    if (pages == 0)
    {
        pages = total;
    }
    for (int i = 0; i <= 7; i++)
    {
        if (pages <= 0)
        {
            cout << i;
            break;
        }
        pages -= weekpages[i];
    }
    return 0;
}