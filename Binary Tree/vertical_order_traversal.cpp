#include <iostream>
#include <cmath>
#include <map>
#include <vector>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root=NULL;

struct node *create_bt()
{
    int num=0;
    node *newnode=new node();
    cout<<"Enter number of your choice"<<endl;
    cin>>num;

    if(num==-1)
    {
        return NULL;
    }

    newnode->data=num;
    newnode->left=NULL;
    newnode->right=NULL;

    cout<<"Enter left child of "<<num<<endl;
    newnode->left=create_bt();

    cout<<"Enter right child of "<<num<<endl;
    newnode->right=create_bt();

    return newnode;

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

void GetVerticalOrder(node *root,int hd,map<int,vector<int>>&m)
{
    if(root==NULL)
    {
        return;
    }

    m[hd].push_back(root->data);
    GetVerticalOrder(root->left,hd-1,m);
    GetVerticalOrder(root->right,hd+1,m);
}

int main()
{
    int op=0;

    cout<<"Enter 1 to create a binary tree"<<endl;
    cout<<"Enter 2 for PreOrder Traversal"<<endl;
    cout<<"Enter 3 for InOrder Traversal"<<endl;
    cout<<"Enter 4 for PostOreder Traversal"<<endl;
    cout<<"Enter 5 for Vertical Order Traversal"<<endl;

    do
    {
        cout<<endl<<"Enter operation of your choice"<<endl;
        cin>>op;

        switch(op)
        {
            case 1:
            {
                root=create_bt();
                break;
                cout<<"Binary Tree Created"<<endl;
            }
            case 2:
            {
                cout<<"PreOrder Traversal"<<endl;
                PreOrder_Traversal(root);
                break;
            }
            case 3:
            {
                cout<<"InOrder Traversal"<<endl;
                InOrder_Traversal(root);
                break;
            }
            case 4:
            {
                cout<<"PostOrder Traversal"<<endl;
                PostOrder_Traversal(root);
                break;
            }
            case 5:
            {
                cout<<"Vertical Order Traversal"<<endl;
                map<int,vector<int>>m;
                int hd=0;

                GetVerticalOrder(root,hd,m);

                map<int,vector<int>>::iterator it;
                for(it=m.begin();it!=m.end();it++)
                {
                    for(int i=0;i<(it->second).size();i++)
                    {
                        cout<<(it->second)[i]<<" ";
                    }
                    cout<<endl;
                }

                break;
            }
        }
    }while(op!=99);
    cout<<"Doneee!!!"<<endl;
    return 0;

}