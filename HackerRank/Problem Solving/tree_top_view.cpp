

/*
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

    void topView(Node * root) {
        if(root==NULL){
            return;
        }
        map <int, int> m;
        queue < pair <Node* , int>>q;
        q.push({root, 0});
        while(!q.empty()){
            Node* t=q.front().first;
            int h=q.front().second;
            q.pop();
            if(!m[h])
                m[h]=t->data;
            if(t->left)
                q.push({t->left, h-1});
            if(t->right)
                q.push({t->right, h+1});
        }
        for(auto x:m)
            cout<<x.second<<" ";
    }

