#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> points;
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        points.push_back(pair<int, int>(x, y));
    }
    bool neighboor[4] = {0, 0, 0, 0};
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        x = points[i].first;
        y = points[i].second;
        neighboor[0] = neighboor[1] = neighboor[2] = neighboor[3] = 0;
        for (int j = 0; j < n; j++)
        {
            if (points[j].first == x && points[j].second > y)
                neighboor[0] = 1;
            else if (points[j].first == x && points[j].second < y)
                neighboor[1] = 1;
            else if (points[j].first < x && points[j].second == y)
                neighboor[2] = 1;
            else if (points[j].first > x && points[j].second == y)
                neighboor[3] = 1;
            if (neighboor[0] && neighboor[1] && neighboor[2] && neighboor[3])
            {
                count++;
                break;
            }
        }
    }
    cout << count;
    return 0;
}