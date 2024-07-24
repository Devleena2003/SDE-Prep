void helper(Node *root, int level, vector<int> &ans)
{
    if (!root)
        return;
    if (level == ans.size())
        ans.push_back(root->data);
    helper(root->left, level + 1, ans);
    helper(root->right, level + 1, ans);
}
vector<int> leftView(Node *root)
{
    // Your code here
    vector<int> ans;
    if (!root)
        return ans;
    helper(root, 0, ans);
    return ans;
}