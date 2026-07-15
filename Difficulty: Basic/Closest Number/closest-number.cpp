class Solution {
  public:
    int closestNumber(int n, int m) {
        // code here
        int q=n/m;
        int q1=q*m;
        int q2=((n*m)>0)?(q+1)*m:(q-1)*m;
        if (abs(n - q1) < abs(n - q2)) {
            return q1;
        } 
        else if (abs(n - q2) < abs(n - q1)) {
            return q2;
        } 
        else {
            return (abs(q1) > abs(q2)) ? q1 : q2;
        }
    }
};