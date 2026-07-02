class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        // code here
        int x=b*b-4*a*c;
        if(x<0) return {-1};
        else {
            double r1=(-b+sqrt(x))/(2.0*a);
            double r2=(-b-sqrt(x))/(2.0*a);
            int x1 = floor(r1);
        int x2 = floor(r2);
        
        // Return in decreasing order (maximum first)
        return {max(x1, x2), min(x1, x2)};
            
        }
    }
};