

// Complete the insertNodeAtHead function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {

    SinglyLinkedListNode *newNode = new SinglyLinkedListNode(data);
    
    SinglyLinkedListNode *temp = llist;
    llist = newNode;
    newNode->next = temp;

    return llist;

}

