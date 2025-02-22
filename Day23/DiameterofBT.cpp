int helper(TreeNode *root, int &diameter)
{
    if (root == NULL)
        return 0;

    int lh = helper(root->left, diameter);
    int rh = helper(root->right, diameter);
    diameter = max(diameter, lh + rh);
    return 1 + max(lh, rh);
}
int diameterOfBinaryTree(TreeNode *root)
{
    int diameter = 0;
    helper(root, diameter);
    return diameter;
}
}
;