/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int n,i,j;
    cout<<"Enter array size"<<endl;
    cin>>n;
    int a[100],b[100];
    for (i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    cout<<"Printing array before reversing it"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
    /* Method 1=>With help of an array
    cout<<"Reversing array"<<endl;
    cout<<endl;

        for(i=n-1,j=0;i>=0;j++,i--)
        {
            b[j]=a[i];
        }
    
    for(i=0;i<n;i++)
    {
        a[i]=b[i];
    }
    
    //Printing array for Reversing
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }*/
    
    int temp=0;
    for(i=0,j=n-1;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    //Printing array for Reversing
    cout<<endl<<"Printing array after Reversing"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
    
    
    return 0;
}
