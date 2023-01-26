// đếm số phần tử có mặt giống nhau trong dãy

#include <iostream>

using namespace std;

void nhap_mang(int a[], const int &n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void xuat_mang(int a[], const int &n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] != -1)
        {
            int dem = 1;
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    dem++;
                    a[j] = -1;
                }
            }
            cout << a[i] << ' ' << dem << endl;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int a[100];
    nhap_mang(a, n);
    xuat_mang(a, n);
}