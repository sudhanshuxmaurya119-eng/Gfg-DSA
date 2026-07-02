class Solution {
  public:
    int factorial(int n) {
        // code here
        if(n==0) return 1;
        else return factorial(n-1)*n;
    }
};