class Solution {
  public:
    int maxCharGap(string &s) {
        // code here
        int max_gap=INT_MIN;
       vector<int> arr(26,-1);
       for(int i=0;i<s.size();i++){
           int idx = s[i] - 'a';

if (arr[idx] == -1) {
    
    arr[idx] = i;
} else {
    
    int current_gap = i - arr[idx] - 1;
    max_gap = max(max_gap, current_gap);
}
       }
       if(max_gap==INT_MIN)return -1;
       return max_gap;
    }
};