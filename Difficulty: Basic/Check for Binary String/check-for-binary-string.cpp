class Solution {
  public:
    bool isBinary(string& s) {
        // code here
        for(char ch:s){
            if(ch!='0' && ch!='1') return false;
        }
        return true;
        
    }
};