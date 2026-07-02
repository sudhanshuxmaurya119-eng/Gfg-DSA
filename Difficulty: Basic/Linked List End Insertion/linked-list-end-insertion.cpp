/*
class Node {
  public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        Node * tmp = new Node(x);
        // Code here
        if(head==NULL) return tmp;
        Node * temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=tmp;
        return head;
    }
};