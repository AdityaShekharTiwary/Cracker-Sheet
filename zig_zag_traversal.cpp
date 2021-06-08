vector <int> zigZagTraversal(Node* root)
{
	vector<int> ans;
	queue<Node*> q;
	q.push(root);
	int f = 1;
	while (!q.empty()) {
		vector<int> dummy;
		int sz = q.size();
		while (sz--) {
			Node* temp = q.front();
			dummy.push_back(temp->data);
			q.pop();
			if (temp->left) q.push(temp->left);
			if (temp->right) q.push(temp->right);
		}
		if (f % 2 == 0) reverse(dummy.begin(), dummy.end());
		for (int x : dummy) ans.push_back(x);
		f++;
	}
	return ans;
}