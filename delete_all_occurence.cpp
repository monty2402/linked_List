/**
 * Definition of doubly linked list:
 *
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

Node * deleteAllOccurrences(Node* head, int k) {
    Node* temp = head;
    Node* nextnode = NULL;
    Node* prevNode = NULL;

    while(temp != NULL) {
        if(temp->data == k) {
            if(temp == head) {
                head = head->next;
            }
            nextnode = temp->next;
            prevNode = temp->prev;

            if(nextnode) nextnode->prev = prevNode;
            if(prevNode) prevNode->next = nextnode;

            free(temp);
            temp = nextnode;  
        }
        else temp = temp->next;
    }
    return head;
}
