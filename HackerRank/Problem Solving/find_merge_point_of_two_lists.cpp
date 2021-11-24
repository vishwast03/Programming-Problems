

// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

    SinglyLinkedListNode *tempA = head1;
    SinglyLinkedListNode *tempB = head2;
    
    while(tempA != tempB) {
        
        if(tempA->next == NULL)
            tempA = head2;
        else
            tempA = tempA->next;
            
        if(tempB->next == NULL)
            tempB = head1;
        else
            tempB = tempB->next;
        
    }
    
    return tempA->data;
    
}

