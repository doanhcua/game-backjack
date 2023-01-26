/*Viết hàm kiểm tra xem số nguyên dương n (gồm k chữ số - k<20)
có chỉ chứa các chữ số chẵn hoặc chỉ chứa các chữ số lẻ hay không.

Đầu vào
Đầu vào từ bàn phím gồm T+1 dòng.
Dòng đầu tiên chứa số nguyên T là số lượng số cần kiểm tra;
T dòng tiếp theo, mỗi dòng chứa một số nguyên n.

Đầu ra
In ra màn hình T dòng, mỗi dòng ghi ra "yes" hoặc "no"
tương ứng với mỗi số n có thỏa mãn điều kiện không.
*/
#include <iostream>

#include <string>

using namespace std;

bool kt(int n)
{
    bool check = true;
    int a = n % 2;
    while (n > 9)
    {
        n = n / 10;
        if (n % 2 != a)
        {
            check = false;
            break;
        }
    }
    return check;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int num;
        cin >> num;
        if (kt(num))
            cout << "yes";
        else
            cout << "no";
    }
}