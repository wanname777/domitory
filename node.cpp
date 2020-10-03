//
// Created by zhang on 2020/9/18.
//

#include "node.h"

node::node() {
    domitoryNumber = number = 0;
}

node::node(int l, int r) {
    domitoryNumber = l;
    number = r;
}

node::~node() = default;

void node::show_all() const {
    cout << "Â¥²ã:" << domitoryNumber << " " << "ÈËÊý:" << number << endl;
}
