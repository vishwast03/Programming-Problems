

/*
Node is defined as 

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/

    Node * insert(Node * root, int data) {
        if(root==NULL){
            Node* temp = new Node(data);
            return temp;
        }
        else{
            if(data <= root->data)
                root->left = insert(root->left, data);
            else
                root->right = insert(root->right, data);
        }
        return root;
    }

