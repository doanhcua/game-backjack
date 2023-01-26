#include <iostream>

#include <iomanip>

#include <math.h>

using namespace std;

int UCLN(int a, int b);

int main()
{
    int a, b;
    cin >> a >> b;

    a = abs(a);
    b = abs(b);

    cout << UCLN(a, b) << endl;
    return 0;
}
int UCLN(int a, int b)
{
    if (a * b == 0)
        return (a + b);

    if (a > b)
        return UCLN(a % b, b);
    return UCLN(a, b % a);
}