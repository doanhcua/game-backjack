/*
Viết hàm tính tổng các chữ số của số nguyên dương n cho trước.

Đầu vào
Đầu vào từ bàn phím gồm T+1 dòng.

Dòng đầu tiên chứa số nguyên T là số lượng số cần kiểm tra;
T dòng tiếp theo, mỗi dòng chứa một số nguyên n (n≤10100).
Đầu ra
In ra màn hình T dòng, mỗi dòng ghi ra tổng các chữ số của n.
*/
#include <iostream>

using namespace std;

long long sum(int n)
{

    int sum = 0;
    while (n > 0)
    {
        n = n % 10;
        sum += n;
        n = n / 10;
    }
    return sum;
}
int main()
{
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        int n;
        cin >> n;
        cout << sum(n) << endl;
    }
    return 0;
}