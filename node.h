//
// Created by zhang on 2020/9/18.
//

#ifndef DOMITORY_NODE_H
#define DOMITORY_NODE_H

#include <iostream>

using namespace std;

class node {
public:
    class node *next = NULL;

    int domitoryNumber; // ¬•≤„£®Àﬁ…·∫≈£©
    int number; // Àﬁ…·»À ˝

    node();

    node(int l, int r);

    ~node();

    void show_all() const;
};

#endif //DOMITORY_NODE_H
