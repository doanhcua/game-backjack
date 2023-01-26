#include <iostream>
using namespace std;

int main()
{
    string mk;
    cin >> mk;
    int check_digit = 0;
    int check_upper = 0;
    int check_lower = 0;
    int check_punct = 0;
    int len = mk.length();
    for (int i = 1; i <= len; i++)
    {
        if (isdigit(mk[i]))
            check_digit = 1;
        if (isupper(mk[i]))
            check_upper = 1;
        if (islower(mk[i]))
            check_lower = 1;
        if (ispunct(mk[i]))
            check_punct = 1;
    }
    if (check_digit + check_upper + check_lower + check_punct == 4 && len >= 8)
        cout << "Yes";
    else
    {
        cout << "No";
    }
}