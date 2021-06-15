#include <iostream>
#include <queue>
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

void rightView(node *root)
{
    if(root==NULL)
    {
        return;
    }

    queue<node*>q;

    q.push(root);

    while (!q.empty())
    {
        int n=q.size();
        for(int i=0;i<n;i++)
        {
            node *currnode=q.front();
            q.pop();

            if(i==n-1)
            {
                cout<<currnode->data<<" ";
            }
            if(currnode->left)
            {
                q.push(currnode->left);
            }
            if(currnode->right)
            {
                q.push(currnode->right);
            }
        }
    }


    
}

int main()
{
    cout<<"Press 1 to create a Binary Tree"<<endl;
    cout<<"Press 2 to Display a Binary Tree in preorder traversal"<<endl;
    cout<<"Press 3 to Display a Binary Tree in inorder traversal"<<endl;
    cout<<"Press 4 to Display a Binary Tree in postorder traversal"<<endl;
    cout<<"Press 5 for Right View of Binary Tree"<<endl;

    
    int choice=0;
    do
    {
        cout<<"\nEnter operation\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                root=create();
                break;
            }
            case 2:
            {
                cout<<"Printing preorder traversal"<<endl;
                preorder(root);
                break;
            }
            case 3:
            {
                cout<<"Printing inorder traversal"<<endl;
                inorder(root);
                break;
            }
            case 4:
            {
                cout<<"Printing postorder traversal"<<endl;
                postorder(root);
                break;
            }
            case 5:
            {
                rightView(root);
                break;
            }

        }
    } while (choice!=99);
    return 0;
}