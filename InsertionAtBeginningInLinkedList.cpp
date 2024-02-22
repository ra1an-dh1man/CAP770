#include <iostream>
using namespace std;

// Define a node structure for the linked list
struct Node {
    int data;
    Node* next;
};

// Function to insert a new node at the beginning of the linked list
void insertAtBeginning(Node* &head, int newData) {
    // Create a new node
    Node* newNode = new Node;
    newNode->data = newData;
    newNode->next = nullptr;

    // If the list is empty, make the new node the head
    if (head == nullptr) {
        head = newNode;
    } else {
        // Otherwise, set the new node's next to current head and update head
        newNode->next = head;
        head = newNode;
    }
}

// Function to print the linked list
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Initialize an empty linked list
    Node* head = nullptr;

    // Insert elements at the beginning of the linked list
    insertAtBeginning(head, 3);
    insertAtBeginning(head, 5);
    insertAtBeginning(head, 7);

    // Print the linked list
    cout << "Linked List after insertion: ";
    printList(head);

    return 0;
}
