#ifndef _MY_LIST_H
#define _MY_LIST_H

/* Node */
class Node {
    public:
    Node* pNext;
    int iData_m;
};

/* dualLinked List */
class LinkedList {
    public:
    int iLenght_m;
    Node* pHead;

    LinkedList();
    ~LinkedList();

    void add(int newData);
};
#endif