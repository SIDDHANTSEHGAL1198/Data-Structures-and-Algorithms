#include <iostream>
#include <algorithm>
#include <vector>
#define pii pair<int,int>
#define vi vector<pii>
using namespace std;

bool compare(pii p1,pii p2)
{
    double v1=(double) p1.first/(double)p1.second;
    double v2=(double) p2.first/(double)p2.second;

    return v1>v2; 
}
int main()
{
    int weight;
    cout<<"Enter weight"<<endl;
    cin>>weight;

    int n,i;
    cout<<"Enter n"<<endl;
    cin>>n;

    vi a(n);

    cout<<"Enter Profit and Weight"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i].first;
        cin>>a[i].second;
    }

    sort(a.begin(),a.end(),compare);

    int ans=0;
    for(i=0;i<n;i++)
    {
        if(weight>=a[i].second)
        {
            ans+=a[i].first;
            weight-=a[i].second;
            continue;
        }

        double vw=(double)a[i].first/a[i].second;
        ans=ans+vw*weight;
        weight=0;
        break;
    }

    cout<<"Max Profit==>>"<<ans<<endl;
    
}