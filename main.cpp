#include "node.h"
#include "sqList.h"
#include "index.h"

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

