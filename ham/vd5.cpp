/*
Viết hàm tìm vị trí xuất hiện đầu tiên của chữ số x trong số nguyên dương n.

Đầu vào
Đầu vào từ bàn phím gồm T+1 dòng.

Dòng đầu tiên chứa số nguyên T là số lượng số cần kiểm tra;
T dòng tiếp theo, mỗi dòng chứa một số nguyên n (n≤10100)
và một chữ số x phân cách bởi một khoảng trống.

Đầu ra
In ra màn hình T dòng, mỗi dòng ghi ra vị trí đầu tiên của x trong n
(in ra −1 nếu x không xuất hiện trong n).
*/
#include <iostream>

using namespace std;

int check(string s)
{
    int len = s.length();
    int dem = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '2' || s[i] == '3' || s[i] == '5' || s[i] == '7')
        {
            dem++;
        }
    }
    return dem;
}
int main()
{
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        string s;
        cin >> s;
        cout << check(s) << endl;
    }
}