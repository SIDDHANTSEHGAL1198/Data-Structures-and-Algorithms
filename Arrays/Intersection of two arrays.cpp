

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
    int t;
    
    for(i=0;i<m;i++)
    {
        t=0;
        for(j=0;j<n;j++)
        {
            if(b[i]==a[j])
            {
                t++;
                break;
            }
        }
        if (t==1)
        {
          c[k]=b[i];
          k++;  
        }
        
    }
    
    
    cout<<endl<<"Intersection of two arrays"<<endl;
    
    for(i=0;i<k;i++)
    {
        cout<<c[i]<<" ";
    }
    
    return 0;
}