#include <iostream>

#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    unsigned long long v[5];

    for (unsigned long long a = 1; a < n; a++)
    {
        v[0] = a * a * a * a * a;
        for (unsigned long long b = a + 1; b < n; b++)
        {
            v[1] = b * b * b * b * b;
            for (unsigned long long c = b + 1; c < n; c++)
            {
                v[2] = c * c * c * c * c;
                for (unsigned long long d = c + 1; d < n; d++)
                {
                    v[3] = d * d * d * d * d;
                    for (unsigned long long e = n; e <= n; e--)
                    {
                        v[4] = e * e * e * e * e;
                        if (v[0] + v[1] + v[2] + v[3] == v[4])
                        {
                            cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << ' ' << endl;
                        }
                    }
                }
            }
        }
    }
}