#include <iostream>

#include <cmath>

#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int y = n; y >= -n; y--)
    {
        for (int x = -n; x <= n; x++)
        {
            cout << ((abs(x) + abs(y) <= n) ? "* " : ". ");
        }
        cout << endl;
    }
    return 0;
}