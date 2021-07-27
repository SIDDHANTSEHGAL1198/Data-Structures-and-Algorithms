#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter n"<<endl;
    cin>>n;

    vector<vector<int>> v;
    for(int i=0;i<n;i++)
    {
        int start,end;
        cin>>start>>end;
        v.push_back({start,end});
    }

    /* Printing 2D Vector
    cout<<"2D Vector"<<endl;
    for(i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    */

    sort(v.begin(),v.end());
    
    cout<<"2D Vector"<<endl;
    
    for(i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    int take=1;
    int end=v[0][1];

    for(i=1;i<n;i++)
    {
        if(v[i][1]>=end)
        {
            take++;
            end=v[i][0];
        }
    }

    cout<<"Number of activities==>"<<take<<endl;
    return 0;
}