class Solution {
  public:
  int gcd(int a,int b){
      if(b==0) return a;
       return gcd(b,a%b);
  }
    vector<int> lcmAndGcd(int a, int b) {
        // code here
        int l=a*b/gcd(a,b);
        int x=gcd(a,b);
        return {l,x};
    }
};