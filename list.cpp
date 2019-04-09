#include <iostream>
#include <cstdlib>

#include "list.h"

using namespace std;

LinkedList::LinkedList() {
    this->iLenght_m = 0;
    this->pHead = NULL;
}

LinkedList::~LinkedList() {
    std::cout << "list deleted";
}

void LinkedList::add(int newData) {
    std::cout << "add value to podlist";
    Node* newNode = new Node();

    newNode->iData_m = newData;
    newNode->pNext = this->pHead;
    this->pHead = newNode;

    this->iLenght_m++;
}
