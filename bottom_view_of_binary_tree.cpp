vector <int> bottomView(Node *root)
{
    vector<int> ans;
    map<int, int> mp;
    queue<pair<Node*, int> > q;
    if (!root) return ans;
    q.push({root, 0});
    while (!q.empty()) {
        Node* temp = q.front().first;
        int h = q.front().second;
        q.pop();
        mp[h] = temp->data;
        if (temp->left) q.push({temp->left, h - 1});
        if (temp->right) q.push({temp->right, h + 1});
    }
    for (auto x : mp) ans.push_back(x.second);
    return ans;
}