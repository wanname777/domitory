#include <iostream>
#include "node.h"
#include "sqList.h"

using namespace std;


void index(sqList &l, sqList &tl);

int main() {
    sqList L1, L2;
    while (true) {
        cout << "学生宿舍1、2楼管理系统" << endl;
        cout << "你拥有两个链表List1,List2" << endl;
        cout << "请输入你要操控的链表（输入1或2）:" << endl;
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
        cout << "你拥有以下操作：" << endl;
        cout << "1.插入" << endl << "2.删除" << endl << "3.浏览" << endl
             << "4.修改" << endl << "5.合并" << endl << "0.退出" << endl;
        int n;
        cin >> n;
        if (n == 0) {
            system("cls");
            break;
        } else if (n == 1) {
            cout << "请输入要插入的宿舍号和人数:" << endl;
            int n1, n2;
            cin >> n1 >> n2;
            node *p = new node(n1, n2);
            l.Insert(*p);
        } else if (n == 2) {
            cout << "请输入要删除的宿舍号:" << endl;
            int n1;
            cin >> n1;
            l.Delete(n1);
        } else if (n == 3) {
            l.Scan();
        } else if (n == 4) {
            cout << "请输入要修改的宿舍号和人数:" << endl;
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
