void helper(Node *root, int &K, int &ans)
{
    if (root == NULL)
        return;
    helper(root->right, K, ans);
    K--;
    if (K == 0)
        ans = root->data;
    helper(root->left, K, ans);
}
int kthLargest(Node *root, int K)
{
    // Your code here
    int ans = -1;
    helper(root, K, ans);
    return ans;
}

// reverse inorder method