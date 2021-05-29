#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of list\n";
    cin>>n;
    int list[10000];
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>list[i];
    }

    int pqueue[n];
    int k=0;

    int min=list[0];
    int pos=0,i;
    for(i=0;i<n;i++)
    {
        pqueue[i]=list[i];
        if(min>list[i])
        {
            min=list[i];
            pos=i;
        }
    }

    cout<<"Priority Queue is"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<pqueue[i]<<" ";
    }
    cout<<endl;

    /*To delete a element in priority queue we delete the 
    smallest element present in the queue has the highest priority*/

    cout<<"Deleting element with highest priority"<<endl;
    for(i=pos+1;i<n;i++)
    {
        pqueue[i-1]=pqueue[i];
    }
    n--;
    
    cout<<"Priority Queue after deletion"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<pqueue[i]<<" ";
    }
    cout<<endl;
    

    
    return 0;
}