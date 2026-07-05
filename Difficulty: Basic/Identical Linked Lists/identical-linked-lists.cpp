/* Strucutre of a Node in linked list
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */
class Solution {\
  public:
    bool areIdentical(Node *head1, Node *head2) {
        // code here
        Node* temp1=head1;
        Node *temp2=head2;
        if(temp1->next==NULL && temp2->next!=NULL) return false;
        if(temp2->next==NULL && temp1->next!=NULL) return false;
        if(temp1->next==NULL && temp2->next==NULL &&temp1->data!=temp2->data) return false;
        while(temp1->next!=NULL || temp2->next!=NULL){
            if(temp1->data!=temp2->data) return false;
            temp2=temp2->next;
            temp1=temp1->next;
        }
        return true;
        
    }
};