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

// Function to delete a node with a given value from the linked list
void deleteNode(Node* &head, int key) {
    // If the list is empty, return
    if (head == nullptr) return;

    // If the key is found at the head node
    if (head->data == key) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    // Search for the key while keeping track of the previous node
    Node* prev = nullptr;
    Node* current = head;
    while (current != nullptr && current->data != key) {
        prev = current;
        current = current->next;
    }

    // If the key is not found
    if (current == nullptr) return;

    // Unlink the node from the linked list
    prev->next = current->next;
    delete current;
}

int main() {
    // Initialize an empty linked list
    Node* head = nullptr;

    // Insert elements into the linked list
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);

    // Print the original linked list
    cout << "Original Linked List: ";
    printList(head);

    // Delete node with value 3
    deleteNode(head, 3);

    // Print the linked list after deletion
    cout << "Linked List after deletion: ";
    printList(head);

    return 0;
}
