class Solution {
  public:
    bool binarySearch(vector<int>& arr, int k) {
        // code here
        int l=0;
        int h=arr.size()-1;
        while(l<=h){
            int m=l+(h-l)/2;
            if(arr[m]==k) return true;
            else if(arr[m]>k) h=m-1;
            else l=m+1;
        }
        return false;
        
    }
};