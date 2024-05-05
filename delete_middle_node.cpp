/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* deleteMiddle(Node* head){
    Node* fast = head;
    Node* slow = head;

    if(head == NULL || head->next == NULL) return NULL;

    fast = fast->next->next;

    while (fast != NULL && fast->next != NULL) {
      fast = fast->next->next;
      slow = slow->next;
    }

    Node *middle = slow->next;
    slow->next = slow->next->next;
    free(middle);

    return head;
}