#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;;
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
    else if(root->data>val)
    {
        root->left=create_bst(root->left,val);
    }
    else
    {
        root->right=create_bst(root->right,val);
    }

    return root;
}

node *InOrder_successor(node *root)
{
    node *curr=root;
    while(curr && curr->left!=NULL)
    {
        curr=curr->left;
    }

    return curr;
}

node *deletion_in_bst(node *root,int key)
{
    if(root->data>key)
    {
        root->left=deletion_in_bst(root->left,key);
    }
    else if(root->data<key)
    {
        root->right=deletion_in_bst(root->right,key);
    }
    else
    {
        if(root->left==NULL)
        {
            node *temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL)
        {
            node *temp=root->left;
            free(temp);
            return temp;
        }
        
        node *temp=InOrder_successor(root->right);
        root->data=temp->data;
        root->right=deletion_in_bst(root->right,temp->data);

        
    }
    return root;
}

void Preorder_traversal(node *root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    Preorder_traversal(root->left);
    Preorder_traversal(root->right);
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
    cout<<"Enter 1 to form a binary_search_tree"<<endl;
    cout<<"Enter 2 for Preorder traversal"<<endl;
    cout<<"Enter 3 for inorder traversal"<<endl;
    cout<<"Enter 4 for postorder traversal"<<endl;
    cout<<"Enter 5 for Deletion of a node"<<endl;

    int op=0;
    do
    {
        cout<<endl<<"Enter operation of your choice"<<endl;;
        cin>>op;

        switch(op)
        {
            case 1:
            {
                int size=0;
                cout<<"Enter number of elements for binary search tree"<<endl;
                cin>>size;

                int arr[100000];
                cout<<"Enter elements for BST"<<endl;
                for(int i=0;i<size;i++)
                {
                    cin>>arr[i];
                }

                for(int i=0;i<size;i++)
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
                cout<<"PreOrder traversal"<<endl;
                Preorder_traversal(root);
                break;
            }
            case 3:
            {
                cout<<"inorder_traversal"<<endl;
                inorder_traversal(root);
                break;
            }
            case 4:
            {
                cout<<"postorder_traversal"<<endl;
                postorder_traversal(root);
                break;
            }
            case 5:
            {
                cout<<"Enter node u wnna delete"<<endl;
                int del;;
                cin>>del;

                root=deletion_in_bst(root,del);
                break;
            }
        }

    }while(op!=99);
    cout<<"Done and dusted"<<endl;
    return 0;
}