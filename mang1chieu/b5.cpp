/*
Viết chương trình tính giá trị trung bình và phương sai của một dãy số thực.

Đầu vào
Đầu vào từ bàn phím gồm hai dòng:

Dòng đầu tiên chứa số nguyên n (n≤100) là số lượng phần tử của dãy số;
Dòng thứ hai chứa n số thực là các phần tử của dãy số đó.
Các số phân tách nhau bởi dấu cách.

Đầu ra
In ra màn hình giá trị trung bình và phương sai của dãy số

Phân tách các đáp án trong kết quả đầu ra bằng một dấu cách duy nhất.
*/
#include <iostream>

#include <iomanip>

#include <math.h>

using namespace std;

void check(double a[], int n)
{
    double sum = 0;
    double tong = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    double tb = sum / n;
    for (int i = 0; i < n; i++)
    {

        tong += (tb - a[i]) * (tb - a[i]);
    }
    double ps = tong / n;
    cout << setprecision(2) << fixed << tb << ' ' << ps << endl;
}
int main()
{
    int n;
    cin >> n;
    double a[100];
    check(a, n);
}