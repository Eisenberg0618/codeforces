#include <bits/stdc++.h>
using namespace std;

int main()
{
    long input;
    input = 13;
    long first(0), second(0), third(0), newfib(1);
    while (newfib < input)
    {
        first = second;
        third = newfib;
        newfib += second;
        second = third;
    }
    if (input == 1)
        second = 1;
    cout << second - first << " " << first << " " << first;
    return 0;
}