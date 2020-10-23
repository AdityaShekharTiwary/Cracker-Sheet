#include<iostream>
using namespace std;

void reversearray(int arr[],int start,int end)
{
    int temp;
    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    int arr[10000];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Reversed array is: ";
    reversearray(arr,0,n-1);
    printarray(arr,n);

    return 0;
}
