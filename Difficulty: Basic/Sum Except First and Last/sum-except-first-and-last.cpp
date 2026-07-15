class Solution {
  public:
    int sumExceptFirstLast(vector<int>& arr) {
        // code here
        int sum=0;
        int n=arr.size();
        if(n<=2) return 0;
        for(int i=1;i<n-1;i++){
            sum+=arr[i];
        }
        
        return sum;
    }
};