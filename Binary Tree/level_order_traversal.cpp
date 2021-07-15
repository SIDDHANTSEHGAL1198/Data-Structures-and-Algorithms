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

node* create_binary_tree()
{
    int num=0;
    node *newnode=new node();
    cout<<"Enter number u want to enter or press -1 to terminate as leaf node"<<endl;
    cin>>num;

    if(num==-1)
    {
        return NULL;
    }
    newnode->data=num;
    newnode->left=NULL;
    newnode->right=NULL;

    cout<<"Enter left child of "<<num<<endl;
    newnode->left=create_binary_tree();

    cout<<"Enter right child of "<<num<<endl;
    newnode->right=create_binary_tree();

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

void level_order_traversal(node *root)
{
    if(root==NULL)
    {
        return;
    }
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        node *newnode=q.front();
        q.pop();
        if(newnode!=NULL)
        {
            cout<<newnode->data<<" ";
            if(newnode->left)
            {
                q.push(newnode->left);
            }
            if(newnode->right)
            {
                q.push(newnode->right);
            }

        }
        else if(!q.empty())
        {
            q.push(NULL);
        }
    }

}

int kth_level_nodesSum(node *root,int k)
{
    if(root==NULL)
    {
        return -1;
    }
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    int sum=0;
    int level=0;

    while(!q.empty())
    {
        node *newnode=q.front();
        q.pop();
        if(newnode!=NULL)
        {
            if(level==k)
            {
                sum=sum+newnode->data;
            }
            if(newnode->left)
            {
                q.push(newnode->left);
            }
            if(newnode->right)
            {
                q.push(newnode->right);
            }

        }
        else if(!q.empty())
        {
            q.push(NULL);
            level++;
        }
        
    }
    return sum;
}


int sum_of_nodes(node *root)
{
    static int sum=0;
    if(root==NULL)
    {
        return 0;
    }

    return root->data+sum_of_nodes(root->left)+sum_of_nodes(root->right);
}

int main()
{
    cout<<"Enter 1 to create a binary tree"<<endl;
    cout<<"Enter 2 to display bt in preorder traversal"<<endl;
    cout<<"Enter 3 to display bt in inorder traversal"<<endl;
    cout<<"Enter 4 to display bt in postorder traversal"<<endl;
    cout<<"Enter 5 to find sum of all node"<<endl;
    cout<<"Enter 6 to print Binary tree in Level order traversal"<<endl;
    cout<<"Enter 7 to find sum at kth level nodes"<<endl;
    


    int choice=0;
    do
    {
        cout<<"\nEnter operation of your choice"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1:
            {
                root=create_binary_tree();
                break;
            }
            case 2:
            {
                cout<<"Printing Preorder traversal for Binary tree"<<endl;
                preorder(root);
                cout<<endl;
                break;
            }
            case 3:
            {
                cout<<"Printing Inorder traversal for Binary tree"<<endl;
                inorder(root);
                cout<<endl;
                break;
            }
            case 4:
            {
                cout<<"Printing Postorder traversal for Binary tree"<<endl;
                postorder(root);
                cout<<endl;
                break;
            }
            case 5:
            {
                int sum=sum_of_nodes(root);
                cout<<"Sum of nodes="<<sum<<endl;
                break;
            }

            case 6:
            {
                level_order_traversal(root);
                break;
            }

            case 7:
            {
                int k;
                cout<<"Enter kth level"<<endl;
                cin>>k;
                int sum=kth_level_nodesSum(root,k);
                cout<<"Sum:"<<sum<<endl;
                break;
            }
        }
    } while (choice!=99);
    cout<<"Done"<<endl;

    return 0;   
}