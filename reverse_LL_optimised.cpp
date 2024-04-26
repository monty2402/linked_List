#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node* next;
    node* prev;

    node(int val) {
        this->data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};


void display(node* head) {
    node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" <<endl ;
}

void insertAtTail(node* tail , int val) {
    node* temp = new node(val);

    while(tail ->next != NULL) {
        tail = tail->next;
    }
    tail->next = temp;
    temp->prev = tail;
    tail = tail->next;
}
// optimal

void reverse(node*head) {
    node* temp = head;
    node* curr = temp->next;

    temp = curr->next;

    
}

int main(){
    node* n1 = new node(10);
    node* tail = n1;
    node* head = n1;
    insertAtTail(tail , 20);
    insertAtTail(tail , 30);
    insertAtTail(tail , 40);
    insertAtTail(tail , 50);
    display(head);
    reverse(head);

    return 0;
}