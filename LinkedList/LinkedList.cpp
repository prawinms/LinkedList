// LinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "LinkedList_C.h"

int main()
{
    LinkedList_C* arryData = new LinkedList_C(1);
    arryData->Append(2);
    arryData->Append(3);
    arryData->Append(5);
    arryData->Append(6);
    arryData->Append(7);

    arryData->Modify(10, 100);

    arryData->Print();

    arryData->Remove(2);

    arryData->Print();
}

