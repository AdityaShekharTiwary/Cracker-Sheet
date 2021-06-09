map<string, int>m;
string dublicate(Node* root, unordered_map<string, int>&m) {
	if (root == NULL)
		return "$";
	if (!root->left && !root->right) {
		string s = to_string(root->data);
		return s;
	}
	string s ;
	s = s + to_string(root->data);
	s = s + dublicate(root->left, m);
	s = s + dublicate( root->right, m);
	m[s]++;
	return s;
}
bool dupSub(Node *root)
{
	if (root == NULL)
		return false;
	unordered_map<string, int>m;
	dublicate(root, m);
	for (auto i : m) {
		if (i.second > 1)
			return true;
	}
	return false;
}