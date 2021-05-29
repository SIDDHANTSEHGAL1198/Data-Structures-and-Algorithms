#include<iostream>
#include <vector>
#include <string>
using namespace std;
int ugly(int num)
{
    int d=1;
    vector<int>out;
    out.push_back(1);
    
    
    for(int i=2;i<8000;i++)
    {
        int q=i;
        while(q%2==0)
        {
            q=q/2;
        }
        while(q%3==0)
        {
            q=q/3;
        }
        while(q%5==0)
        {
            q=q/5;
        }
        if(q==1)
        {
            out.push_back(i);

        }
    }

    for(int t=0;t<out.size();t++)
    {
        cout<<out[t]<<" ";
    }
    cout<<endl;
    return out[num-1];

}

int main()
{
    int num;
    cout<<"Enter nth ugly number u want"<<endl;
    cin>>num;

    int res=ugly(num);
    cout<<to_string(num)<<"nth ugly number is==>"<<res;
    return 0;
}