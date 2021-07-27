#include <iostream>
#include <algorithm>
using namespace std;

int coin_problem(int curr[],int n,int amt)
{
    sort(curr,curr+n,greater<int>());
    for(int i=0;i<n;i++)
    {
        cout<<curr[i]<<" ";
    }
    cout<<endl;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=amt/curr[i];
        amt-=amt/curr[i]*curr[i];
    }
    return ans;
}

int main()
{
    int curr[10]={1,2,5,10,20,50,100,200,500,2000};

    int value;
    cout<<"Enter value to find out number of denominations"<<endl;
    cin>>value;

    cout<<"Number of Denominations=>>"<<coin_problem(curr,10,value)<<endl;
    return 0;
}