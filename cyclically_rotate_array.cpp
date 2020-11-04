#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[1000];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    reverse(arr, arr+n);
        reverse(arr+1, arr+n);
	    for(int i=0;i<n;i++)
	    {
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
