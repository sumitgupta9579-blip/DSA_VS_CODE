#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;

    Node(int val){
        this->val=val;
    }
};

class LinkedList{
public:
    Node* head ;
    Node* tail;
    int size;

    LinkedList(){
        head = tail = NULL ;
        int size = 0;
    }

    void display(){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
    }
    
    void insertAtTail(int val){
        Node* n = new Node(val);
        if(size == 0) head = tail = n;
        else{
            tail->next = n;
            tail = n;
        }
        size++;
    }

    void insertAtHead(int val){
        Node* n = new Node(val);
        if(size == 0) head = tail = n;
        else{
            n->next =  head ;
            head = n ;
        }
        size++;
    }

    void removeAtHead(){
        if(size == 0 ){
            cout<<"List is empty !"<<endl;
            return;
        }
        head = head->next;
        size--;
    }
    int size(){
        return size;
    }
};
int main(){
    LinkedList list ;
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
    
}