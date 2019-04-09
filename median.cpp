#include <iostream>
#include <cstdlib>

#include "median.h"

using namespace std;

myMedian::myMedian() {
    this->bIsItOdd = true;
    this->fMedian = 0;
    
    
    this->pList = new LinkedList();
    this->pMedianNode = this->pList->pHead;
}

myMedian::~myMedian() {
    std::cout << "median deleted";
}

void myMedian::printList() {
    Node* tmpNode;

    tmpNode = this->pList->pHead;

    if (NULL != tmpNode) {
        do {
            std::cout << tmpNode->iData_m << "\n";
            tmpNode = tmpNode->pNext;
        } while( tmpNode != NULL );
    }
}

float myMedian::GetMedian() {
    return this->pMedianNode->iData_m;
}

void myMedian::addValue(int newValue) {
    std::cout << "addValue: " << newValue;
    
    Node* newNode = new Node();
    Node* tmpHead;
    
    newNode->iData_m = newValue;
    this->pList->iLenght_m++;
  
    if ( (NULL == this->pList->pHead) || (this->pList->pHead->iData_m >= newValue) ) {
        newNode->pNext = this->pList->pHead;
        this->pList->pHead = newNode;
    } else {
        tmpHead = this->pList->pHead;
        int index = 1;
        while ( tmpHead->pNext != NULL && this->pList->iLenght_m >= index){
            if (index == this->pList->iLenght_m/2) {
                this->pMedianNode = tmpHead;
            }
            if (tmpHead->pNext->iData_m < newNode->iData_m) {
                tmpHead = tmpHead->pNext;
            }
            index++;
        }

        newNode->pNext = tmpHead->pNext;
        tmpHead->pNext = newNode;
    }

    if ( false == this->bIsItOdd ) {
        std::cout << " is it odd no\n";
        this->bIsItOdd = true;
    } else {
        std::cout << " is it odd yes\n";
        this->bIsItOdd = false;
    } 
}