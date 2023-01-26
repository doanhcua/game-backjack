#include <iostream>
using namespace std;

struct so_lieu
{
    int dai;
    int rong;
};

void nhap_so_lieu(so_lieu &hcn)
{
    cout << "2 kich thuoc cua hcn: ";
    cin >> hcn.dai >> hcn.rong;
}

int chuvi(so_lieu &hcn)
{
    return (hcn.dai + hcn.rong) * 2;
}

int dientich(so_lieu &hcn)
{
    return hcn.dai * hcn.rong;
}

int main()
{
    so_lieu hcn;
    nhap_so_lieu(hcn);
    cout << chuvi(hcn) << " " << dientich(hcn);
    return 0;
}