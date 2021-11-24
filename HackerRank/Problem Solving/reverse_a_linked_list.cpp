

/*
 * Complete the 'reverse' function below.
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

SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {

    if(llist == NULL || llist->next == NULL)
        return llist;
        
    SinglyLinkedListNode *currentNode = llist, *prevNode = NULL, *nextNode = NULL;
    
    while(currentNode != NULL) {

        nextNode = currentNode->next;
        currentNode->next = prevNode;
        prevNode = currentNode;
        currentNode = nextNode;
    }
    
    llist = prevNode;
    
    return llist;

}

