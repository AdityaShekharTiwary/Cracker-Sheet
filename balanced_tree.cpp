bool f = true;

int solve(Node* root) {
    if (!root) return 0;
    int left = solve(root->left);
    int right = solve(root->right);
    if (abs(left - right) > 1) f = false;
    return max(left, right) + 1;
}

bool isBalanced(Node *root)
{
    f = true;
    solve(root);
    return f;
}
