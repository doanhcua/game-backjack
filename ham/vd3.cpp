/*
Viết hàm kiểm tra số nguyên dương n có phải là số đối xứng hay không.
Số đối xứng là số có giá trị không đổi nếu đọc các chữ số từ phải qua trái
Ví dụ:

Đối xứng: 13531
Không đối xứng: 13921
Đầu vào
Đầu vào từ bàn phím gồm T+1 dòng.

Dòng đầu tiên chứa số nguyên T là số lượng số cần kiểm tra;
T dòng tiếp theo, mỗi dòng chứa một số nguyên n.

Đầu ra
In ra màn hình T dòng, in ra "yes" hoặc "no" tương ứng với số n có phải số đối xứng hay không.
*/
#include <iostream>

using namespace std;

bool doi_xung(string s)
{
    int len = s.length();
    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - 1 - i])
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (doi_xung(s))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}