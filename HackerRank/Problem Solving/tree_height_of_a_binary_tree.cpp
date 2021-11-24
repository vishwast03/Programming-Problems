
/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {
        if(root==NULL || (root->left==NULL && root->right==NULL)){
            return 0;
        }
        else{
            int lHeight = height(root->left);
            int rHeight = height(root->right);
            if(lHeight > rHeight)
                return (lHeight + 1);
            else
                return (rHeight + 1);
        }
    }

