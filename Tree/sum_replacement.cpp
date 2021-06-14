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

    struct node *treenode=new node();
    treenode->data=num;
    treenode->left=NULL;
    treenode->right=NULL;

    cout<<"Enter left child of "<<num<<endl;
    treenode->left=create_BinaryTree();

    cout<<"Enter right child of "<<num<<endl;
    treenode->right=create_BinaryTree();

    return treenode;
}

void SumReplacement(node *root)
{
    if(root==NULL)
    {
        return;
    }

    SumReplacement(root->left);
    SumReplacement(root->right);

    if(root->left!=NULL)
    {
        root->data+=root->left->data;
    }
    if(root->right!=NULL)
    {
        root->data+=root->right->data;
    }
}

void postOrder_traversal(node *root)
{
    if(root==NULL)
    {
        return;
    }
    postOrder_traversal(root->left);
    postOrder_traversal(root->right);
    cout<<root->data<<" ";
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

void preOrder_traversal(node *root)
{
    if(root==NULL)
    {
        return;
    }

    cout<<root->data<<" ";
    preOrder_traversal(root->left);
    preOrder_traversal(root->right);
}

int main()
{
    cout<<"Enter 1 to create a binary tree"<<endl;
    cout<<"Enter 2 to implement Preorder Traversal"<<endl;
    cout<<"Enter 3 to implement Postorder Traversal"<<endl;
    cout<<"Enter 4 to implement Inorder Traversal"<<endl;
    cout<<"Enter 5 to implement Sum Replacement in binary Tree"<<endl;


    int op=0;

    do
    {
        cout<<"\nEnter opeartion of your choice"<<endl;
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
                cout<<"Preorder Traversal"<<endl;
                preOrder_traversal(root);
                break;
            }
            case 3:
            {
                cout<<"PostOrder Traversal"<<endl;
                postOrder_traversal(root);
                break;
            }
            case 4:
            {
                cout<<"Inorder Traversal"<<endl;
                inorder_traversal(root);
                break;
            }
            case 5:
            {
                SumReplacement(root);
                cout<<"Sum Replacement Done!!"<<endl;
                break;
            }
        }
    } while (op!=99);
    cout<<"Done!!";
    
    return 0;
}