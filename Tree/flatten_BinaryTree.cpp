#include <iostream>
using namespace std;
struct node 
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root=NULL;

struct node *create()
{
    int num=0;
    node *newnode=new node();
    cout<<"Enter number u want to enter"<<endl;
    cin>>num;

    if(num==-1)
    {
        return NULL;
    }
    newnode->data=num;
    newnode->left=NULL;
    newnode->right=NULL;

    cout<<"Enter left child of "<<num<<endl;
    newnode->left=create();

    cout<<"Enter right child of "<<num<<endl;
    newnode->right=create();

    return newnode;
}

void PreOrder_traversal(node *root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    PreOrder_traversal(root->left);
    PreOrder_traversal(root->right);
}

void InOrder_traversal(node *root)
{
    if(root==NULL)
    {
        return;
    }
    InOrder_traversal(root->left);
    cout<<root->data<<" ";
    InOrder_traversal(root->right);
}

void PostOrder_traversal(node *root)
{
    if(root==NULL)
    {
        return;
    }
    PostOrder_traversal(root->left);
    PostOrder_traversal(root->right);
    cout<<root->data<<" ";
}

void Flattening(node *root)
{
    if((root->left==NULL && root->right==NULL) || root==NULL)
    {
        return;
    }

    if(root->left!=NULL)
    {
        Flattening(root->left);

        node *temp=root->right;
        root->right=root->left;
        root->left=NULL;

        node *t=root->right;
        while(t->right!=NULL)
        {
            t=t->right;
        }

        t->right=temp;
    }

    Flattening(root->right);
}

int main()
{
    cout<<"Enter 1 to create a Binary Tree"<<endl;
    cout<<"Enter 2 for PreOrder Traversal"<<endl;
    cout<<"Enter 3 for InOrder Traversal"<<endl;
    cout<<"Enter 4 for PostOrder Traversal"<<endl;
    cout<<"Enter 5 for Flattening Binary Tree"<<endl;

    int op=0;
    do
    {
        cout<<endl<<"Enter opeartion of your choice"<<endl;
        cin>>op;

        switch(op)
        {
            case 1:
            {
                root=create();
                break;
            }
            case 2:
            {
                cout<<"PreOrder Traversal"<<endl;
                PreOrder_traversal(root);
                break;
            }
            case 3:
            {
                cout<<"InOrder Traversal"<<endl;
                InOrder_traversal(root);
                break;
            }

            case 4:
            {
                cout<<"PostOrder Traversal"<<endl;
                PostOrder_traversal(root);
                break;
            }
            case 5:
            {
                Flattening(root);
                break;
            }
        }

    }while(op!=99);

    cout<<"Done!!!"<<endl;
    return 0;
}