#include <iostream>
using namespace std;

struct phanso
{
    int Tu_so;
    int Mau_so;
};

void nhap_phan_so(phanso &ps)
{
    cin >> ps.Tu_so >> ps.Mau_so;
}

int ucln(int a, int b)

{
    while (a * b != 0)
        if (a > b)
            a = a % b;
        else
            b = b % a;

    return a + b;
}

void ps_toigian(phanso &ps)
{
    int uc = ucln(ps.Tu_so, ps.Mau_so);
    ps.Tu_so /= uc;
    ps.Mau_so /= uc;
}

void in_phan_so(phanso &ps)
{
    ps_toigian(ps);
    cout << ps.Tu_so << "/" << ps.Mau_so << endl;
}

phanso add(phanso &ps1, phanso &ps2)
{
    phanso tong;
    tong.Tu_so = ps1.Tu_so * ps2.Mau_so + ps1.Mau_so * ps2.Tu_so;
    tong.Mau_so = ps1.Mau_so * ps2.Mau_so;

    return tong;
}
int main()
{
    phanso ps1, ps2;
    nhap_phan_so(ps1);
    in_phan_so(ps1);

    nhap_phan_so(ps2);
    in_phan_so(ps2);

    phanso tong = add(ps1, ps2);
    in_phan_so(tong);
}