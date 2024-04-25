#include <iostream>
using namespace std;
#define size 7

class Node {
public:
    int data;
    Node* next;
};

class HashTable {
private:
    Node* chain[size];

public:
    HashTable() {
        init();
    }

    void init() {
        for (int i = 0; i < size; i++)
            chain[i] = nullptr;
    }

    void insert(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;
        int key = value % size;
        if (chain[key] == nullptr)
            chain[key] = newNode;
        else {
            Node* temp = chain[key];
            while (temp->next)
                temp = temp->next;
            temp->next = newNode;
        }
    }

    void print() {
        for (int i = 0; i < size; i++) {
            Node* temp = chain[i];
            cout << "chain[" << i << "]-->";
            while (temp) {
                cout << temp->data << " -->";
                temp = temp->next;
            }
            cout << "NULL\n";
        }
    }
};

int main() {
    HashTable ht;

    ht.insert(7);
    ht.insert(0);
    ht.insert(3);
    ht.insert(10);
    ht.insert(4);
    ht.insert(5);

    ht.print();

    return 0;
}
