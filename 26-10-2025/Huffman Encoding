class Node{
    public :
    int data;
    Node* left;
    Node* right;
    
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

class Compare {
    public :
    bool operator()(Node* a, Node* b) {
        return a->data > b->data;
    }
};

void solve(Node* root, string s, vector<string>&ans){
    if(!root) return;
    if(!root->left && !root->right){
        ans.push_back(s);
        return;
    }
    solve(root->left, s+'0', ans);
    solve(root->right, s+'1', ans);
}

class Solution {
  public:
    vector<string> huffmanCodes(string S, vector<int> f, int N) {
       priority_queue<Node*, vector<Node*>, Compare> minHeap;
        
        for(auto v : f){
            minHeap.push(new Node(v));
        }
        
        while(minHeap.size() > 1){
            Node* left = minHeap.top();
            minHeap.pop();
            Node* right = minHeap.top();
            minHeap.pop();
            
            Node* nod = new Node(left->data + right->data);
            nod->left = left;
            nod->right = right;
            minHeap.push(nod);
        }
        
        Node*root = minHeap.top();
        vector<string>ans;
        string s;
        solve(root,s,ans);
        return ans;
    }
};
