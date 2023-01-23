#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    std::string first(" "), second(" "), temp(" ");
    int goals[2] = {0};
    while (n)
    {
        getline(cin, temp);
        if (first == " ")
        {
            first = temp;
        }
        else if (temp != first && second == " ")
            second = temp;
        (temp == first) ? ++goals[0] : ++goals[1];
    }
    temp = (goals[0] > goals[1]) ? first : second;
    cout << temp << endl;
    return 0;
}