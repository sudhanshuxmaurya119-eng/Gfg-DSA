class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int res=INT_MIN;
        int sum =0;
        int low=0;
        int high=k-1;
        for(int i=low;i<=high;i++){
            sum+=arr[i];
        }
        while(high<arr.size()){
            res=max(sum,res);
            low++;
            high++;
            sum-=arr[low-1];
            if(high==arr.size())break;
            sum+=arr[high];
        }
        return res;
        
    }
};