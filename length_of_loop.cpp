/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 * };
 *
 *************************************************************************/
int findLength(Node* slow , Node* fast){
    int cnt = 1;
    fast = fast->next;

    while(fast != slow) {
        cnt++;
        fast = fast->next;
    }
    return cnt;
}
int lengthOfLoop(Node *head) {
  Node *slow = head;
  Node *fast = head;

  int cnt = 0;

  while (fast != NULL && fast->next != NULL) {
    cnt++;
    fast = fast->next->next;
    slow = slow->next;

    if(fast == slow) return findLength(slow , fast);
  }

  return 0;
}
