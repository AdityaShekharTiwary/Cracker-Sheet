#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int arr[100000];
	    int a[100000];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=0;i<m;i++)
	    {
	        cin>>a[i];
	    }
	    unordered_set<int>s;
	    for(int i=0;i<n;i++)
	    {
	        s.insert(arr[i]);
	    }
	    for(int i=0;i<m;i++)
	    {
	        s.insert(a[i]);
	    }
	    cout<<s.size()<<endl;
	}
	return 0;
}
