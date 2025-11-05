class TrieNode
{
    public:
    TrieNode *child[26];
    bool isEndofWord;

    TrieNode(){
        isEndofWord = false;
        for(int i=0;i<26;i++){
            child[i]=NULL;
        }
    }
};

class Trie
{
    TrieNode *root;
    public:

    Trie()
    {
        root = new TrieNode();
    };
    
       // insert
    void insert(string word)
    {
        TrieNode *node = root;
        for( char c : word)
        {
            int index = c-'a';
            if(node->child[index]==NULL){
                node->child[index] = new TrieNode();
                node=node->child[index];
            }
            else
            {
                node=node->child[index];                
            }
        }
        node->isEndofWord = true;

    }
    // search
    bool search(string word)
    {
        TrieNode *node = root;
        for( char c : word)
        {
            int index = c-'a';
            if(node->child[index]==NULL){
                return 0;
            }
            node=node->child[index];
        }
        return node->isEndofWord;
    }
    
    bool startsWith(string prefix) {
        TrieNode* node = root;
        for (char c : prefix) {
            int index = c - 'a';
            if (node->child[index] == nullptr) return false;
            node = node->child[index];
        }
        return true;
    }
};


/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
