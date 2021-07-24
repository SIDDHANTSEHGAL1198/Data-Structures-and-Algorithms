#include <iostream>
#include <stack>
using namespace std;
struct node 
{
    int data;
    struct node *left;
    struct node *right;
    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
struct node *root=NULL;

node *create_bst(node *root,int val)
{
    if(root==NULL)
    {
        return new node(val);
    }

    if(val<root->data)
    {
        root->left=create_bst(root->left,val);
    }
    else
    {
        root->right=create_bst(root->right,val);
    }

    return root;
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


void ZigZag_traversal(node *root)
{
    if(root==NULL)
    {
        return;
    }
    stack<node*>currentLevel;
    stack<node*>nextLevel;

    bool leftToright=true;

    currentLevel.push(root);

    while(!currentLevel.empty())
    {
        node *temp=currentLevel.top();
        currentLevel.pop();

        if(temp)
        {
            cout<<temp->data<<" ";

            if(leftToright)
            {
                if(temp->left)
                {
                    nextLevel.push(temp->left);
                }

                if(temp->right)
                {
                    nextLevel.push(temp->right);
                }
            }

            else
            {
                if(temp->right)
                {
                    nextLevel.push(temp->right);
                }
                if(temp->left)
                {
                    nextLevel.push(temp->left);
                }
            }
        }

        if(currentLevel.empty())
        {
            leftToright=!leftToright;
            swap(currentLevel,nextLevel);
        }
    }
}

int main()
{
    cout<<"Enter 1 to create Binary search Tree"<<endl;
    cout<<"Enter 2 for PreOrder Traversal"<<endl;
    cout<<"Enter 3 for InOrder Traversal"<<endl;
    cout<<"Enter 4 for PostOrder Traversal"<<endl;
    cout<<"Press 5 for ZigZag Traversal"<<endl;

    int op=0;
    do
    {
        cout<<"\nEnter opeartion of your choice"<<endl;
        cin>>op;

        switch(op)
        {
            case 1:
            {
                int i,n=0;
                cout<<"Enter number of nodes for Binary Search Tree"<<endl;
                cin>>n;

                int arr[10000];
                cout<<"Enter node values"<<endl;
                for(i=0;i<n;i++)
                {
                    cin>>arr[i];
                }

                for(i=0;i<n;i++)
                {
                    if(i==0)
                    {
                        root=create_bst(root,arr[i]);
                    }
                    else
                    {
                        create_bst(root,arr[i]);
                    }
                }
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
                cout<<"Zig Zag traversal"<<endl;
                ZigZag_traversal(root);
                break;
            }
        }

    }while(op!=99);
    cout<<"Done and Dusted"<<endl;
    return 0;
}