#include <iostream>
#include <vector>
using namespace std;

void spiral_traversal(int row,int col,int matrix[][100])
{
    vector<int>res;
    int i;
    int left=0;
    int right=col-1;
    int top=0;
    int down=row-1;
    int direction=0;
    while(left<=right && top<=down)
    {
        if(direction==0)
        {
            for(i=left;i<=right;i++)
            {
                res.push_back(matrix[top][i]);
            }
            top++;
        }

        else if(direction==1)
        {
            for(i=top;i<=down;i++)
            {
                res.push_back(matrix[i][right]);
            }
            right--;
        }

        else if(direction==2)
        {
            for(i=right;i>=left;i--)
            {
                res.push_back(matrix[down][i]);
            }
            down--;
        }

        else if(direction==3)
        {
            for(i=down;i>=top;i--)
            {
                res.push_back(matrix[down][left]);
            }
            left++;
        }

        direction=(direction+1)%4;
    }

    for(int j=0;j<res.size();j++)
    {
        cout<<res[j]<<" ";
    }




}

int main()
{
    int row,col;
    cout<<"EnterRow Size"<<endl;
    cin>>row;
    cout<<"Enter column size"<<endl;
    cin>>col;

    int matrix[100][100];

    cout<<"Enter matrix elements"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>matrix[i][j];
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

    spiral_traversal(row,col,matrix);

    //Spiral matrix

    
    return 0;
}

