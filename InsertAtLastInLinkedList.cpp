#include <iostream>
using namespace std;

// Define a node structure for the linked list
struct Node {
    int data;
    Node* next;
};

// Function to insert a new node at the end of the linked list
void insertAtEnd(Node* &head, int newData) {
    // Create a new node
    Node* newNode = new Node;
    newNode->data = newData;
    newNode->next = nullptr;

    // If the list is empty, make the new node the head
    if (head == nullptr) {
        head = newNode;
    } else {
        // Traverse to the end of the list
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        // Insert the new node at the end
        temp->next = newNode;
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

    // Insert elements at the end of the linked list
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);

    // Print the linked list
    cout << "Linked List after insertion: ";
    printList(head);

    return 0;
}
