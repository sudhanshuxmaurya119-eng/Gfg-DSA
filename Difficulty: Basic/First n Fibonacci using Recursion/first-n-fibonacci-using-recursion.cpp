class Solution {
  public:
    // Function to return list containing first n fibonacci numbers.
    vector<int> fibonacciNumbers(int n) {
        // code here
        vector<int>arr;
        int a=0;
        int b=1;
        for(int i=1;i<=n;i++){
            arr.push_back(a);
            int sum=a+b;
            a=b;
            b=sum;
        }
        return arr;
    }
};