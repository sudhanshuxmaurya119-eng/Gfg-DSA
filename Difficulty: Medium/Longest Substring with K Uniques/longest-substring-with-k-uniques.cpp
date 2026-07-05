class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        unordered_map<char ,int>f;
        int low=0;
        int high=0;
        int res=INT_MIN;
        while(high<s.size()){
            f[s[high]]++;
            while(f.size()>k){
                f[s[low]]--;
                if(f[s[low]]==0){
                    f.erase(s[low]);
                }
                low++;
            }
            if(f.size()==k){
                int len=high-low+1;
                res=max(res,len);
            }
            high++;
        }
        if(res==INT_MIN) return -1;
        return res;
        
    }
};