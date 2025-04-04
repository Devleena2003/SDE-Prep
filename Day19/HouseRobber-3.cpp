unordered_map<Node * root, int> mp;
int solve(Node *root)
{
    if (!root)
        return 0;
    if (mp.count(root)) // if root is already in the map
        return mp[root];
    int l = solve(root->left);
    int r = solve(root->right);
    int ll, lr, rl, rr = 0;
    if (root->left)
    {
        ll = solve(root->left->left);
        lr = solve(root->left->right);
    }
    if (root->right)
    {
        rl = solve(root->right->left);
        rr = solve(root->right->right);
    }
    int val = root->val;
    int lmx = ll + lr;
    int rmx = rl + rr;
    int t1 = val + lmx + rmx;
    int t2 = l + max(r, rmx);

    int t3 = r + max(l, lmx);

    mp[root] = max(t1, max(t2, t3));
    return mp[root];
}