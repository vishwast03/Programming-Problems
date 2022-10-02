class Solution
{
    int verticallyDownBST(Node root,int target)
    {
        Node temp = searchNode(root, target);
        
        if(temp == null)
            return -1;
            
        return (sumNodes(temp, 0) - temp.data);
    }
    
    int sumNodes(Node temp, int x) {
        int sum = 0, sumLeft = 0, sumRight = 0;
        
        if(temp == null) {
            return 0;
        }
        else {
            if(temp.left != null) {
                sumLeft = sumNodes(temp.left, x - 1);
            }
            
            if(temp.right != null) {
                sumRight = sumNodes(temp.right, x + 1);
            }
        }
        
        if(x == 0) {
            sum = temp.data + sumLeft + sumRight;
        }
        else {
            sum = sumLeft + sumRight;
        }
        
        return sum;
    }
    
    Node searchNode(Node root, int target) {
        if(root == null || root.data == target)
            return root;
            
        if(root.data < target)
            return searchNode(root.right, target);
            
        return searchNode(root.left, target);
        
    }
}