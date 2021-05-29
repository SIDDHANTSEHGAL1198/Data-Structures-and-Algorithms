#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *down;
};
struct node *head=NULL;

node *matrix_Linkedlist(int mat[3][3],int n)
{
    node *temp,*newnode,*num;
    
    newnode->next=0;
    newnode->down=NULL;
    int i,j;
    for(i=0;i<n-1;i++)
    {
        newnode->data=mat[0][i];
        newnode->next=NULL;
        temp->next=newnode;
        temp=newnode;

    }
        for(j=0;j<n;j++)
        {
            newnode->data=mat[i][j];
            newnode->next=NULL;
            num->data=mat[i+1][j];
            num->down=NULL;
            if(head==0)
            {
                temp=head=newnode;
                temp->down=num;
                num->next=NULL;
            }
            else
            {
                temp->next=newnode;
                temp=newnode;
                temp->down=num;
                
            }

        }
    }

    for(i=head;i->next!=NULL;i=i->next)
    {
        for
    }
    return head;
}

int main()
{
    int n;
    cout<<"Enter size of matrix"<<endl;
    cin>>n;
    int mat[3][3];

    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>mat[i][j];
        }
    }

    head=matrix_Linkedlist(mat,n);
    cout<<head->next->data;



    return 0;
}