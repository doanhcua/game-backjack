#include <iostream>

#include <cmath>

using namespace std;

void del(int a[], int &n, int m)
{
    for (int i = m; i < n - 1; i++)
        a[i] = a[i + 1];
    n--;
}

int main()
{
    int n;
    int a[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] > a[i - 1] && a[i] > a[i + 1])
        {
            del(a, n, i);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}