vector<int> find(int arr[], int n , int x )
{
    vector<int> res;
    for(int i=0;i<n;i++){
        if(arr[i]==x) {
            res.push_back(i);
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]==x) {
            res.push_back(i);
            break;
        }
    }
    if(res.size()==0){
        res.push_back(-1);
        res.push_back(-1);
    }
    return res;
}