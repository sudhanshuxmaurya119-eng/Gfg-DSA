/*
class Node {
  public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
*/
class Solution {
  public:
    vector<int> printList(Node *head) {
        // code here
        vector<int>arr;
        Node* tmp=head;
        while(tmp!=NULL){
            arr.push_back(tmp->data);
            tmp=tmp->next;
        }
        return arr;
    }
};