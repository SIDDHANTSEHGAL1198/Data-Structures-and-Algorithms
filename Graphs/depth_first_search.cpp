#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <queue>
#include <map>
#include <string>
#include <cmath>
using namespace std;

vector<int>adjLL[1000];
bool visited_node[1000];

void depth_first_search(int node)
{
    visited_node[node]=1;
    cout<<node<<" ";

    vector<int> :: iterator it;

    for(it=adjLL[node].begin();it!=adjLL[node].end();it++)
    {
        if(visited_node[*it])
        {

        }
        else
        {
            depth_first_search(*it);
        }
    }
}

int main()
{
    int i,n,e,j;
    cout<<"Enter number of nodes"<<endl;
    cin>>n;

    cout<<"Enter number of edges"<<endl;
    cin>>e;

    for(i=0;i<n;i++)
    {
        visited_node[i]=false;
    }

    cout<<"Enter node connection from u--->v"<<endl;
    for(i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;

        adjLL[u].push_back(v);
        adjLL[v].push_back(u);
    }

    cout<<"Adjacent Linked List Representation"<<endl;
    for(j=1;j<=n;j++)
    {
        cout<<"head->"<<j;
        for(auto x: adjLL[j])
        {
            cout<<"->"<<x;
        }
        cout<<endl;
    } 

    cout<<"---------------------------------------------Depth First Search-------------------------------"<<endl;

    depth_first_search(1);
    cout<<endl;

    return 0;
}