

/*
 * Complete the 'insertNodeAtPosition' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER data
 *  3. INTEGER position
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

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode *newNode = new SinglyLinkedListNode(data);
    
    if(position == 0) {
        newNode->next = llist;
        llist = newNode;
        return llist;
    }
    
    SinglyLinkedListNode *temp = llist;
    
    for(int i = 0; i < position-1; i++) {
        temp = temp->next;
    }
    
    newNode->next = temp->next;
    temp->next = newNode;
    
    return llist;
    
}

