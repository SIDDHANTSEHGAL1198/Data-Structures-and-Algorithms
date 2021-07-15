#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root=NULL;

node *create_BinaryTree()
{
    int num=0;
    cout<<"Enter number of your choice"<<endl;
    cin>>num;


    if(num==-1)
    {
        return NULL;
    }

    node *treenode=new node();
    treenode->data=num;
    treenode->left=NULL;
    treenode->right=NULL;

    cout<<"Enter left child for "<<num<<endl;
    treenode->left=create_BinaryTree();

    cout<<"Enter right child for "<<num<<endl;
    treenode->right=create_BinaryTree();

    return treenode;
}

void PreOrder_Traversal(node *root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    PreOrder_Traversal(root->left);
    PreOrder_Traversal(root->right);
}

void InOrder_Traversal(node *root)
{
    if(root==NULL)
    {
        return;
    }

    InOrder_Traversal(root->left);
    cout<<root->data<<" ";
    InOrder_Traversal(root->right);
}

void PostOrder_Traversal(node *root)
{
    if(root==NULL)
    {
        return;
    }

    PreOrder_Traversal(root->left);
    PreOrder_Traversal(root->right);
    cout<<root->data<<" ";
}

void mirror_BinaryTree(node *root)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        mirror_BinaryTree(root->left);
        mirror_BinaryTree(root->right);

        node *temp;
        temp=root->left;
        root->left=root->right;
        root->right=temp;
        
    }
}

int main()
{
    int op=0;
    cout<<"Enter 1 to create Binary Tree"<<endl;
    cout<<"Enter 2 for PreOrder Traversal"<<endl;
    cout<<"Enter 3 for InOrder Traversal"<<endl;
    cout<<"Enter 4 for PostOrder Traversal"<<endl;
    cout<<"Enter 5 for Mirroring Binary Tree"<<endl;

    do
    {
        cout<<endl<<"Enter opearation of your choice"<<endl;
        cin>>op;

        switch(op)
        {
            case 1:
            {
                root=create_BinaryTree();
                break;
            }

            case 2:
            {
                cout<<"PreOrder Traversal"<<endl;
                PreOrder_Traversal(root);
                break;
            }

            case 3:
            {
                cout<<"InOrder Traversal"<<endl;
                InOrder_Traversal(root);
                break;
            }

            case 4:
            {
                cout<<"PostOrder Traversal"<<endl;
                PostOrder_Traversal(root);
                break;
            }

            case 5:
            {
                cout<<"Mirroring Binary Tree"<<endl;
                mirror_BinaryTree(root);
                break;
            }

        }
    }while(op!=99);
    cout<<"Done!!"<<endl;



    return 0;
    
}