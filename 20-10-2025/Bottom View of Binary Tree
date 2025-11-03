// Function to return a list containing the bottom view of the given tree.

class Solution
{
public:
    // To find leftmost and rightmost horizontal distances
    void find(Node *root, int pos, int &l, int &r)
    {
        if (!root) return;

        l = min(pos, l);
        r = max(pos, r);

        find(root->left, pos - 1, l, r);
        find(root->right, pos + 1, l, r);
    }

    // Modified for Bottom View: always update if depth is >=
    void Bview(Node *root, int pos, vector<int> &ans, vector<int> &level, int depth)
    {
        if (!root) return;

        // For bottom view, update when depth is greater or equal
        if (depth >= level[pos])
        {
            ans[pos] = root->data;
            level[pos] = depth;
        }

        Bview(root->left, pos - 1, ans, level, depth + 1);
        Bview(root->right, pos + 1, ans, level, depth + 1);
    }

    vector<int> bottomView(Node *root)
    {
        int l = 0, r = 0;
        find(root, 0, l, r);

        int width = r - l + 1;
        vector<int> ans(width);
        vector<int> level(width, -1);  // use -1 to allow depth = 0 update

        Bview(root, -l, ans, level, 0);

        return ans;
    }
};
