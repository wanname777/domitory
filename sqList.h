//
// Created by zhang on 2020/9/18.
//

#ifndef DOMITORY_SQLIST_H
#define DOMITORY_SQLIST_H

#include "node.h"

class sqList {
public:
    node *s;    // Á´±í½áµã

    sqList();

    ~sqList();

    void Insert(node &p) const;

    void Delete(int l) const;

    void Scan() const;

    void Change(int l, int r) const;

    void Merge(sqList &list);

};


#endif //DOMITORY_SQLIST_H
