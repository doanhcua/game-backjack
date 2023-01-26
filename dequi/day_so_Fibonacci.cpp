#include <iostream>

using namespace std;
int khu_dequi(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    long long fn, f0 = 0, f1 = 1;
    for (int i = 2; i <= n; i++)
    {
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
    }
    return fn;
}
int dequi(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return dequi(n - 1) + dequi(n - 2);
}
int main()
{
    int n;
    cin >> n;
    cout << dequi(n) << endl;
    cout << khu_dequi(n) << endl;
    return 0;
}