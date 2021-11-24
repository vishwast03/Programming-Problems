

// Complete the printLinkedList function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void printLinkedList(SinglyLinkedListNode* head) {
    if(head == NULL) {
        return;
    }
    SinglyLinkedListNode *temp = head;
    while(temp != NULL) {
        cout<<temp->data<<endl;
        temp = temp->next;
    }

}

