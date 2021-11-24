

/*
 * Complete the 'removeDuplicates' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts INTEGER_SINGLY_LINKED_LIST llist as parameter.
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
    
    if(llist->next == NULL) {
        return llist;
    }
    
    SinglyLinkedListNode *temp = llist;
    
    SinglyLinkedListNode* prev = temp;
    temp = temp->next;
    
    while(temp != NULL) {
        if(temp->data == prev->data) {
            prev->next = temp->next;
        }
        else {
            prev = temp;
        }
        temp = temp->next;
    }
    
    return llist;
    
}

