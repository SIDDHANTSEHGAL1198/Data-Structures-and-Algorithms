#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>
#include <unordered_map>
using namespace std;
int main()
{
    string str;
    cout<<"Enter String==>";
    cin>>str;

    int len=str.length();

    unordered_map<char,int>freq;
    for (int i = 0; str[i]; i++)
    {
        if (freq.find(str[i]) == freq.end())
        {
            freq.insert(make_pair(str[i], 1));
        }
 
        // Else update the frequency
        else
        {
            freq[str[i]]++;
        }
    }

    priority_queue<int,vector<int>,greater<int>>minheap;
    for(auto it:freq)
    {
        cout<<it.first<<" "<<it.second<<endl;
        minheap.push(it.second);
    }


    int sum=0;
    while(minheap.size()>1)
    {
        int v1=minheap.top();
        minheap.pop();
        int v2=minheap.top();
        minheap.pop();

        sum+=v1+v2;

        minheap.push(v1+v2);
    }

    cout<<"Minimum number of bits required==>"<<sum<<" bits"<<endl;
    
    return 0;
}