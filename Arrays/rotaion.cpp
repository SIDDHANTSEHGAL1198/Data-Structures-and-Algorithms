#include <iostream>
using namespace std;


int main()
{
    int n;
    cout<<"Enter size\n";
    cin>>n;
    int arr[50];

    int i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];

    }

    int d;
    cout<<"Rotate matrix by\n";
    cin>>d;
    int a[10],b[20],out[50];
    int k=0;

    for(i=0;i<d;i++)   // i stops at 3 and i=3
    {
        a[k]=arr[i];
        k++;
    }

    cout<<"Temp arry\n";
    for(int h=0;h<d;h++)
    {
        cout<<a[h]<<" "; 
    }

    k=0;

    for(;i<n;i++)  // i will continue from 2
    {
        b[k]=arr[i];         
        k++;

    }

    int j,t=0;
    for(j=0;j<d;j++)
    {
        b[k]=a[t];
        t++;


    }

    cout<<"Array after rotation\n";
    for(int p=0;p<n;p++)
    {
        cout<<b[p]<<" ";
    }

return 0;
}