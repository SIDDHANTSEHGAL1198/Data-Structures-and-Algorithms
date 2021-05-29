#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,m,j,k;
    
    cout<<"Enter size of array"<<endl;
    cin>>n>>m>>k;
    
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

    cout<<endl<<"Enter second array elements"<<endl;
    
    for(i=0;i<k;i++)
    {
        cin>>c[i];
    }

    vector<int>res;

    int p=0,q=0,r=0;
    while(p<n && q<m && r<k)
    {
        if(a[p]==b[q] && b[q]==c[r])
        {
            res.push_back(a[p]);
            p++;
            q++;
            r++;
        }
        else if(a[p]<b[q])
        {
            p++;
        }
        else if(b[q]<c[r])
        {
            q++;
        }
        else
        {
            r++;
        }
    }

    
    
    cout<<endl<<"Union array"<<endl;
    
    for(i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    
    return 0;
}