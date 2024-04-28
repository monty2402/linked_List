/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2)
{
    Node* t1 = num1;
    Node* t2 = num2;

    Node* dummyNode = new Node(-1);
    Node* current = dummyNode;

    int carry = 0;
    while(t1 != NULL || t2 != NULL) {
        int sum = carry;    
        if(t1) sum += t1->data;
        if(t2) sum +=t2->data;

        Node* newNode = new Node(sum % 10);
        carry = sum / 10;

        current->next = newNode;
        current = current->next;

        if(t1) t1 = t1->next;
        if(t2) t2 = t2->next;

        if(carry) {
            Node* carrNode = new Node(carry);
            current->next = carrNode;
        } 

    }
    
    return dummyNode->next;
}
