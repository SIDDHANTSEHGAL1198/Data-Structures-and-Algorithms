#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
using namespace std;
int main()
{

    vector <int> adjLL[10000];
    int n,i,j,e;
    cout<<"Enter number of nodes"<<endl;
    cin>>n;
    cout<<"Enter number of edges"<<endl;
    cin>>e;

    cout<<"Enter node connection from u-->v"<<endl;
    for(i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;

        adjLL[u].push_back(v);
        adjLL[v].push_back(u);

    }    

    cout<<"Adjacent List of Graph"<<endl;

    for(i=1;i<n+1;i++)
    {
        cout<<"head->"<<i;
        for(auto x:adjLL[i])
        {
            cout<<"->"<<x;
        }
        cout<<endl;
    }

    cout<<"-----------------------------------------------------Breadth First Search------------------------------------------------------"<<endl;
    queue<int>que;

    
    bool visited_node[100000];

    for(i=0;i<n;i++)
    {
        visited_node[i]=0;
    }

    que.push(1);
    visited_node[1]=1;

    while(!que.empty())
    {
        int node=que.front();
        que.pop();
        cout<<node<<" "; 

        vector<int> :: iterator it;
        for(it=adjLL[node].begin();it!=adjLL[node].end();it++)
        {
            if(!visited_node[*it])
            {
                visited_node[*it]=1;
                que.push(*it);
            }
        }
    }

    cout<<"\nDone and Dusted"<<endl;
    return 0;
}