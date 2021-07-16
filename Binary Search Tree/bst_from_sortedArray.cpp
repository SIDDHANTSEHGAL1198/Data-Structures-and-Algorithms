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

node *create_BST_frm_SortedArray(int arr[],int start,int end)
{
    if(start>end)
    {
        return NULL;
    }

    int mid=(start+end)/2;
    node *root=new node(arr[mid]);

    root->left=create_BST_frm_SortedArray(arr,start,mid-1);
    root->right=create_BST_frm_SortedArray(arr,mid+1,end);

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

int main()
{
    cout<<"Enter 1 to create BST from Sorted Array"<<endl;
    cout<<"Enter 2 for PreOrder Traversal"<<endl;
    cout<<"Enter 3 for InOrder Traversal"<<endl;
    cout<<"Enter 4 for PostOrder Traversal"<<endl;

    int op=0;
    do
    {
        cout<<"\nEnter operation of your choice"<<endl;
        cin>>op;

        switch(op)
        {
            case 1:
            {
                int i,size;
                cout<<"Enter size of sorted array"<<endl;
                cin>>size;

                int arr[10000];
                cout<<"Enter array elements"<<endl;
                for(i=0;i<size;i++)
                {
                    cin>>arr[i];
                }

                root=create_BST_frm_SortedArray(arr,0,size-1);
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
        }
    } while (op!=99);
    cout<<"Done and Dusted"<<endl;
    
    return 0;
}