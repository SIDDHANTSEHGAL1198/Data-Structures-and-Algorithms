#include <iostream>
using namespace std;
struct node 
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root=NULL;

struct node *create_bst()
{
    int num=0;
    node *treenode=new node();
    cout<<"Enter node value"<<endl;
    cin>>num;

    if(num==-1)
    {
        return NULL;
    }

    treenode->data=num;
    treenode->left=NULL;
    treenode->right=NULL;

    cout<<"Enter left child for "<<num<<endl;
    treenode->left=create_bst();

    cout<<"Enter right child for "<<num<<endl;
    treenode->right=create_bst();

    return treenode;

}

bool isBST(node *root,node *min,node *max)
{
    if(root==NULL)
    {
        return 1;
    }
    if(min!=NULL && root->data<=min->data)
    {
        return false;
    }

    if(max!=NULL && root->data>=max->data)
    {
        return false;
    }

    bool leftvalid=isBST(root->left,min,root);
    bool rightvalid=isBST(root->right,root,max);
    return (leftvalid && rightvalid);
}

void preorder(node *root)
{
    if(root==NULL)
    {
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(node *root)
{
    if(root==NULL)
    {
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(node *root)
{
    if(root==NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main()
{
    cout<<"Enter 1 to create a Binary Tree"<<endl;
    cout<<"Enter 2 for PreOrder Traversal"<<endl;
    cout<<"Enter 3 for inorder traversal"<<endl;
    cout<<"Enter 4 for postorder traversal"<<endl;

    int op=0;
    do
    {
        cout<<endl<<"Enter opeartion of your choice"<<endl;
        cin>>op;

        switch(op)
        {
            case 1:
            {
                cout<<"Binary Search Tree"<<endl;
                root=create_bst();
                break;
            }

            case 2:
            {
                cout<<"PREORDER TRAVERSAL"<<endl;
                preorder(root);
                break;
            }

            case 3:
            {
                cout<<"INORDER TRAVERSAL"<<endl;
                inorder(root);
                break;
            }

            case 4:
            {
                cout<<"POSTORDER TRAVERSAL"<<endl;
                postorder(root);
                break;
            }

            case 5:
            {
                bool res=isBST(root,NULL,NULL);

                if(res==true)
                {
                    cout<<"Binary Search Tree"<<endl;
                }
                else
                {
                    cout<<"Not a Binary Search Tree"<<endl;
                }
                break;
            }
        }
    }while(op!=99);
    cout<<"Done and Dusted"<<endl;
    return 0;
}