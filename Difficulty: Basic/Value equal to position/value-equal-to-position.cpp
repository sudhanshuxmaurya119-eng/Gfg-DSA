class Solution {
  public:
    vector<int> valEqualToPos(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int> ans;
        for(int i=1;i<=n;i++){
            if(arr[i-1]==i){
                ans.push_back(i);
            }
        }
        return ans;
    }
};