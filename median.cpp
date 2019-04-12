#include <iostream>
#include <cstdlib>

#include "median.h"

using namespace std;

myMedian::myMedian() {
    this->bIsItOdd = false;
    this->fMedian = 0;
    
    this->pList = new LinkedList();
    this->pMedianNode = this->pList->pHead;
}

myMedian::~myMedian() {
    this->pList->~LinkedList();
    std::cout << "median deleted\n\n";
}

void myMedian::printList() {
    Node* tmpNode;

    tmpNode = this->pList->pHead;

    if (NULL != tmpNode) {
        std::cout << "\nList: ";
        do {
            std::cout << tmpNode->iData_m << ", ";
            tmpNode = tmpNode->pNext;
        } while( tmpNode != NULL );
        std::cout << "\n\n\n";
    } else {
        std::cout << "\nList: No added values!\n\n\n";
    }
}

float myMedian::GetMedian() {
    float returnValue = 0;
 
    if (this->pList->iLenght_m > 1) {
        int index = 1;
        Node* tmpHead = this->pList->pHead;

        while ( tmpHead->pNext != NULL ) {
            if (index == (this->pList->iLenght_m+1)/2) {
                this->pMedianNode = tmpHead;
                break;
            }
            tmpHead = tmpHead->pNext;
            index++;
        }

        returnValue = this->pMedianNode->iData_m;
        if ( (false == this->bIsItOdd) && (NULL != this->pMedianNode->pNext) ) {
            returnValue += this->pMedianNode->pNext->iData_m;
            returnValue /=2;
        }
    } else if (this->pList->iLenght_m == 1) {
         returnValue = this->pList->pHead->iData_m;
     } else {
        std::cout << "\nNo node, no median!\n";
        returnValue = 0;
    }
    return returnValue;
}

void myMedian::addValue(int newValue) {
    //std::cout << "Added Value is: " << newValue << "\n";
    
    Node* newNode = new Node();
    Node* tmpHead;
    
    newNode->iData_m = newValue;
    this->pList->iLenght_m++;
    tmpHead = this->pList->pHead;
    /* Add new value */
    if ( NULL == this->pList->pHead ) {
        newNode->pNext = this->pList->pHead;
        this->pList->pHead = newNode;
        this->pMedianNode = this->pList->pHead;
    } else {
        while ( tmpHead->pNext != NULL && tmpHead->pNext->iData_m < newNode->iData_m ) {
            tmpHead = tmpHead->pNext;
        }
        if ( this->pList->pHead->iData_m >= newValue ) {
            newNode->pNext = this->pList->pHead;
            this->pList->pHead = newNode;
        } else {
            newNode->pNext = tmpHead->pNext;
            tmpHead->pNext = newNode;
        }
    }
    if ( false == this->bIsItOdd ) {
        //std::cout << "is it odd YES\n";
        this->bIsItOdd = true;
    } else {
        //std::cout << "is it odd NO\n";
        this->bIsItOdd = false;
    }
}