// tổng giai thừa các số lẻ

#include <iostream>

using namespace std;

long long giaithua(int n)
{
    if (n == 1)
        return 1;
    return n * giaithua(n - 1);
}
int main()
{
    int n;
    cin >> n;
    double s = 0;
    for (int i = 0; i <= n; i++)
        s += giaithua(2 * i + 1);
    cout << s << endl;
    return 0;
}
