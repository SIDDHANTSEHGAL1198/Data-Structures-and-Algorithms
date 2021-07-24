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

node *root1=NULL;
node *root2=NULL;

node *insert_bst(node *root,int val)
{
    if(root==NULL)
    {
        return new node(val);
    }
    else
    {
        if(root->data>val)
        {
            root->left=insert_bst(root->left,val);
        }
        else
        {
            root->right=insert_bst(root->right,val);
        }
    }
}

bool isIdenticalBST(node *root1,node *root2)
{
    if(root1==NULL && root2==NULL)
    {
        return true;
    }
    else if(root1==NULL || root2==NULL)
    {
        return false;
    }
    else
    {
        bool cond1=(root1->data==root2->data);
        bool cond2=isIdenticalBST(root1->left,root2->left);
        bool cond3=isIdenticalBST(root1->right,root2->right);

        if(cond1 && cond2 && cond3)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}


void create1()
{
    int num=0;
    while(num!=-1)
    {
        cout<<"Enter a no. or -1 to exit."<<endl;
        cin>>num;
        if(num!=-1)
        {
            root1=insert_bst(root1,num);
        }
    }
}

void create2()
{
    int num=0;
    while(num!=-1)
    {
        cout<<"Enter a no. or -1 to exit."<<endl;
        cin>>num;
        if(num!=-1)
        {
            root2=insert_bst(root2,num);
        }
    }
}


int main()
{
    cout<<"Enter 1 to create BST"<<endl;
    cout<<"Check if Binary Search Tree is Identical"<<endl;

    int op=0;
    do
    {
        cout<<endl<<"Enter opeartion of your choice"<<endl;
        cin>>op;

        switch (op)
        {
            case 1:
            {
                cout<<"Create First BST"<<endl;
                create1();

                cout<<"\nEnter second BST"<<endl;
                create2();
                break;
            }

            case 2:
            {
                if(isIdenticalBST(root1,root2))
                {
                    cout<<"Identical Binary Search Tree"<<endl;
                }
                else
                {
                    cout<<"Not Identical"<<endl;
                }
                break;
            }

        }
    } while (op!=99);
    cout<<"Done and Dusted"<<endl;
    
    return 0;

}