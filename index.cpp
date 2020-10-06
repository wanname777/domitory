//
// Created by zhang on 2020/10/3.
//

#include "index.h"

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
