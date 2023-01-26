/*
Cho dãy số A có n phần tử được đánh số thứ tự từ 1 đến n.

Viết chương trình đổi chỗ hai phần tử ở vị trí x và y của dãy A.

Đầu vào
Đầu vào từ bàn phím gồm ba dòng:

Dòng đầu tiên chứa số nguyên n (n≤1000);
Dòng thứ hai chứa n số nguyên là n phần tử của dãy số A, phân tách nhau bởi dấu cách.
Dòng thứ ba chứa hai số nguyên x và y, phân tách nhau bởi dấu cách.

Đầu ra
In ra màn hình dãy số A sau khi đã đổi chỗ hai phần tử ở vị trí x và y.

Các phần tử trong dãy được phân tách nhau bởi duy nhất một dấu cách.
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x, y;
    cin >> x >> y;
    int m = 0;

    m = a[x - 1];
    a[x - 1] = a[y - 1];
    a[y - 1] = m;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}