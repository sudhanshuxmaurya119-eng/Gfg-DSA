class Solution {
  public:
    double findMedian(vector<int> &arr) {
        // code here.
        double x;
        sort(arr.begin(),arr.end());
        int n=arr.size();
        if(n%2!=0){
            x=arr[((n+1)/2)-1];
        }
        else{
            int mid=n/2;
            x=(arr[mid-1]+arr[mid])/2.0;
        }
        return x;
    }
};