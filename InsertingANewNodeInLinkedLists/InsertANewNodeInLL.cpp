
#include <iostream>
using namespace std;

// How to enter a Node at the Front of a Linked List and at the End of a Linked List


class Node {
public:
    int Value;
    Node* Next;
};

// Print out the values in our LinkedList
void printList(Node* n) {
    while (n!=NULL) {
        cout << n->Value << endl;
        n = n->Next;
    }
}

// Add a New Node in the 'Front' of the LinkedList
void insertAtTheFront(Node**head, int newValue) {
    // #Steps:
        // #1: Prepare a new Node
    Node* newNode = new Node();
    newNode->Value = newValue;
        // #2: Put it in front of our current head
    newNode->Next = *head;
        // #3: Move head of the list to point to the newNode
    *head = newNode;

}

// Adding a New Node at the 'End' of the LinkedList
void insertAtTheEnd(Node** head, int newValue) {
    // Steps:
        // #1: Prepare a newNode:
    Node* newNode = new Node();
    newNode->Value = newValue;
    newNode->Next = NULL;
        // #2: If a LinkedList is empty, newNode will be a head node:
    if (*head == NULL) {
        *head = newNode;
        return;
    }
        // #3: Find the last node:
    Node* last = *head;
    while (last->Next!=NULL) {
        last = last->Next;
    }
        // #4: Insert newNode after last node (at the end):
    last->Next = newNode;
    
}

// Adding a Node After 
void insertAfter(Node* ) {

}

int main() {

    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->Value = 1;
    head->Next = second;
    second->Value = 2;
    second->Next = third;
    third->Value = 3;
    third->Next = NULL;

    insertAtTheEnd(&head, 4); 
    insertAtTheEnd(&head, 5);
    printList(head);

    return 0;

}