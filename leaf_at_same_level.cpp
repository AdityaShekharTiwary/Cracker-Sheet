class Solution {
public:
    /*You are required to complete this method*/

    int ans;

    void solve(Node* root, int &curr_height, int &h) {
        if (!root) return;
        if (ans == 0) return;
        if (!root->left && !root->right) {
            if (curr_height == -1) {
                curr_height = h;
            } else {
                if (curr_height != h) ans = 0;
            }
            return;
        }
        solve(root->left, curr_height, h + 1);
        solve(root->right, curr_height, h + 1);
    }

    bool check(Node *root)
    {
        int ans = 1;
        int curr_height = -1;
        int h = 0;
        solve(root, curr_height, h);
        return ans;
    }
};

// 2nd approach

int max_depth(Node* root) {
    if (!root) return 0;
    return max(max_depth(root->left), max_depth(root->right)) + 1;
}

int min_depth(Node* root) {
    if (!root) return INT_MAX;
    if (!root->left && !root->right) return 1;
    return min(min_depth(root->left), min_depth(root->right)) + 1;
}

bool check(Node *root)
{
    return max_depth(root) == min_depth(root);
}