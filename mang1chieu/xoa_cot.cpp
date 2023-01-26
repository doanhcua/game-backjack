/*
Cho ma trận kích thước m×n chứa các số nguyên, các hàng được đánh số từ 1 đến m,
các cột được đánh số từ 1 đến n.
Cho số nguyên i nhiệm vụ của bạn là viết chương trình xóa cột thứ i của ma trận.

Đầu vào
Đầu vào từ bàn phím gồm m+2 dòng:

Dòng đầu tiên chứa 2 số nguyên m,n cách nhau bởi một dấu cách(m,n≤1000).
m dòng tiếp theo, mỗi dòng chứa n số,
cách nhau bởi một dấu cách, biểu diễn ma trận đã cho.
Dòng cuối cùng chứa số nguyên i.

Đầu ra
In ra màn hình m dòng, mỗi dòng gồm n−1 số, cách nhau bởi một dấu cách,
biểu diễn ma trận sau khi đã xóa cột thứ i.
*/

#include <iostream>

using namespace std;

void xuat_mang(int a[][2000], int n, int &m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    int a[2000][2000];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int c;
    cin >> c;
    if (c - 1 >= 0 && c - 1 < m)
    {
        for (int i = 0; i < n; i++)
            for (int j = c - 1; j < m - 1; j++)
                a[i][j] = a[i][j + 1];
        m--;
    }

    xuat_mang(a, n, m);
    return 0;
}
