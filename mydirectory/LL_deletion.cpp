#include <bits/stdc++.h>
using namespace std;
struct Node {
   int data;
   struct Node *next;
};
void insertNode(struct Node** head_ref, int new_data) {
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   new_node->data = new_data;
   new_node->next = (*head_ref);
   (*head_ref) = new_node;
}
void deleteNode(struct Node **head_ref, int position) {
   if (*head_ref == NULL) {
      return;
   }
   struct Node* temp = *head_ref;
   if (position == 1) {
      *head_ref = temp->next;
      free(temp);
      return;
   }
   for (int i = 2; temp != NULL && i < position - 1; i++) {
      temp = temp->next;
   }
   if (temp == NULL || temp->next == NULL) {
      return;
   }
   struct Node *next = temp->next->next;
   free(temp->next);
   temp->next = next;
}
void printLinkedList(struct Node *node) {
   while (node != NULL) {
      cout << node->data << "->";
      node = node->next;
   }
}
int main() {
   struct Node* head = NULL;
   insertNode(&head, 1);
   insertNode(&head, 2);
   insertNode(&head, 3);
   insertNode(&head, 4);
   insertNode(&head, 5);
   cout << "Linked list before deletion:" << endl;
   printLinkedList(head);
   deleteNode(&head, 1);
   cout << "\nLinked list after deletion:" << endl;
   printLinkedList(head);
   return 0;
}