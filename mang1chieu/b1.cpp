/*
Cho một dãy gồm n số nguyên dương. In ra số chẵn lớn nhất trong dãy đó,
nếu không có số chẵn nào thì in ra
INVALID (giả sử dãy các số không có số giống nhau).

Đầu vào:
• Dòng đầu tiên ghi số n.
• Dòng tiếp theo chứ n số nguyên dương (cách nhau bởi dấu cách, n <= 100).

Đầu ra:
• In ra số chẵn lớn nhất trong dãy đó, nếu không có số chẵn nào thì in ra INVALID.
*/
#include <iostream>

using namespace std;

int main()
{
    int n, max = -1;
    cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            if (a[i] > max)
            {
                max = a[i];
            }
        }
    }
    if (max == -1)
    {
        cout << "invalid";
    }
    else
        cout << max;
}