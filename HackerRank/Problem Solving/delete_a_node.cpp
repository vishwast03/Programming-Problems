

/*
 * Complete the 'deleteNode' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER position
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

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    
    if(llist == NULL)
        return llist;
        
    if(position == 0) {
        SinglyLinkedListNode *temp = llist;
        llist = llist->next;
        free(temp);
        return llist;
    }
    
    SinglyLinkedListNode *temp = llist;
    
    for(int i = 0; i < position-1; i++) {
        temp = temp->next;
    }
    
    SinglyLinkedListNode *q = temp->next;
    temp->next = q->next;
    free(q);
    
    return llist;
    
}

