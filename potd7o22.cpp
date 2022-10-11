class Solution
{
    public:
    Node *end=NULL;
    void flatten(Node *root)
    {
        if(root->left==NULL&&root->right==NULL){
            end=root;
            return;
        }
        if(root->left!=NULL){
            Node *temp=root->left;
            root->left=root->right;
            root->right=temp;
        }
        flatten(root->right);
        end->right=root->left;
        root->left=NULL;
        if(end->right!=NULL)
            flatten(end->right);
    }
};
