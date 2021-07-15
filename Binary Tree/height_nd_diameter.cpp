#include <iostream>
#include <cmath>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root=NULL;

node *create__binaryTree()
{
    int num=0;
    cout<<"Enter number of your choice"<<endl;
    cin>>num;

    if(num==-1)
    {
        return NULL;
    }

    node *newnode=new node();
    newnode->data=num;
    newnode->left=NULL;
    newnode->right=NULL;

    cout<<"Enter left child of "<<num<<endl;
    newnode->left=create__binaryTree();

    cout<<"Enter right child of "<<num<<endl;
    newnode->right=create__binaryTree();

    return newnode;

}

int height_of_BinaryTree(node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    int leftHeight=height_of_BinaryTree(root->left);
    int rightHeight=height_of_BinaryTree(root->right);

    return max(leftHeight,rightHeight)+1;

}

int diameter_of_binaryTree(node *root,int *height)
{
    if(root==NULL)
    {
        *height=0;
        return 0;
    }
    int lh=0;
    int rh=0;
    int left_diam=diameter_of_binaryTree(root->left,&lh);
    int right_diam=diameter_of_binaryTree(root->right,&rh);

    int currDiam=lh+rh+1;
    *height=max(lh,rh)+1;

    return max(currDiam,max(left_diam,right_diam));
}

void preorder_traversal(node *root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder_traversal(root->left);
    preorder_traversal(root->right);
}

void inorder_traversal(node *root)
{
    if(root==NULL)
    {
        return;
    }
    inorder_traversal(root->left);
    cout<<root->data<<" ";
    inorder_traversal(root->right);
}

void postorder_traversal(node *root)
{
    if(root==NULL)
    {
        return;
    }
    postorder_traversal(root->left);
    postorder_traversal(root->right);
    cout<<root->data<<" ";
}

int main()
{
    cout<<"Enter 1 to create a binary tree"<<endl;
    cout<<"Enter 2 implement Preorder traversal"<<endl;
    cout<<"Enter 3 to implement Inorder traversal"<<endl;
    cout<<"Enter 4 to implement PostOrder traversal"<<endl;
    cout<<"Enter 5 to find height of Binary Tree"<<endl;
    cout<<"Enter 6 to find diameter of Binary Tree"<<endl;

    int op=0;
    do
    {
        cout<<"\nEnter operation of your choice"<<endl;
        cin>>op;

        switch(op)
        {
            case 1:
            {
                root=create__binaryTree();
                break;
            }
            case 2:
            {
                cout<<"PreOrder Traversal"<<endl;
                preorder_traversal(root);
                break;
            }
            case 3:
            {
                cout<<"Inorder Traversal"<<endl;
                inorder_traversal(root);
                break;
            }
            case 4:
            {
                cout<<"PostOrder Traversal"<<endl;
                postorder_traversal(root);
                break;
            }
            case 5:
            {
                int height=height_of_BinaryTree(root);
                cout<<"Height of Binary Tree:"<<height<<endl;
                break;
            }

            case 6:
            {
                int h=0;
                cout<<"Diameter of Tree:"<<diameter_of_binaryTree(root,&h)<<endl;
                break;
            }
        }
    } while (op!=99);
    cout<<"Done!!!!"<<endl;
    
    return 0;
}