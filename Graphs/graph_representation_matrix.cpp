#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
using namespace std;


void print_AdjacencyMatrix(int arr_mat[][100],int n)
{
    int i,j;
    cout<<"Adjacency Matrix"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr_mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

void create_Adjacency_Matrix(vector<pair<int,int>>mat,int n)
{
    int ad_mat[100][100];

    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            ad_mat[i][j]=0;
        }
    }

    /*
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<ad_mat[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Pair size==>"<<mat.size()<<endl;*/

    for(i=0;i<mat.size();i++)
    {
        int u=mat[i].first-1;
        int v=mat[i].second-1;

        ad_mat[u][v]=1;
        ad_mat[v][u]=1;
    }

    print_AdjacencyMatrix(ad_mat,n);
}


int main()
{
    vector<pair<int,int>> mat;

    int n,e,i;
    cout<<"Enter number of nodes"<<endl;
    cin>>n;
    cout<<"Enter number of edges"<<endl;
    cin>>e;

    cout<<"Enter node values u-->v"<<endl;
    int u,v;
    for(i=0;i<e;i++)
    {
        cin>>u>>v;
        mat.push_back(make_pair(u,v));
    }

    // cout<<mat.size()<<endl;

    create_Adjacency_Matrix(mat,n);
    
    return 0;
}