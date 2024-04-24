#include<iostream>
#include<stack>
using namespace std;
stack <int> st;

class node {
    public:
    int data;
    node* next;

    node(int val) {
        this->data = val;
        this->next = NULL;
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
    tail = tail->next;
}
// brute force using stack
void reverse(node*head) {
    node* temp = head;
    int cnt =1;

    while(temp != NULL) {
        st.push(temp->data);
        cnt++;
        temp = temp->next;
    }
    temp = head;
    while(temp != NULL) {
        temp->data = st.top();
        st.pop();
        temp = temp->next;
    }
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
    display(head);

    return 0;
}