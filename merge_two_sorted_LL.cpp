#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    Node<int>* t1 = first;
    Node<int>* t2 = second;

    Node<int>* dummy = new Node<int>(-1);
    Node<int>* temp = dummy;

    while(t1 != NULL && t2 != NULL) {
        if(t1->data < t2->data) {
            temp->next = t1;
            temp = t1;
            t1 = t1->next;
        }
        else {
            temp->next = t2;
            temp = t2;
            t2 = t2->next;
        }

    }

    if(t1) temp->next = t1;
    else temp->next = t2;        
    return dummy->next;

}

