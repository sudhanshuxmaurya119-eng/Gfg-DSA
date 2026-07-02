class Solution {
  public:
    int firstOccurence(string& h, string& n) {
        // code here
         size_t pos=h.find(n);
       if(pos!=string::npos){
        return pos;
       }
       return -1;
    }
};