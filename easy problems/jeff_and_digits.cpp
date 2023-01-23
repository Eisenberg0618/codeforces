#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long zeroes(0), fives(0), input(0);
    while (n--)
    {
        cin >> input;
        if (input == 0)
            zeroes++;
        else if (input == 5)
            fives++;
    }
    if (fives >= 9 && zeroes > 0)
    {
        for (int i = 0; i < fives / 9; i++)
            cout << "555555555";
        for (int i = 0; i < zeroes; i++)
            cout << "0";
    }
    else if (zeroes > 0)
        cout << "0";
    else
        cout << "-1";
    return 0;
}