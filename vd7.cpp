#include <iostream>
using namespace std;

struct student
{
    string name;
    double gpa;
};

string grade(student &s)
{
    string a;
    if (s.gpa >= 3.6)
        a = "xuat xac";
    else if (s.gpa >= 3.2 && s.gpa < 3.6)
        a = "gioi";
    else if (s.gpa >= 2.5 && s.gpa < 3.2)
        a = "kha";
    else
    {
        a = "ko du dk";
    }
    return a;
}

void print(student &s)
{
    cout << s.name << " " << s.gpa << " " << grade(s);
}

student get(int n)
{
    student sv;
    student ans;
    string na;
    double g(0);

    for (int i = 0; i < n; i++)
    {
        cin >> sv.name >> sv.gpa;
        if (sv.gpa > g)
        {
            g = sv.gpa;
            na = sv.name;
        }
    }
    ans.name = na;
    ans.gpa = g;
    return ans;
}
int main()
{
    int n;
    cin >> n;
    student s;
    // cin >> s.name >> s.gpa;
    student b = get(n);
    print(b);
}