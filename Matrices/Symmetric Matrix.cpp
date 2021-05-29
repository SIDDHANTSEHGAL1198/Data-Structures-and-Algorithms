

#include <iostream>

using namespace std;

int main()
{
    int mat[20][20];
    int tran[20][20];
    int i,j,row,k=0,col;
    
    cout<<"Enter row size\n";
    cin>>row;
    
    cout<<"Enter col size\n";
    cin>>col;
    
    cout<<"Enter matrix elements\n";
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>mat[i][j];
        }
    }
    
    

    
    cout<<"Matrix\n";
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    
    //Transpose Matrix
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            tran[i][j]=mat[j][i];
        }
        cout<<"\n";
    }
    
    
    cout<<endl<<"Transpose matrix"<<endl;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<tran[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(mat[i][j]!=tran[i][j])
            {
                k++;
                break;
            }
        }
    }
    
    if(k==0)
    {
        cout<<endl<<"Symmetric Matrix";
    }
    else
    {
        cout<<"Not a symmetric matrix";
    }
    
    
    return 0;
}
