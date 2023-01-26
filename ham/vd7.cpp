/*
Viết hàm tìm vị trí xuất hiện đầu tiên của chữ số x trong số nguyên dương n.

Đầu vào
Đầu vào từ bàn phím gồm T+1 dòng.

Dòng đầu tiên chứa số nguyên T là số lượng số cần kiểm tra;
T dòng tiếp theo, mỗi dòng chứa một số nguyên n (n≤10^100)
và một chữ số x phân cách bởi một khoảng trống.

Đầu ra
In ra màn hình T dòng, mỗi dòng ghi ra vị trí đầu tiên của x trong n
(in ra −1 nếu x không xuất hiện trong n).
*/
#include <iostream>

using namespace std;

int check(string s, int a)
{

    int len = s.length();
    char ch = a + '0';
    for (int i = 0; i < len; i++)
    {
        if (s[i] == ch)
            return i + 1;
    }
    return -1;
}

int main()
{
    int b;
    cin >> b;
    for (int i = 1; i <= b; i++)
    {
        string s;
        int a;
        cin >> s >> a;
        cout << check(s, a) << endl;
    }
}