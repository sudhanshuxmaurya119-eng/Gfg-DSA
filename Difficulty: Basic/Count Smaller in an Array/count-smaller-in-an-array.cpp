class Solution {
  public:
    int countOfElements(int x, vector<int> &arr) {
        // code here
        int c=0;
        for(int i:arr){
            if(i<=x) c++;
        }
        return c;
    }
};