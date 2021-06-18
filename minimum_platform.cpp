int findPlatform(int arr[], int dep[], int n)
{
   sort(arr, arr + n);
   sort(dep, dep + n);
   int ans = 1;
   int j = 0;
   for (int i = 1; i < n; i++) {
      if (arr[i] <= dep[j]) ans++;
      else j++;
   }
   return ans;

}