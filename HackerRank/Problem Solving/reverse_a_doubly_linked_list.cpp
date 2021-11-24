

/*
 * Complete the 'reverse' function below.
 *
 * The function is expected to return an INTEGER_DOUBLY_LINKED_LIST.
 * The function accepts INTEGER_DOUBLY_LINKED_LIST llist as parameter.
 */

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */

DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
    
    if(llist == NULL || llist->next == NULL)
        return llist;
    
    DoublyLinkedListNode *currentNode = llist;
    DoublyLinkedListNode *nextNode = llist->next;
    DoublyLinkedListNode *last;
    
    while(currentNode != NULL) {
        currentNode->next = currentNode->prev;
        currentNode->prev = nextNode;
        
        last = currentNode;
        currentNode = nextNode;
        if(currentNode != NULL)
            nextNode = currentNode->next;
    }
    
    return last;
    
}

