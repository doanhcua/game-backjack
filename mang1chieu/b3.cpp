// Nhập vào 1 dãy n số nguyên dương. Gía trị mỗi phần tử <= 1000.
// In ra số các phần tử khác nhau trong dãy.

#include <iostream>
using namespace std;
int main()
{
    int a, k = 0;
    cin >> a;
    unsigned int b[100];
    for (int i = 0; i < a; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = i + 1; j < a; j++)
        {
            if (b[i] == b[j])
            {
                b[j] = -1;
            }
        }
        if (b[i] != -1)
            k++;
    }
    cout << k;
}
