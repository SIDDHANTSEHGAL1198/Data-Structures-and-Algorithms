/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,m,j;
    
    cout<<"Enter size of array"<<endl;
    cin>>n>>m;
    
    int a[100],b[100],c[100];
    int i;
    cout<<"Enter first array elements"<<endl;
    
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    cout<<endl<<"Enter second array elements"<<endl;
    
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    
    int k=0;
    i=0,j=0;
    while(i<m && j<n)
    {
        if(a[i]>b[j])
        {
            c[k]=b[j];
            j++;
            k++;
        }
        else
        {
            c[k]=a[i];
            i++;
            k++;
        }
    }
    
    for(;i<m;i++)
    {
        c[k]=a[i];
        k++;
    }
    for(;j<n;j++)
    {
        c[k]=b[j];
        k++;
    }
    
    cout<<"Printing Sorted merged array"<<endl;
    int size=m+n;
    
    for(i=0;i<size;i++)
    {
        cout<<c[i]<<" ";
    }

    return 0;
}
