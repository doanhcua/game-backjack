#include <iostream>
using namespace std;

struct date
{
    int ngay;
    int thang;
    int nam;
};

struct sinhvien
{
    int ma_sv;
    date Date;
};

void nhap_ngaysinh(date &D)
{
    char ch;
    cout << " nhap ngay sinh ";
    cin >> D.ngay >> ch >> D.thang >> ch >> D.nam;
}

int sosanh(date &d1, date &d2)
{
    if (d1.nam > d2.nam)
        return 1;
    if (d2.nam > d2.nam)
        return -1;

    if (d1.thang > d2.thang)
        return 1;
    if (d2.thang > d1.thang)
        return -1;

    if (d1.ngay > d2.ngay)
        return 1;
    if (d2.ngay > d1.ngay)
        return -1;
}

int main()
{
    date d1, d2;
    nhap_ngaysinh(d1);
    nhap_ngaysinh(d2);

    if (sosanh(d1, d2) == 1)
        cout << "ban 2 sinh truoc";
    if (sosanh(d1, d2) == -1)
        cout << "ban 1 sinh truoc";
    else
    {
        cout << "2 ban cung ngay sinh";
    }
    return 0;
}