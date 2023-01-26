#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int m, n, k;
    cin >> m >> n >> k;
    int maxspace = 1;
    while (k--)
    {
        int x, y, w, h;
        cin >> x >> y >> w >> h;
        if (x + w > m)
            w = m - x;
        if (y + h > n)
            h = n - y;
        a = w * h;
        if (maxspace < a)
            maxspace = a;
    }
    cout << maxspace;
}