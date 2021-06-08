class Solution
{
public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
        vector<int> ans;
        queue<Node*> q;
        if (!root) return ans;
        q.push(root);
        while (!q.empty()) {
            Node* temp;
            int sz = q.size();
            while (sz--) {
                temp = q.front();
                q.pop();
                if (temp->left) q.push(temp->left);
                if (temp->right) q.push(temp->right);
            }
            ans.push_back(temp->data);
        }
        return ans;
    }
};
