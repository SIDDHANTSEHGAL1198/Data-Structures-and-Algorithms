#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int row,col;
    cout<<"EnterRow Size"<<endl;
    cin>>row;
    cout<<"Enter column size"<<endl;
    cin>>col;
    int n=1;
    int matrix[row][col];
    cout<<"Enter matrix elements"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            matrix[i][j]=n;
            n++;
        }
    }

    cout<<"Matrix entered"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    //Spiral matrix
    n=row;
    vector<int>res;
    int i;
    int left=0;
    int right=col-1;
    int top=0;
    int down=row-1;
    int direction=0;
    int k=0;
    while(k<(n*n)/2)
    {
        if(direction==0)
        {
            for(i=left;i<=right;i++)
            {
                res.push_back(matrix[top][i]);
                k++;
            }
            top++;

        }

        else if(direction==1)
        {
            for(i=top;i<=down-1;i++)
            {
                res.push_back(matrix[i][right]);
                k++;
            }
            right--;
            down--;
        }

        
        else if(direction==2)
        {
            for(i=right;i>=left+1;i--)
            {
                res.push_back(matrix[down][i]);
                k++;
            }
            down--;
        }
/*
        else if(direction==3)
        {
            for(i=down;i>=top;i--)
            {
                res.push_back(matrix[i][left]);
            }
            left++;
        }
*/
        direction=(direction+1)%4;
    }

    for(int j=0;j<res.size();j++)
    {
        cout<<res[j]<<" ";
    }




    return 0;
}

