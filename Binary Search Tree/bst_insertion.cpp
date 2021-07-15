#include <iostream>
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
node *create_binary_search_tree(node *root,int val)
{
    if(root==NULL)
    {
        return new node(val);
    }
    if(val<root->data)
    {
        root->left=create_binary_search_tree(root->left,val);
    }
    else
    {
        root->right=create_binary_search_tree(root->right,val);
    }

    return root;
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
    PostOrder_Traversal(root->left);
    PostOrder_Traversal(root->right);
    cout<<root->data<<" ";
}

int main()
{
    cout<<"Enter 1 to create Binary Search Tree"<<endl;
    cout<<"Enter 2 for PreOrder Traversal"<<endl;
    cout<<"Enter 3 for InOrder Traversal"<<endl;
    cout<<"Enter 4 for PostOrder Traversal"<<endl;

    int op=0;
    do
    {
        cout<<endl<<"Enter opeartion of your choice"<<endl;
        cin>>op;

        switch(op)
        {
            case 1:
            {
                int size;
                cout<<"Enter size of array for BST"<<endl;
                cin>>size;

                int arr[100000];
                cout<<"Enter array elements"<<endl;
                for(int i=0;i<size;i++)
                {
                    cin>>arr[i];
                }

                for(int i=0;i<size;i++)
                {
                    if(i==0)
                    {
                        root=create_binary_search_tree(root,arr[i]);
                    }
                    else
                    {
                        create_binary_search_tree(root,arr[i]); 
                    }
                }
                break;

            }

            case 2:
            {
                cout<<"Preorder Traversal"<<endl;
                PreOrder_Traversal(root);
                break;
            }
            
            case 3:
            {
                cout<<"Inorder_Traversal"<<endl;
                InOrder_Traversal(root);
                break;
            }

            case 4:
            {
                cout<<"Postorder Traversal"<<endl;
                PostOrder_Traversal(root);
                break;
            }
        }
    } while (op!=99);
    cout<<"Done and dusted"<<endl;
    
    return 0;
}