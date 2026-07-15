class Solution {
  public:
    int convertFive(int n) {
        // code here
        if(n==0) return 5;
        int rev=0;
        while(n>0){
            int r=n%10;
          if(r==0)  rev=rev*10+5;
          else rev=rev*10+r;
            n/=10;
        }
      //  return rev;
        int ran=0;
        while(rev>0){
            int r=rev%10;
            ran=ran*10+r;
            rev/=10;
        }
        return ran;
    }
};