#include<iostream>
#include<array>
#include<vector>
#include<queue>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int i,j,e,n,u,v;
    vector<int> adj[100];
    cout<<"Enter number of nodes"<<endl;
    cin>>n;

    cout<<"Enter number of edges"<<endl;
    cin>>e;


    cout<<"Enter nodes connection from u-->v"<<endl;
    for(i=0;i<e;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
    }
    

    vector<int>stk;
    int k=0;
    vector<int> :: iterator it;

    for(i=0;i<n;i++)
    {
        stk.push_back(i);

        for(auto x:adj[i])
        {
            it= find(stk.begin(),stk.end(),x);
            if(it!=stk.end())
            {
                k++;
                break;
            }
        }
    }

    if(k>0)
    {
        cout<<"Cycle Detected"<<endl;
    }
    else
    {
        cout<<"Cycle not Detected"<<endl;
    }
    return 0;
}