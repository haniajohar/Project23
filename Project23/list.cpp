#include <iostream>
#include "list.h"
using namespace std;

LinkedList::LinkedList() : head(nullptr) {}
LinkedList::~LinkedList() {
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
}
void LinkedList::insert(int value) {
    Node* newNode = new Node(value);

    if (head == nullptr || value < head->data) {
        newNode->next = head;
        head = newNode;
        return;
    }
    Node* current = head;
    while (current->next != nullptr && current->next->data < value) {
        current = current->next;
    }
    newNode->next = current->next;
    current->next = newNode;
}
void LinkedList::printList() {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }

    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
