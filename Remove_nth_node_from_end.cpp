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
int length(Node *head) {
  int cnt = 1;
  Node *temp = head;

  while (temp != NULL) {
    cnt++;
    temp = temp->next;
  }

  return cnt;
}
Node *removeKthNode(Node *head, int K) {

  Node *temp = head;
  int len = length(head);

  int endPoint = len - K + 1;

  Node *fast = head;
  Node *slow = head;

  if (K == len) {
    head = head->next;
    free(temp);
  }

  for (int i = 0; i < K; i++) {
    fast = fast->next;
  }

  if (fast == NULL) {
    return head->next;
  }

  while (fast->next != NULL) {
    slow = slow->next;
    fast = fast->next;
  }

  Node *delNode = slow->next;
  slow->next = slow->next->next;
  free(delNode);

  return head;
}
