#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* right;
    struct node* left;
};

struct node* insert(int data)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->right=NULL;
    temp->left=NULL;
    return temp;
};

void Preorder(struct node* root)
{
    if(root==NULL)
        return;
    printf("%d",root->data);
    Preorder(root->left);
    Preorder(root->right);
}

void Inorder(struct node* root)
{
     if(root==NULL)
        return;
    Inorder(root->left);
    printf("%d",root->data);
    Inorder(root->right);
}

void Postorder(struct node* root)
{
     if(root==NULL)
        return;
    Postorder(root->left);
    Postorder(root->right);
    printf("%d",root->data);
}

int main()
{
    struct node* root=insert(1);
    root->left=insert(2);
    root->right=insert(3);
    root->left->left=insert(4);
    root->left->right=insert(5);

     printf("\nPreorder traversal of binary tree is \n");
     Preorder(root);

     printf("\nInorder traversal of binary tree is \n");
     Inorder(root);

     printf("\nPostorder traversal of binary tree is \n");
     Postorder(root);

     return 0;
}
