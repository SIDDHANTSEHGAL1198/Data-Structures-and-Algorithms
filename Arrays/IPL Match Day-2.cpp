// { Driver Code Starts
#include <iostream>
#include <vector>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) 
    {
        vector<int>out;
        int i,max;
        cout<<n<<endl<<k<<endl;

        if (n!=k)
        {
            for(i=0;i<=n-k;i++)
            {
                max=0;
                if(arr[i]>arr[i+1] && arr[i]>arr[i+2])
                {
                    max=arr[i];
                    
                }
                else if (arr[i+1]>arr[i+2])
                {
                    max=arr[i+1];;
                    
                }
                else
                {
                    max=arr[i+2];
                    
                }
                
            }
            out.push_back(max);
        }
        
        else
        {
            max=0;
            for(i=0;i<n;i++)
            {
                if(max<arr[i])
                {
                    max=arr[i];
                }
            }
            out.push_back(max);
        }
                
        
        return out;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin>>t;

    while (t--) {

        int n, k;
        cin>>n>>k;

        vector<int> arr(n);
        for(int i=0;i<n;i++) 
        cin>>arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}  // } Driver Code Ends