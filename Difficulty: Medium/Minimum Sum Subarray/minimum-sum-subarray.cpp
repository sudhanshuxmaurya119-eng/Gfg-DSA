class Solution {
  public:
    int smallestSumSubarray(vector<int>& arr) {
        // Code here
        int bs=arr[0];
        int ans=arr[0];
        for(int i=1;i<arr.size();i++){
            int v1=bs+arr[i];
            int v2=arr[i];
            bs=min(v1,v2);
            ans=min(ans,bs);
        }
        return ans;
    }
};
