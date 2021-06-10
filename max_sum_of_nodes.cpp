map<Node*, int> dp;

int maxSum(Node* root) {
	if (!root) return 0;
	if (dp[root]) return dp[root]; //Memoization

	int inc = root->data;
	if (root->left) {
		inc += root->left->left;
		inc += root->left->right;
	}
	if (root->right) {
		inc += root->right->left;
		inc += root->right->right;
	}

	int exc = maxSum(root->left) + maxSum(root->right);
	dp[root] = max(ecx, inc);
	return dp[root];
}