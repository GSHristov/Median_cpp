#ifndef _MY_MEDIAN_H
#define _MY_MEDIAN_H

#include "list.h"

/* myMedian wrapper */
class myMedian {
    private:
        float fMedian;
        bool bIsItOdd;

        LinkedList* pList;
        Node* pMedianNode;
    public:
        myMedian();
        ~myMedian();

        float GetMedian();
        void printList();

        void addValue(int newValue);
};

#endif