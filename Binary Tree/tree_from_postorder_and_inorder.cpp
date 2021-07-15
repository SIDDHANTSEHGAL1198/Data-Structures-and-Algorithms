#include <iostream>
using namespace std;
struct node
{
    int data;
    node *right;
    node *left;
};
node *root=NULL;

int search(int inorder[],int start,int end,int val)
{
    for(int i=start;i<=end;i++)
    {
        if(inorder[i]==val)
        {
            return i;
        }
    }
    return -1;
}

node *build_tree(int postorder[],int inorder[],int start,int end)
{
    static int id=4;
    if(start>end)
    {
        return NULL;
    }

    int val=postorder[id];
    id--;

    node *newnode=new node();
    newnode->data=val;
    newnode->left=NULL;
    newnode->right=NULL;

    if(start==end)
    {
        return newnode;
    }
    int pos=search(inorder,start,end,val);
    newnode->right=build_tree(postorder,inorder,pos+1,end);
    newnode->left=build_tree(postorder,inorder,start,pos-1);
    

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

int main()
{
    int n;
    cout<<"Enter number of  nodes u want"<<endl;
    cin>>n;

    int postorder[100];
    int inorder[100];

    cout<<"Enter postorder"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>postorder[i];
    }

    cout<<"Enter inorder"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>inorder[i];
    }

    root=build_tree(postorder,inorder,0,n-1);
    cout<<"Preorder traversal"<<endl;
    preorder(root);

    return 0;
}

