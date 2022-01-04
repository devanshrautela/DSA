#include<stdio.h>
#include<stdlib.h>
struct bst{
    int data;
    struct bst*left;
    struct bst*right;
};
struct bst* create(struct bst *root, int val)
{
    struct bst *obj=(struct bst*)malloc(sizeof(struct bst));
    obj->data=val;
    obj->left=NULL;
    obj->right=NULL;
};
struct bst* push(struct bst *root, int val)
{
    if(root==NULL)
    {
        root=create(root,val);
    }
    else{
        if(root->data>val)
        root->left=push(root->left,val);
        else
        root->right=push(root->right,val);
    }
    return root;
};
void display(struct bst* root)
{
    if(root==NULL)
    return;
    display(root->left);
    printf("%d ",root->data);
    display(root->right);
}
int main()
{
    struct bst *root=NULL;
    root=push(root,45);
    push(root,54);
    push(root,75);
    push(root,15);
    push(root,20);
    display(root);
}

