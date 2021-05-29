#include <iostream>
using namespace std;

bool super_ugly_chk(int k,int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        while(k%arr[i]==0)
        {
            k=k/arr[i];
        }
    }

    if(k==1)
    {
        return true;
    }
    else{
        return false;
    }
}

void super_ugly_number(int number,int arr[],int size)
{
    int d=1,k=2;

    while(d!=number)
    {
        bool res=super_ugly_chk(k,arr,size);
        if(res==true)
        {
            d++;
            k++;
        }
        else
        {
            k++;
        }
    }
    cout<<number<<"th super ugly number=>"<<k-1;
}

int main()
{
    int num,arr[1606];
    cout<<"Enter number u wnna check"<<endl;
    cin>>num;

    cout<<"Enter size of array for prime number\n";
    int n;

    cin>>n;

    cout<<endl<<"Enter array elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    super_ugly_number(num,arr,n);
    return 0;

}