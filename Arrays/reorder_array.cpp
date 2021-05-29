#include <iostream>
using namespace std;

void reorder(int arr[],int n)
{
    int max_num=arr[n-1]+1;
    int max=n-1;
    int min=0;
    	
    for(int i=0;i<n;i++)
    {
    	if(i%2==0)
    	{
    	    arr[i]=(arr[max]%max_num)*max_num+arr[i];
    	    max--;
    	}
    	if(i%2==1)
    	{
    	    arr[i]=(arr[min]%max_num)*max_num+arr[i];
    	    min++;
    	}
    
    }
    	
    for(int i=0;i<n;i++)
    {
    	arr[i]=arr[i]/max_num;
    }

    cout<<"Array after rearranging\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter size"<<endl;
    cin>>n;
    int arr[10000];

    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    reorder(arr,n);
    return 0;
}