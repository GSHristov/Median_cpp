#include <iostream>
#include <cstdlib>

#include "list.h"

using namespace std;

LinkedList::LinkedList() {
    this->iLenght_m = 0;
    this->pHead = NULL;
}

LinkedList::~LinkedList() {
    Node* tmpNode;
    Node* tmpNext;
    int tmpNodeNum = 0;
    tmpNode = this->pHead;

    if (NULL != tmpNode) {
        do {
            tmpNodeNum++;
            tmpNext = tmpNode->pNext;
            delete tmpNode;
            tmpNode = tmpNext;
        } while( tmpNode != NULL );
        std::cout << "Nodes deleted: " << tmpNodeNum << "\n";
    }
    std::cout << "List deleted\n";
}
