#include <iostream>
#include "list.h"
using namespace std;

int main() {
    LinkedList list;
    list.insert(5);
    list.insert(2);
    list.insert(7);
    list.insert(3);
    list.printList();

    return 0;
}