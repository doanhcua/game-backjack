#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>

using namespace std;

struct date
{
    int day, month, year;
};

bool leapYear(int year)
{
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        return true;
    return false;
}

vector<int> month31 = {1, 3, 5, 7, 8, 10, 12};
vector<int> month30 = {4, 6, 9, 11};

void nhap(date &D)
{
    char ch;
    cin >> D.day >> ch >> D.month >> ch >> D.year;
}

int days_of_month(date D)
{
    for (int i = 0; i < month31.size(); i++)
        if (D.month == month31[i])
            return 31;

    for (int i = 0; i < month30.size(); i++)
        if (D.month == month30[i])
            return 30;

    if (leapYear(D.year))
        return 29;
    else
        return 28;
}

bool checkDay(date D) // kiểm tra ngày hợp lệ
{
    if (D.day <= 0 || D.month <= 0)
        return false;
    if (D.day > days_of_month(D) || D.month > 12)
        return false;
    return true;
}

date getNextDay(date D)
{
    date res;
    res = D; // chi copy du lieu

    res.day++;
    if (!checkDay(res))
    {
        res.day = 1;
        res.month++;
        if (!checkDay(res))
        {
            res.month = 1;
            res.year++;
        }
    }

    return res;
}

void printday(date D)
{
    cout << setw(2) << setfill('0') << D.day << "/";
    cout << setw(2) << setfill('0') << D.month << "/";
    cout << setw(4) << setfill('0') << D.year;
    cout << endl;
}

int main()
{
    date D;
    nhap(D);
    printday(D);

    if (!checkDay(D))
        cout << "INVALID\n";
    else
    {
        date next_date = getNextDay(D);
        printday(next_date);
    }

    return 0;
}