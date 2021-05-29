#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <vector>
using namespace std;

void quadratic_list(int arr[],int n,int a,int b,int c)
{
    int i;
    int val=0;
    vector<int>hash;
    for(i=0;i<n;i++)
    {
        val=(a*pow(arr[i],2))+(b*arr[i])+c;
        hash.push_back(val);
    }

    sort(hash.begin(), hash.end());

    for(int i=0;i<n;i++)
    {
        cout<<hash[i]<<" ";
    }
}

int main()
{
    int size;
    cout<<"Enter size"<<endl;
    cin>>size;

    int arr[10000];
    cout<<"Enter array elements\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    int a,b,c;
    cout<<"Enter values for a\n";
    cin>>a;
    cout<<"Enter values for b"<<endl;
    cin>>b;
    cout<<"Enter values for c"<<endl;
    cin>>c;

    quadratic_list(arr,size,a,b,c);

    return 0;

}