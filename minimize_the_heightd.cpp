// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends





//User function template for C++

class Solution{
public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        if(n==1)
        return 0;
        sort(arr,arr+n);
        int ans=arr[n-1]-arr[0];

        int big=arr[n-1]-k;
        int small=arr[0]+k;

        if(small>big)
        {
            swap(small,big);
        }
        for(int i=1;i<n-1;i++)
        {
            int add=arr[i]+k;
            int subtract=arr[i]-k;
            if(add<=big || subtract>=small)
            {
                continue;
            }
            if(big-subtract<=add-small)
            {
                small=subtract;
            }
            else
            {
                big=add;
            }
        }
        return min(ans,big-small);


    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
    }
