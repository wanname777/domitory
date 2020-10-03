//
// Created by zhang on 2020/9/18.
//

#include "sqList.h"

sqList::sqList() {
    s = new node();
}

sqList::~sqList() = default;

void sqList::Insert(node &p) const {
    node *q;
    node *temp;
    q = temp = s;
    if (p.domitoryNumber <= 0 || p.domitoryNumber >= 300) {
        cout << "��ֵ����" << endl;
        return;
    }
    while (temp->next && temp->next->domitoryNumber < p.domitoryNumber) {
        q = temp;
        temp = temp->next;
    }
    p.next = temp->next;
    temp->next = &p;
    cout << "����ɹ�" << endl;
}

void sqList::Delete(int l) const {
    node *q;
    node *temp;
    q = temp = s;
    if (l <= 0 || l >= 300) {
        cout << "��ֵ����" << endl;
        return;
    }
    while (temp->next && temp->next->domitoryNumber != l) {
        q = temp;
        temp = temp->next;
    }
    if (!(temp->next)) {
        cout << "ɾ��ʧ��" << endl;
    } else if (temp->next->domitoryNumber == l) {
        q = temp;
        temp = temp->next;
        q->next = temp->next;
        cout << "ɾ���ɹ�" << endl;
    }
}

void sqList::Scan() const {
    node *temp;
    temp = s;
    while (temp->next) {
        temp->next->show_all();
        temp = temp->next;
    }
    cout << "������" << endl;
}

void sqList::Change(int l, int r) const {
    node *q;
    node *temp;
    q = temp = s;
    if (l <= 0 || l >= 300) {
        cout << "��ֵ����" << endl;
        return;
    }
    while (temp->next && temp->next->domitoryNumber != l) {
        q = temp;
        temp = temp->next;
    }
    if (!(temp->next)) {
        cout << "�޸�ʧ��" << endl;
    } else if (temp->next->domitoryNumber == l) {
        q = temp;
        temp = temp->next;
        temp->number = r;
        cout << "�޸ĳɹ�" << endl;
    }
}

void sqList::Merge(sqList &list) {
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
    list.s = new node();
    cout << "�ϲ��ɹ�" << endl;
}
