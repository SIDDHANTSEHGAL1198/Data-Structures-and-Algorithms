#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>>ans;

void swap1(int a,int b)
{
    int c=0;
    c=a;
    a=b;
    b=c;
}

void permute(vector<int> &arr,int n,int k)
{
    if(k==n-1)
    {
        ans.push_back(arr);
    }
    for(int i=k;i<n;i++)
    {
        swap1(arr[i],arr[k]);
        permute(arr,n,k+1);
        swap1(arr[i],arr[k]);
    }
    return;
}

int main()
{
    int n,i;
    cout<<"Enter n\n";
    cin>>n;
    
    int num=0;
    vector<int>arr;
    for(i=0;i<n;i++)
    {
        cin>>num;
        arr.push_back(num);
    }

    permute(arr,n,0);
    

    for(i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[0].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}