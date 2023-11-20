
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

// Add a New Node in the Front of the LinkedList
void insertAtTheFront(Node* n) {

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


    return 0;

}