#include <iostream>

#include <cmath>

using namespace std;

bool kiemtra(int n)
{
    int sum = 1; // khai bao biem sum
    int can = sqrt(n);
    for (int i = 2; i <= can; i++)
    {
        if (n % i == 0)
        {
            sum += i;
            sum += n / i;
        }
    }

    if (sum == n)
        return true; // tra ve true
    return false;
}
int main()
{
    int N;
    cin >> N;
    for (int n = 2; n <= N; n++)
    {
        if (kiemtra(n))
            cout << n << ' ' << endl;
    }
    return 0;
}