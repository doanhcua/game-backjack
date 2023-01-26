#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct complex
{
    int a;
    int b;
};

double abs(complex &x)
{
    return sqrt(x.a * x.a + x.b * x.b);
}

void print(complex &x)
{
    if (x.a == 0)
    {
        if (x.b == 0)
        {
            cout << "0" << endl;
        }
        else if (x.b == 1)
        {
            cout << "i" << endl;
        }
        else if (x.b == -1)
        {
            cout << "-i" << endl;
        }
        else if (x.b > 0)
        {
            cout << "+" << x.b << "i" << endl;
        }
        else
        {
            cout << x.b << "i" << endl;
        }
    }
    else
    {
        cout << x.a;
        if (x.b == 0)
            cout << endl;
        else if (x.b == 1)
        {
            cout << "+i" << endl;
        }
        else if (x.b == -1)
        {
            cout << "-i" << endl;
        }
        else if (x.b > 0)
        {
            cout << "+" << x.b << "i" << endl;
        }
        else
        {
            cout << x.b << "i" << endl;
        }
    }
}

complex add(complex &x, complex &y)
{
    complex n;
    n.a = x.a + y.a;
    n.b = x.b + y.b;
    return n;
}
int main()
{
    complex x, y;
    cin >> x.a >> x.b >> y.a >> y.b;
    print(x);
    print(y);
    // cout << fixed << setprecision(2) << abs(x);
    complex n = add(x, y);
    print(n);
}