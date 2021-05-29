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
    int mat[50][50];
    int upper[20][20];
    int lower[20][20];
    
    cout<<"Enter rows"<<endl;
    cin>>rows;
    
    cout<<"Enter column\n";
    cin>>col;
    
    cout<<"Enter elements\n";
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>mat[i][j];
        }
    }
    
    cout<<"2D Matrix"<<endl;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    //Converting into 1D array
    
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i>=j)
            {
                lower[i][j]=mat[i][j];
                
            }
            else
            {
                lower[i][j]=0;
            }
        }
    }
    
    
    cout<<"Lower Triangular Matrix"<<endl;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<lower[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i<=j)
            {
                upper[i][j]=mat[i][j];
                
            }
            else
            {
                upper[i][j]=0;
            }
        }
    }
    
    
    cout<<"Upper Triangular Matrix"<<endl;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<upper[i][j]<<" ";
        }
        cout<<"\n";
    }
    
  

    return 0;
}
