#include <iostream>
using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = -n + 1; j < n; j++)
//         {
//             if (abs(j) < i)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
// }

int main()
{
    int a[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }

    for (int i = 0; i < n; i++)
    {
        if (a[i] != -1)
        {
            int dem = 1;
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] == a[i])
                {
                    a[j] = -1;
                    dem++;
                }
            }
            cout << a[i] << " " << dem << endl;
        }
    }
}