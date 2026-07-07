/* Strucutre of a link list node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node * insertInMiddle(Node *head, int x) {
        // Create the new node to be inserted
        Node* newNode = new Node(x);
        
        // Base case: If the list is empty, the new node is the head
        if (head == nullptr) {
            return newNode;
        }
        
        Node* slow = head;
        Node* fast = head->next;
        
        // Move fast by 2 steps and slow by 1 step
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        // Insert the new node after the 'slow' pointer
        newNode->next = slow->next;
        slow->next = newNode;
        
        return head;
    }
};