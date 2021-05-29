#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int min_operations(int arr[][10],int n)
{
    int total=0;
    int max_sum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int r_sum=0;
        int c_sum=0;
        for(int j=0;j<n;j++)
        {
            r_sum+=arr[i][j];
            c_sum+=arr[j][i];
        }

        max_sum=max(max_sum,r_sum);
        max_sum=max(max_sum,c_sum);

        total+=r_sum;

    }

    return max_sum*n-total;
}

int main()
{
    int n;
    cout<<"Enter size n"<<endl;
    cin>>n;

    int i,j;
    int arr[10][10];
    cout<<"Enter matrix elements"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Minimum number of operations required=>"<<min_operations(arr,n);


    return 0;
}