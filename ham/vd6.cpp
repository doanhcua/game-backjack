/*
Viết hàm tính ước số lẻ lớn nhất khác chính nó của một số nguyên dương n cho trước.

Đầu vào
Đầu vào từ bàn phím gồm T+1 dòng.

Dòng đầu tiên chứa số nguyên T là số lượng số cần kiểm tra;
T dòng tiếp theo, mỗi dòng chứa một số nguyên n (n<100).
Đầu ra
In ra màn hình T dòng, mỗi dòng ghi ra ước số lẻ lớn nhất khác chính nó của n.
*/
#include <iostream>

using namespace std;

// Tìm ước số lẻ lớn nhất của số nguyên dương n. Ví dụ n = 100 ước lẻ lớn nhất là 25
int check(int N)
{
    for (int i = N - 1; i >= 1; i--)
    {
        if (N % i == 0 && i % 2 != 0)
        {
            return i;
        }
    }
}

int main()
{
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        int N;
        cin >> N;
        cout << check(N) << endl;
    }
}