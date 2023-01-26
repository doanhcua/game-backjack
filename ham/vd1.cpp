// hàm đếm chữ số chẵn , chữ số lẻ của 1 số nguyên dương gồm n chữ số

#include <iostream>

using namespace std;

void dem(int n)
{
    int sochan = 0, sole = 0;
    while (n > 0)
    {
        int dv = n % 10;
        if (dv % 2 == 0)
            sochan++;
        else
            sole++;

        n = n / 10;
    }
    cout << sochan << ' ' << sole << endl;
}
int main()
{
    int n;
    cin >> n;
    while (n > 0)
    {
        int x;
        cin >> x;
        dem(x);
        n--;
    }

    return 0;
}