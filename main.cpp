#include "node.h"
#include "sqList.h"
#include "index.h"

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

