

/*
 * Complete the 'sortedInsert' function below.
 *
 * The function is expected to return an INTEGER_DOUBLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_DOUBLY_LINKED_LIST llist
 *  2. INTEGER data
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

DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {
    
    DoublyLinkedListNode *newNode = new DoublyLinkedListNode(data);
    
    if(llist==NULL)
        return newNode;
    
    DoublyLinkedListNode *temp = llist;
    
    if(temp->data > data) {
        llist = newNode;
        newNode->next = temp;
        temp->prev = newNode;
        return llist;
    }
    
    while(temp->next != NULL && temp->next->data < data) {
        temp = temp->next;
    }
    
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next = newNode;
    if(newNode->next != NULL)
        newNode->next->prev = newNode;
    
    return llist;
    
}

