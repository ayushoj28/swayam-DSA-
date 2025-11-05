/*
class TrieNode {
public:
    TrieNode* children[26];
    bool isEndOfWord;

    TrieNode() {
        for (int i = 0; i < 26; i++)
            children[i] = nullptr;
        isEndOfWord = false;
    }
};
*/
class Solution {
public:
    int wordCount(TrieNode* root) {
        // code here
        queue<TrieNode*> q;
        int ans = 0;
        q.push(root);
        while(!q.empty()) {
            TrieNode* curr = q.front();q.pop();
            if(curr->isLeaf)    ans++;
            for(int i = 0; i < 26; i++) {
                if(curr->children[i] != NULL) {
                    q.push(curr->children[i]);
                }
            }
        }
        return ans;
    }
};
