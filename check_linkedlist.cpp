#include <iostream>
using namespace std;

struct node
{
    int data;
    node *pNext;
};

struct list
{
    node *pHead;
    node *pTail;
};

void KhoiTaoDSLK(list &l)
{
    l.pHead = NULL;
    l.pTail = NULL;
}

node *KhoiTaoNode(int x)
{
    node *p = new node;
    p->data = x;
    p->pNext = NULL;
    return p;
}

void ThemVaoDau(list &l, node *p)
{
    if (l.pHead = NULL)
    {
        l.pHead = l.pTail = p;
    }
    else
    {
        p->pNext = l.pHead;
        l.pHead = p;
    }
}

void ThemVaoCuoi(list &l, node *p)
{
    if (l.pHead == NULL)
    {
        l.pHead = l.pTail = p;
    }
    else
    {
        l.pTail->pNext = p;
        l.pTail = p;
    }
}

void ThemNode_p_VaoSauNode_q(list &l, node *p)
{
    int x;
    cout << "nhap gia tri nguyen cho x cua node q: ";
    cin >> x;
    node *q = KhoiTaoNode(x);

    if (q->data == l.pHead->data && l.pHead->pNext == NULL)
    {
        ThemVaoCuoi(l, p);
    }
    else
    {
        for (node *k = l.pHead; k != NULL; k = k->pNext)
        {
            if (k->data == q->data)
            {
                node *h = KhoiTaoNode(p->data);
                h->pNext = k->pNext;
                k->pNext = h;
            }
        }
    }
}

void ThemNode_p_VaoTruocNode_q(list &l, node *p)
{
    int x;
    cout << "nhap gia tri nguyen cho x cua node q: ";
    cin >> x;
    node *q = KhoiTaoNode(x);
    if (q->data == l.pHead->data && l.pHead->pNext == NULL)
    {
        ThemVaoDau(l, p);
    }

    else if (l.pHead->data == q->data and l.pHead->pNext != NULL)
    {
        p->pNext = l.pHead;
        l.pHead = p;

        node *g = new node();
        for (node *k = l.pHead->pNext; k != NULL; k = k->pNext)
        {
            if (k->data == q->data)
            {
                node *h = KhoiTaoNode(p->data);
                h->pNext = k;
                g->pNext = h;
            }
            g = k;
        }
    }
    else
    {
        node *g = new node();
        for (node *k = l.pHead; k != NULL; k = k->pNext)
        {
            if (k->data == q->data)
            {
                node *h = KhoiTaoNode(p->data);
                h->pNext = k;
                g->pNext = h;
            }
            g = k;
        }
    }
}

void XoaDau(list &l)
{
    if (l.pHead == NULL)
        return;
    else
    {
        node *p = l.pHead;
        l.pHead = l.pHead->pNext;
        delete p;
    }
}

void XoaCuoi(list &l)
{
    if (l.pHead == NULL)
        return;

    if (l.pHead->pNext == NULL)
    {
        XoaDau(l);
        return;
    }

    for (node *k = l.pHead; k != NULL; k = k->pNext)
    {
        if (k->pNext == l.pTail)
        {
            delete l.pTail;
            k->pNext = NULL;
            l.pTail = k;
            return;
        }
    }
}

void XoaNodeSauNode_p(list &l, node *p)
{
    for (node *k = l.pHead; k != NULL; k = k->pNext)
    {
        if (k->data == p->data)
        {
            k->pNext = k->pNext->pNext;
            delete k->pNext;
        }
    }
}

void XuatDanhSach(list l)
{
    for (node *k = l.pHead; k != NULL; k = k->pNext)
    {
        cout << k->data << " ";
    }
}

void Menu(list &l)
{

    int luachon;
    while (69)
    {
        system("cls");
        cout << "\n\n\t\t======Menu======";
        cout << "\n\t1.them node vao danh sach ";
        cout << "\n\t2.xuat danh sach lien ket";
        cout << "\n\t3.them node p vao sau node q";
        cout << "\n\t4.them node p vao truoc node q";
        cout << "\n\t5.Xoa dau";
        cout << "\n\t6.Xoa cuoi";
        cout << "\n\t7.Xoa node sau node p";
        cout << "\n\t0.thoat khoi chuong trinh";
        cout << "\n\n\t\t ======End======" << endl;

        cout << "nhap lua chon cua ban: ";
        cin >> luachon;
        if (luachon == 1)
        {
            int x;
            cout << "\nnhap gia tri nguyen cho node: ";
            cin >> x;
            node *p = KhoiTaoNode(x);
            ThemVaoCuoi(l, p);
        }
        else if (luachon == 2)
        {
            XuatDanhSach(l);
            system("pause");
        }
        else if (luachon == 3)
        {
            int x;
            cout << "nhap gia tri nguyen cho x cua node p: ";
            cin >> x;
            node *p = KhoiTaoNode(x);
            ThemNode_p_VaoSauNode_q(l, p);
        }
        else if (luachon == 4)
        {
            int x;
            cout << "nhap gia tri nguyen cho x cua node p: ";
            cin >> x;
            node *p = KhoiTaoNode(x);
            ThemNode_p_VaoTruocNode_q(l, p);
        }
        else if (luachon == 5)
        {
            XoaDau(l);
        }
        else if (luachon == 6)
        {
            XoaCuoi(l);
        }
        else if (luachon == 7)
        {
            int x;
            cout << "nhap gia tri nguyen cho p: ";
            cin >> x;
            node *p = KhoiTaoNode(x);
            XoaNodeSauNode_p(l, p);
        }
        else
        {
            break;
        }
    }
}

int main()
{
    list l;
    KhoiTaoDSLK(l);
    Menu(l);

    system("pause");
    return 0;
}