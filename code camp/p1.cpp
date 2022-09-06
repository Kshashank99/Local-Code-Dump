#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    int minx = min(abs(x - a), abs(x - b));
    int miny = min(abs(y - a), abs(y - b));
    // cout << minx << " " << miny << endl;
    int dist = abs(x - y);
    if (minx + miny >= dist)
    {
        cout << dist;
    }
    else
    {
        cout << minx + miny << endl;
    }
}