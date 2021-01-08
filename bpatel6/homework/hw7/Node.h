//
// Created by Suku on 4/10/2019.
//

#ifndef HW7_NODE_H
#define HW7_NODE_H

class Node {
public:
    // Constructor
    explicit Node(int val = 1) : m_data{val}, m_nextPtr{nullptr} {
    }
    // Getter for member variable data
    int getdata() const {
        return m_data;
    }
    // Setter for member variable data
    void setdata(int newdata) {
        m_data = newdata;
    }
    // Getter for nextPtr which is an address
    Node *getnextptr() {
        return m_nextPtr;
    }
    // Setter for nextPtr which is also an address
    void setnextptr(Node *newptr) {
        m_nextPtr = newptr;
    }
private:
    int m_data;
    Node *m_nextPtr;
};

typedef Node * NodePtr;

#endif //HW7_NODE_H
