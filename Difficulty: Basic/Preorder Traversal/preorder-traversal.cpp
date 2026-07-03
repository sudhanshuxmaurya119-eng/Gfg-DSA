/*
class Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
  void pre(vector<int> &arr,Node*root){
      if(root!=NULL){
      arr.push_back(root->data);
      pre(arr,root->left);
      pre(arr,root->right);}
  }
    vector<int> preOrder(Node* root) {
        // code here
        vector<int> arr;
        pre(arr,root);
        return arr;
        
    }
};