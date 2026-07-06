class Solution {
  public:
    vector<int> printPat(int n) {
        // write code here
        vector<int>arr;
        for (int i = n; i >= 1; i--) {          // Number of repetitions
        for (int j = n; j >= 1; j--) {      // Numbers: 3, 2, 1
            for (int k = 1; k <= i; k++) {  // Repeat each number i times
                arr.push_back(j);
            }
        }
        arr.push_back(-1);
    }
    return arr;
    }
};