#include <iostream>
#include <cstdlib>

#include "list.h"

using namespace std;

LinkedList::LinkedList() {
    this->iLenght_m = 0;
    this->pHead = NULL;
}

LinkedList::~LinkedList() {
    std::cout << "list deleted\n\n";
}
