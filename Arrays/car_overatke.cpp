#include <iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter size"<<endl;
    cin>>size;

    cout<<"Enter your array elements"<<endl;
    int arr[10000];

    int result()

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    int i=0;
    int overtake=0;
    while(i<size-1)
    {
        while (arr[i]>arr[i+1])
        {
            overtake++;
            i++;
        }
        i++;
    }
    cout<<"Overtake==>"<<overtake;
    return 0;
}