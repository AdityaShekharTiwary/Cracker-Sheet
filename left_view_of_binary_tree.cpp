vector<int> leftView(Node *root)
{
    vector<int> ans;
    queue<Node*> q;
    if (!root) return ans;
    q.push(root);
    while (!q.empty()) {
        ans.push_back(q.front()->data);
        int sz = q.size();
        while (sz--) {
            Node* temp = q.front();
            q.pop();
            if (temp->left) q.push(temp->left);
            if (temp->right) q.push(temp->right);
        }
    }
    return ans;
}
