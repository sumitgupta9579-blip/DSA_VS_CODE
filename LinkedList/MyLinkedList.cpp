#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList {
public:
    Node* head;
    Node* tail;
    int size;

    LinkedList() {
        head = tail = NULL;
        size = 0;
    }

    // Display linked list
    void display() {
        Node* temp = head;

        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }

        cout << endl;
    }

    // Insert at tail
    void insertAtTail(int val) {
        Node* n = new Node(val);

        if (size == 0) {
            head = tail = n;
        }
        else {
            tail->next = n;
            tail = n;
        }

        size++;
    }

    // Insert at head
    void insertAtHead(int val) {
        Node* n = new Node(val);

        if (size == 0) {
            head = tail = n;
        }
        else {
            n->next = head;
            head = n;
        }

        size++;
    }

    // Remove from head
    void removeAtHead() {
        if (size == 0) {
            cout << "List is empty!" << endl;
            return;
        }

        Node* temp = head;
        head = head->next;

        delete temp;
        size--;

        if (size == 0) {
            tail = NULL;
        }
    }

    // Return length
    int length() {
        return size;
    }

    // Insert at index
    void insertAtIdx(int val, int idx) {

        if (idx < 0 || idx > size) {
            cout << "Invalid index!" << endl;
            return;
        }

        // Insert at head
        if (idx == 0) {
            insertAtHead(val);
            return;
        }

        // Insert at tail
        if (idx == size) {
            insertAtTail(val);
            return;
        }

        Node* n = new Node(val);
        Node* temp = head;

        // Move to node before the required index
        for (int i = 0; i < idx - 1; i++) {
            temp = temp->next;
        }

        n->next = temp->next;
        temp->next = n;

        size++;
    }

    // Delete node at index
    void deleteAtIdx(int idx) {

        if (size == 0) {
            cout << "List is empty!" << endl;
            return;
        }

        if (idx < 0 || idx >= size) {
            cout << "Invalid index!" << endl;
            return;
        }

        // Delete head
        if (idx == 0) {
            removeAtHead();
            return;
        }

        Node* temp = head;

        // Move to node before the required index
        for (int i = 0; i < idx - 1; i++) {
            temp = temp->next;
        }

        Node* toDelete = temp->next;

        temp->next = toDelete->next;

        if (toDelete == tail) {
            tail = temp;
        }

        delete toDelete;
        size--;
    }
};

int main() {

    LinkedList list;

    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);
    list.insertAtTail(40);

    list.display();

    list.insertAtHead(100);
    list.display();

    list.removeAtHead();
    list.display();

    list.insertAtHead(200);
    list.display();

    list.insertAtIdx(150, 3);
    list.display();

    list.deleteAtIdx(3);
    list.display();

    return 0;
}