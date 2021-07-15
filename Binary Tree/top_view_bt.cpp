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


node *create_bt()
{
    int num=0;
    cout<<"Enter node value"<<endl;
    cin>>num;

    node *newnode=new node();
    if(num==-1)
    {
        return NULL;
    }

    newnode->data=num;
    newnode->left=newnode->right=NULL;

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

void Inorder_Traversal(node *root)
{
    if(root==NULL)
    {
        return;
    }
    Inorder_Traversal(root->left);
    cout<<root->data<<" ";
    Inorder_Traversal(root->right);
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

void Top_View(node *root,int hd,map<int,vector<int>>&m)
{
    if(root==NULL)
    {
        return;
    }
    m[hd].push_back(root->data);
    Top_View(root->left,hd-1,m);
    Top_View(root->right,hd+1,m);
}

int main()
{
    int op=0;
    cout<<"Enter 1 to create a Binary Tree"<<endl;
    cout<<"Enter 2 for PreOrder Traversal"<<endl;
    cout<<"Enter 3 for InOrder Traversal"<<endl;
    cout<<"Enter 4 for PostOrder Traversal"<<endl;
    cout<<"Enter 5 Top View"<<endl;
    do
    {
        cout<<endl<<"Enter operation of your choice"<<endl;
        cin>>op;

        switch(op)
        {
            case 1:
            {
                root=create_bt();
                cout<<"Binary Tree Created"<<endl;
                break;
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
                Inorder_Traversal(root);
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
                cout<<"Top View"<<endl;
                int hd=0;
                map<int,vector<int>>m;

                Top_View(root,hd,m);

                map<int,vector<int>>::iterator it;

                for(it=m.begin();it!=m.end();it++)
                {
                    for(int i=0;i<(it->second).size();i++)
                    {
                        if(i==0)
                        {
                            cout<<(it->second)[i]<<" ";
                        }
                    }
                }
            }
        }
    }while(op!=99);
    cout<<"Done"<<endl;
    return 0;
}