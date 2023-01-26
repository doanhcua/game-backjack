#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

void nhap_mang(int a[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void xuat_mang(int a[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

bool so_nguyen_to(int x)
{
    int abc = sqrt(x);
    if (x < 2)
        return false;
    else if (x == 2 || x == 3)
        return true;
    else
    {
        for (int i = 2; i <= abc; i++)
        {
            if (x % i == 0)
                return false;
        }
    }
    return true;
}

void xoa_mang(int a[], int &n, int index)
{
    for (int i = index; i <= n - 2; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}

void them_mang(int a[], int &n, int x, int vitri)
{
    for (int i = n - 1; i >= vitri; i--)
    {
        a[i + 1] = a[i];
    }
    a[vitri] = x;
    n++;
}

int main()
{
    int n;
    cin >> n;
    // int vitri;
    // cin >> vitri;
    // int x;
    // cin >> x;
    int a[20];
    nhap_mang(a, n);
    xuat_mang(a, n);
    cout << endl;
    cout << "..............................." << endl;
    // them_mang(a, n, x, vitri);
    // for (int i = 0; i < n; i++)
    // {
    //     if (so_nguyen_to(a[i]) == true)
    //     {
    //         // xoa_mang(a, n, i);
    //         them_mang(a, n, x, i + 1);
    //     }
    // }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                xoa_mang(a, n, j);
                j--;
            }
        }
    }

    xuat_mang(a, n);
}