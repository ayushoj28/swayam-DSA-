/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int getCount(Node* head) {
        // Code here
        Node *curr=head;
        int count=0;
        
        while(curr){
            count++;
            curr=curr->next;
        }
        return count;
    }
};
