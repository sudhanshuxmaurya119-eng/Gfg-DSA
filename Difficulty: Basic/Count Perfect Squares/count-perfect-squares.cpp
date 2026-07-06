class Solution {
  public:
    int countSquares(int n) {
        // code here
        int c=0;
        int x=sqrt(n);
        for(int i=1;i<=x;i++){
            if(i*i<n){
                c++;
            }
        }
        return c;
    }
};