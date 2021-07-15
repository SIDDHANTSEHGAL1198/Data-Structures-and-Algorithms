#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root=NULL;

int search(int inorder[],int start,int end,int curr)
{
    for(int i=start;i<=end;i++)
    {
        if(inorder[i]==curr)
        {
            return i;
        }
    }
    return -1;
}

node *build_tree(int preorder[],int inorder[],int start,int end)
{
    static int id=0;

    if(start>end)
    {
        return NULL;
    }

    int curr=preorder[id];
    id++;

    node *newnode=new node();
    newnode->data=curr;
    newnode->left=NULL;
    newnode->right=NULL;
    if(start==end)
    {
        return newnode;
    }
    int pos=search(inorder,start,end,curr);
    newnode->left=build_tree(preorder,inorder,start,pos-1);
    newnode->right=build_tree(preorder,inorder,pos+1,end);

}

void inorder_print(node *root)
{
    if(root==NULL)
    {
        return;
    }
    inorder_print(root->left);
    cout<<root->data<<" ";
    inorder_print(root->right);
}

void postorder_print(node *root)
{
    if(root==NULL)
    {
        return;
    }
    postorder_print(root->left);
    postorder_print(root->right);
    cout<<root->data<<" ";
}

int main()
{
    int i,n;
    cout<<"Enter number of nodes u want in tree\n";
    cin>>n;

    int inorder[10000];
    int preorder[10000];

    cout<<"Enter Preorder"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>preorder[i];
    }

    cout<<"Enter inorder"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>inorder[i];
    }

    root=build_tree(preorder,inorder,0,n-1);
    cout<<"Inorder traversal"<<endl;
    inorder_print(root);
    cout<<endl;
    cout<<"Postorder traversal"<<endl;
    postorder_print(root);
    return 0;
}