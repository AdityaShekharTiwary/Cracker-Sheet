
void backtrack(Node* root, vector<int> &path, int k) {
	if (!root) return;
	path.push_back(root->data);
	backtrack(root->left, path, k);
	backtrack(root->right, path, k);

	int sum = 0;
	for (int i = path.size() - 1; i >= 0; i--) {
		sum += path[i];
		if (sum == k) {
			for (int j = i; j < path.size(); j++) {
				cout << path[i] << " ";
			}
			cout << endl;
		}
	}
	path.pop_back();
}

int sumPath(Node* root, int k) {
	vector<int> path;
	backtrack(root, k, path);
}