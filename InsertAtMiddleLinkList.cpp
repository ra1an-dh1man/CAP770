#include <iostream>
using namespace std;

// Define a node structure for the linked list
struct Node {
    int data;
    Node* next;
};

// Function to insert a new node at the middle of the linked list
void insertAtMiddle(Node* &head, int newData) {
    // Create a new node
    Node* newNode = new Node;
    newNode->data = newData;
    newNode->next = nullptr;

    // If the list is empty, make the new node the head
    if (head == nullptr) {
        head = newNode;
    } else {
        // Count the number of nodes in the linked list
        int count = 0;
        Node* temp = head;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }

        // Find the middle position
        int middle = count / 2;
        temp = head;
        // Traverse to the middle node
        for (int i = 0; i < middle - 1; i++) {
            temp = temp->next;
        }
        // Insert the new node at the middle
        newNode->next = temp->next;
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

    // Insert elements into the linked list
    insertAtMiddle(head, 1);
    insertAtMiddle(head, 2);
    insertAtMiddle(head, 3);
    insertAtMiddle(head, 4);

    // Print the linked list
    cout << "Linked List after insertion: ";
    printList(head);

    return 0;
}
