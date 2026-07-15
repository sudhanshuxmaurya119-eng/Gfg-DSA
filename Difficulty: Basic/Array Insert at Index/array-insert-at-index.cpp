class Solution {
  public:
    void insertAtIndex(vector<int> &arr, int index, int val) {
        // code here
       // int k=0;
       arr.push_back(0);
        int n=arr.size();
        for(int i=n;i>index;i--){
            arr[i]=arr[i-1];
        }
        arr[index]=val;
    }
};
