/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int rows,col,i,j,k=0;
    int arr[100];
    int dia[50][50];
    
    cout<<"Enter rows"<<endl;
    cin>>rows;
    
    cout<<"Enter column\n";
    cin>>col;
    
    cout<<"Enter elements\n";
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>dia[i][j];
        }
    }
    
    cout<<"Diagonal Matrix"<<endl;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<dia[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    //Converting into 1D array
    
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==j)
            {
                arr[k]=dia[i][j];
                k++;
            }
        }
    }
    
    cout<<"Printing 1D array\n";
    for(i=0;i<k;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
