//
// Created by zhang on 2020/9/18.
//

#include "sqList.h"

#define ALL_NUMBER 700  // 宿舍总层数及人数

sqList::sqList() {
    s = new node();
}

sqList::~sqList() = default;

void sqList::Insert(node &p) const {
    node *q;
    node *temp;
    q = temp = s;
    if (p.domitoryNumber <= 0 || p.domitoryNumber >= ALL_NUMBER) {
        cout << "数值错误" << endl;
        return;
    }
    while (temp->next && temp->next->domitoryNumber < p.domitoryNumber) {
        q = temp;
        temp = temp->next;
    }
    p.next = temp->next;
    temp->next = &p;
    cout << "插入成功" << endl;
}

void sqList::Delete(int l) const {
    node *q;
    node *temp;
    q = temp = s;
    if (l <= 0 || l >= ALL_NUMBER) {
        cout << "数值错误" << endl;
        return;
    }
    while (temp->next && temp->next->domitoryNumber != l) {
        q = temp;
        temp = temp->next;
    }
    if (!(temp->next)) {
        cout << "删除失败" << endl;
    } else if (temp->next->domitoryNumber == l) {
        q = temp;
        temp = temp->next;
        q->next = temp->next;
        delete temp;
        cout << "删除成功" << endl;
    }
}

void sqList::Scan() const {
    node *temp;
    temp = s;
    while (temp->next) {
        temp->next->show_all();
        temp = temp->next;
    }
    cout << "浏览完成" << endl;
}

void sqList::Change(int l, int r) const {
    node *q;
    node *temp;
    q = temp = s;
    if (l <= 0 || l >= ALL_NUMBER) {
        cout << "数值错误" << endl;
        return;
    }
    while (temp->next && temp->next->domitoryNumber != l) {
        q = temp;
        temp = temp->next;
    }
    if (!(temp->next)) {
        cout << "修改失败" << endl;
    } else if (temp->next->domitoryNumber == l) {
        q = temp;
        temp = temp->next;
        temp->number = r;
        cout << "修改成功" << endl;
    }
}

void sqList::Merge(sqList &list) {
    /*
     * 利用链表的原有空间进行归并，结束时有一个链表会成为空链表
     * 而另一个链表，也就是正在操纵的链表会成为归并后的链表
     */
    node *p1;
    node *p2;
    p1 = s;
    p2 = list.s;
    node *temp_p;
    sqList *t = new sqList();
    temp_p = t->s;
    p1 = p1->next;
    p2 = p2->next;
    while (p1 && p2) {
        if (p1->domitoryNumber < p2->domitoryNumber) {
            temp_p->next = p1;
            p1 = p1->next;
            temp_p = temp_p->next;
        } else {
            temp_p->next = p2;
            p2 = p2->next;
            temp_p = temp_p->next;
        }
    }
    temp_p->next = p1 ? p1 : p2;
    s = t->s;
    list.s = new node();    // 这里只采用了生成空的头结点的方式来清空链表
    cout << "合并成功" << endl;
}
