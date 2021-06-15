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
    cout<<"Enter node value"<<endl;
    cin>>num;

    if(num==-1)
    {
        return NULL;
    }

    node *treenode=new node();
    treenode->data=num;
    treenode->left=NULL;
    treenode->right=NULL;

    cout<<"Enter left child of "<<num<<endl;
    treenode->left=create_BinaryTree();

    cout<<"Enter right child of "<<num<<endl;
    treenode->right=create_BinaryTree();

    return treenode;
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

int height(node *root)
{
    if(root==NULL)
    {
        return 0;
    }

    int lh=height(root->left);
    int rh=height(root->right);

    return max(lh,rh)+1;
}

bool balanced_height(node *root)
{
    if(root==NULL)
    {
        return true;
    }
    if(balanced_height(root->left)==false)
    {
        return false;
    }
    if(balanced_height(root->right)==false)
    {
        return false;
    }

    int lh=height(root->left);
    int rh=height(root->right);

    if(abs(lh-rh)<=1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cout<<"Enter 1 to create a binary tree"<<endl;
    cout<<"Enter 2 to implement Preorder traversal"<<endl;
    cout<<"Enter 3 to implement Inorder traversal"<<endl;
    cout<<"Enter 4 to implement PostOrder traversal"<<endl;
    cout<<"Enter 5 to find height of BinaryTree"<<endl;
    cout<<"Enter 6 to check whether tree is balanced or not"<<endl;

    int op=0;
    do
    {
        cout<<"\nEnter operation of your choice"<<endl;
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
                PreOrder_traversal(root);
                break;
            }

            case 3:
            {
                cout<<"Inorder Traversal"<<endl;
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
                cout<<"Height of Binary Tree="<<height(root)<<endl;
                break;
            }
            case 6:
            {
                bool res=false;
                res=balanced_height(root);
                if(res==true)
                {
                    cout<<"Balanced Binary Tree"<<endl;
                    break;
                }
                else
                {
                    cout<<"Not a Balanced Binary Tree"<<endl;
                    break;
                }
            }
        }
    }while(op!=99);
    cout<<"Done!!!"<<endl;

    return 0;
}