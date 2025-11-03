// Structure of node
/*class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution {
  public:
    int Count(Node *root) {
        if (!root) return 0;
        return 1 + Count(root->left) + Count(root->right);
    }
  
    bool CBT(Node *root, int index, int total_nodes) {
        if (!root) return true;
        if (index >= total_nodes) return false;
        
        return CBT(root->left, 2 * index + 1, total_nodes) &&
               CBT(root->right, 2 * index + 2, total_nodes);
    }
  
    bool MaxHeap(Node *root) {
        if (root->left) {
            if (root->data < root->left->data)
                return false;
            if (!MaxHeap(root->left))
                return false;
        }
        
        if (root->right) {
            if (root->data < root->right->data)
                return false;
            if (!MaxHeap(root->right))
                return false;
        }
        
        return true;
    }
  
    bool isHeap(Node* tree) {
        int num = Count(tree);
        
        // Must be complete binary tree
        if (!CBT(tree, 0, num))
            return false;
        
        // Must satisfy max heap property
        return MaxHeap(tree);
    }
};
