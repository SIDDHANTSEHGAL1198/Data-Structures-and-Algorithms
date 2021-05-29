#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;
    cout<<"Enter size of array\n";
    cin>>size;
    vector<int>missing;

    int arr[1000];

    cout<<"Enter array elements\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    int diff=arr[0];

    for(int i=0;i<size;i++)
    {
        if(arr[i]-i!=diff)
        {
            missing.push_back(i+diff);
            diff++;
        }
    }

    cout<<"Missing elements\n";
    for(int i=0;i<missing.size();i++)
    {
        cout<<missing[i]<<" ";
    }
    return 0;    
}