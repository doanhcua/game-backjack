#include <iostream>

using namespace std;

int main()
{
    string la1, la2;
    cin >> la1 >> la2;
    int diem = 0;
    if (la1 == "A" && la2 == "A")
        diem = 2;
    else
    {
        if (la1[0] <= '9' && la1[0] >= '2')
            diem += la1[0] - '0';
        else if (la1[0] == 'A')
            diem += 11;
        else
            diem += 10;
        if (la2[0] <= '9' && la2[0] >= 2)
            diem += la2[0] - '0';
        else if (la2[0] == 'A')
            diem += 11;
        else
            diem += 10;
    }
    cout << diem;
    return 0;
}