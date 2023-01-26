#include <iostream>

#include <iomanip>

#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[200];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] % 2 == 0)
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] > a[j] && a[j] % 2 == 0)
                {
                    swap(a[i], a[j]);
                }
            }
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] % 2 == 1)
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] < a[j] && a[j] % 2 == 1)
                {
                    swap(a[i], a[j]);
                }
            }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
    return 0;
}