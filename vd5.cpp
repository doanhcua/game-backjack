#include <iostream>
using namespace std;

struct rectangle
{
    int maso;
    int cd;
    int cr;
};

int main()
{
    int n;
    int c = 0;
    int ms = 0;
    rectangle a;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a.maso >> a.cd >> a.cr;
        int cv = (a.cd + a.cr) * 2;
        if (cv > c)
        {
            c = cv;
            ms = a.maso;
        }
    }
    cout << ms;
}