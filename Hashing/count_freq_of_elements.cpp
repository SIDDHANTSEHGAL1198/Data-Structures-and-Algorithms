#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size"<<endl;
    cin>>n;

    int arr[100];
    int i;
    cout<<"Enter elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    map<int,int>freq;
    for(i=0;i<n;i++)
    {
        freq[arr[i]]++;
    }

    map<int,int>::iterator it;
    for(it=freq.begin();it!=freq.end();it++)
    {
        cout<<it->first<<"  "<<it->second<<endl;
    }
    return 0;
}