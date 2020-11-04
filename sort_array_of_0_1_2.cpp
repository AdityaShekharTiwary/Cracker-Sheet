#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,cz=0,co=0,ct=0;
	    cin>>n;
	    int arr[1000000];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        if(arr[i]==0)
	        {
	            cz++;
	        }
	        if(arr[i]==1)
	        {
	            co++;
	        }
	        if(arr[i]==2)
	        {
	            ct++;
	        }
	    }
	    int i=0;
	    while(cz--)
	    {
	        arr[i]=0;
	        i++;
	    }
	    while(co--)
	    {
	        arr[i]=1;
	        i++;
	    }
	    while(ct--)
	    {
	        arr[i]=2;
	        i++;
	    }
	    for(int i=0;i<n;i++)
	    {
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
