Node* lca(Node* root, int a, int b) {
    if (!root) return NULL;
    if (root->data == a || root->data == b) return root;
    Node* left = lca(root->left, a, b);
    Node* right = lca(root->right, a, b);
    if (left && right) return root;
    if (left) return left;
    else return right;
}

int findDis(Node* root, int k , int dis) {
    if (!root) return -1;
    if (root->data == k) return dis;

    int left = findDis(root->left, k, dis + 1);
    if (left != -1) return left;
    else return findDis(root->right, k, dis + 1);

}


int findDist(Node* root, int a, int b) {
    Node* LCA = lca(root, a, b);

    int d1 = findDis(LCA, a, 0);
    int d2 = findDis(LCA, b, 0);

    return d1 + d2;
}