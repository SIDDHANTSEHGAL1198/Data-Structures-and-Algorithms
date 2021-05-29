#include <iostream>
using namespace std;

int main()
{
    int n,t;
    cin>>t;
    
    for(int m=1;m<=t;m++)
    {
        int k=0;
        cin>>n;
        int arr[100000];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        
        int days=0;
        int start=arr[0];
        int end=arr[n-1];
        int i=1;
        int mxm=-1;
        int cases=0;

        while(i<n-2)
        {
            if(start>arr[1] && k==0)
            {
                mxm=start;
                days++;
                k=k+8;
            }
            if(end>arr[n-2])
            {
                mxm=end;
                days++;
                break;
            }
            if(arr[i]>mxm && arr[i]>arr[i+1])
            {
                days++;
                mxm=arr[i];
            }
            
            i++;
        }
        
        cout<<"Case #"<<m<<": "<<days<<endl;


    }
    
    
    return 0;
}