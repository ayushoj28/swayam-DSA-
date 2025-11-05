/*Complete the function below
Node is as follows:
struct trie_node
{
    int value; // non zero if leaf
    trie_node_t *children[ALPHABET_SIZE];
};*/
class Solution {
  public:
    bool isEmpty(trie_node_t *root) {
        for (int i = 0; i < ALPHABET_SIZE; i++)
            if (root->children[i])
                return false;
        return true;
    }

    trie_node_t* deleteKeyUtil(trie_node_t *root, char key[], int depth, int len) {
        if (!root)
        return nullptr;
        if (depth == len) {
            if (root->value != 0)
                root->value = 0;
                
            if (isEmpty(root)) {
                delete root;
                root = nullptr;
            }

            return root;
        }
        int index = key[depth] - 'a';
        root->children[index] = deleteKeyUtil(root->children[index], key, depth + 1, len);
        if (isEmpty(root) && root->value == 0) {
            delete root;
            root = nullptr;
        }

        return root;
    }

    void deleteKey(trie_node_t *root, char key[]) {
        int len = strlen(key);
        deleteKeyUtil(root, key, 0, len);
    }
};
