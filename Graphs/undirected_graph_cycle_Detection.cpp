#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
using namespace std;

bool isCycle(int src,vector<int>adj[100],bool vis[100],int parent)
{
    vis[src]=true;
    for(auto i:adj[src])
    {
        if(i!=parent)
        {
            if(vis[i])
            {
                return true;
            }
            if(!vis[i] && isCycle(i,adj,vis,src))
            {
                return true;
            }
        }
    }
    return false;
}

vector<int> adjLL[100];
bool vis[100];

int main()
{   
    int i,e,j,n;
    bool cycle=false;
    cout<<"Enter number of nodes"<<endl;
    cin>>n;

    cout<<"Enter number of edges"<<endl;
    cin>>e;

    cout<<"Enter node connection from u--->v"<<endl;
    for(i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;

        adjLL[u].push_back(v);
        adjLL[v].push_back(u);
    }

    for(i=0;i<n;i++)
    {
        if(!vis[i] && isCycle(i,adjLL,vis,-1))
        {
            cycle=true;
        }
    }

    if(cycle)
    {
        cout<<"Cycle Present"<<endl;
    }
    else
    {
        cout<<"Cycle not present"<<endl;
    }

    return 0;
}