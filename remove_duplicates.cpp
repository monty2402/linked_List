/**
 * Definition of doubly linked list:
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this->data = data;
 *          this->prev = prev;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node * removeDuplicates(Node *head)
{
    Node* temp = head;
    Node* nextNode = NULL;

    while(temp != NULL && temp->next != NULL) {
        nextNode = temp->next;
        while(nextNode != NULL && nextNode->data == temp->data) {
            nextNode = nextNode->next;
            //free nodes also
        }
        temp->next = nextNode;

        if(nextNode != NULL) nextNode->prev = temp;
        temp = temp->next;

    }
    return head;
}
