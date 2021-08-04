#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
using namespace std;
int main()
{
    int i,e,n,j;
    cout<<"Enter number of nodes"<<endl;
    cin>>n;   

    cout<<"Enter number of edges"<<endl;
    cin>>e;

    vector<int>adjLL[10000];
    vector <int>indegree(n,0);

    cout<<"Enter nodes conncetting fron u--->v"<<endl;
    for(i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;

        adjLL[u].push_back(v);
        indegree[v]++;
    }

    queue<int>que;
    for(i=0;i<n;i++)
    {
        if(indegree[i]==0)
        {
            que.push(i);
        }
    }

    while(!que.empty())
    {
        int node=que.front();
        cout<<node<<" ";
        que.pop();

        for(auto it:adjLL[node])
        {
            indegree[it]--;
            if(indegree[it]==0)
            {
                que.push(it);
            }
        }
    }

    return 0; 
}