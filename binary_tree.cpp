#include <iostream>
using namespace std;

struct node
{
    int data;
    node *pLeft;
    node *pRight;
};

void KhoiTaoCay(node *&t)
{
    t = NULL;
}

void ThemVaoCay(node *&t, int x)
{
    if (t == NULL)
    {
        node *p = new node;
        p->data = x;
        p->pLeft = NULL;
        p->pRight = NULL;
        t = p;
    }
    else
    {
        if (t->data > x)
        {
            ThemVaoCay(t->pLeft, x);
        }
        else if (t->data < x)
        {
            ThemVaoCay(t->pRight, x);
        }
    }
}

void duyetcaytheo_NLR(node *t)
{
    if (t != NULL)
    {
        cout << t->data << " ";      // xuất dữ liệu trong node
        duyetcaytheo_NLR(t->pLeft);  // duyệt qua trái
        duyetcaytheo_NLR(t->pRight); // duyệt qua phải
    }
}
void Menu(node *&t)
{
    int luachon;
    while (true)
    {
        system("cls");
        cout << "\n\n\t\t======Menu======";
        cout << "\n\n\t\t1.Them gia tri vao cay";
        cout << "\n\n\t\t2.Xuat cac gia tri theo NLR";
        cout << "\n\n\t\t0.Thoat khoi chuong trinh" << endl;

        cout << "nhap lua chon: ";
        cin >> luachon;
        if (luachon == 1)
        {
            int x;
            cout << "nhap gia tri nguyen cho x: ";
            cin >> x;
            ThemVaoCay(t, x);
        }
        else if (luachon == 2)
        {
            duyetcaytheo_NLR(t);
            system("pause");
        }
        else
        {
            break;
        }
    }
}

int main()
{
    node *t;
    KhoiTaoCay(t);
    Menu(t);
    system("pause");
    return 0;
}