#include <iostream>
using namespace std;
void convertToWave(int arr[], int n){
        int temp=0;
        cout<<"Size=>"<<n<<endl;
        if(n%2==0)
        {
            for(int i=0;i<n;i=i+2)
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        if(n%2==1)
        {
            for(int i=0;i<n-1;i=i+2)
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
    
            }
        }
        
        for(int j=0;j<n;j++)
        {
            cout<<arr[j]<<" ";
        }
        
    }

int main()
{
    int size;
    cout<<"Enter size of the array\n";
    cin>>size;
    int arr[50];
    cout<<"Enter array elemnts\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    convertToWave(arr,size);
    return 0;
}