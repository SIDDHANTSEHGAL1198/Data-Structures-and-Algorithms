#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
using namespace std;
int main()
{
    int i,n,e;
    cout<<"Enter number of nodes"<<endl;
    cin>>n;
    cout<<"Enter number of edges"<<endl;
    cin>>e;

    vector<int> adjLL[100000];

    int u,v;
    for(i=0;i<e;i++)
    {
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


    return 0;
}