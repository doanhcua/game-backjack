#include <iostream>
using namespace std;

int dequi(int n, int a[], int b[])
{
    if (n == 0)
        return 0;
    if (n == 1)
        return a[1];

    for (int i = 1; i <= n; i++)
    {
        b[i] = dequi(n - i, a, b);
    }
    int max = 0;
    for (int i = 1; i <= n; i++)
    {
        int temp = a[i] + b[i];
        if (temp > max)
            max = temp;
    }
    return max;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    int b[100];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    cout << dequi(n, a, b);
}
