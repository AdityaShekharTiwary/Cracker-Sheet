class Solution
{
public:

    int f = 1;

    int solve(Node* root) {
        if (!root) return 0;
        if (!root->left && !root->right) return root->data;
        if (f == 0) return 0;
        int left = solve(root->left);
        int right = solve(root->right);
        if (left + right != root->data) f = 0;
        return left + right + root->data;
    }

    bool isSumTree(Node* root)
    {
        int f = 1;
        solve(root);
        return f;
    }
};