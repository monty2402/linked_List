/****************************************************************

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
        

*****************************************************************/
#include <stack>
Node* reverseLinkedList(Node *head)
{
    Node* temp = head;
    Node* prev = NULL;
    Node* front = NULL;

    while(temp != NULL) {
        front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }

    return prev;
    
}
