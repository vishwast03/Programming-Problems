

// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

    if(head1 == NULL)
        return head2;
    
    if(head2 == NULL)
        return head1;
        
    SinglyLinkedListNode *tempA = head1, *tempB = head2;
    
    if(head1->data > head2->data) {
        tempA = head2;
        tempB = head1;
    }

    SinglyLinkedListNode *listHead = tempA;
    
    while(tempB != NULL) {
        
        while(tempA->next != NULL && tempA->next->data < tempB->data) {
            tempA = tempA->next;
        }
        
        SinglyLinkedListNode *p = tempB->next;
        tempB->next = tempA->next;
        tempA->next = tempB;
        tempB = p;
        
    }
    
    return listHead;

}

