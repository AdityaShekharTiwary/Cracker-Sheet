int ma = 0;
int largetSum(Node* root) {
	if (!root) return 0;
	int left = largetSum(root->left);
	int right = largetSum(root->right);
	ma = max(ma, left + right + root->data);
	return left + right + root->data;
}