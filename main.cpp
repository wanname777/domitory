#include <iostream>
#include "node.h"
#include "sqList.h"

using namespace std;


void index(sqList &l, sqList &tl);

int main() {
    sqList L1, L2;
    while (true) {
        cout << "ѧ������1��2¥����ϵͳ" << endl;
        cout << "��ӵ����������List1,List2" << endl;
        cout << "��������Ҫ�ٿص���������1��2��:" << endl;
        int num;
        cin >> num;
        if (num == 1) {
            system("cls");
            index(L1, L2);
        } else if (num == 2) {
            system("cls");
            index(L2, L1);
        } else {
            system("cls");
            break;
        }
        system("cls");
    }
    return 0;
}

void index(sqList &l, sqList &tl) {
    while (true) {
        cout << "��ӵ�����²�����" << endl;
        cout << "1.����" << endl << "2.ɾ��" << endl << "3.���" << endl
             << "4.�޸�" << endl << "5.�ϲ�" << endl << "0.�˳�" << endl;
        int n;
        cin >> n;
        if (n == 0) {
            system("cls");
            break;
        } else if (n == 1) {
            cout << "������Ҫ���������ź�����:" << endl;
            int n1, n2;
            cin >> n1 >> n2;
            node *p = new node(n1, n2);
            l.Insert(*p);
        } else if (n == 2) {
            cout << "������Ҫɾ���������:" << endl;
            int n1;
            cin >> n1;
            l.Delete(n1);
        } else if (n == 3) {
            l.Scan();
        } else if (n == 4) {
            cout << "������Ҫ�޸ĵ�����ź�����:" << endl;
            int n1, n2;
            cin >> n1 >> n2;
            l.Change(n1, n2);
        } else if (n == 5) {
            l.Merge(tl);
        }
        system("pause");
        system("cls");
    }
}
