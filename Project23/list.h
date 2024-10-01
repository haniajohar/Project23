#pragma once
#include "node.h"

class LinkedList {
private:
    Node* head;

public:
    LinkedList();
    ~LinkedList();
    void insert(int value);
    void printList();
};


