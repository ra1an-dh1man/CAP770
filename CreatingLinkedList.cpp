#include <iostream>
using namespace std;
// Define a node structure for the linked list
struct Node {
    int data;
    Node* next;
};

int main() {
    // Initialize an empty linked list
    Node* head = nullptr;
    Node* second = nullptr;
    Node* third = nullptr;

    // Allocate memory for nodes in the linked list
    head = new Node();
    second = new Node();
    third = new Node();

    // Assign data to the nodes and set the next pointers
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = nullptr;

    // Print the linked list
    cout << "Linked List: " << endl;
    cout << head->data << " -> ";
    cout << second->data << " -> ";
    cout << third->data << " -> nullptr" << endl;

    // Deallocate memory for nodes
    delete head;
    delete second;
    delete third;

    return 0;
}
