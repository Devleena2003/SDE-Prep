bool isSymmetric(struct Node *root)
{
    // Code here
    if (root == NULL)
        return true;
    return ismirror(root->left, root->right);
}

bool ismirror(Node *left, Node *right)
{
    if (!left && !right)
        return true;
    if (!left && right)
        return false;
    if (left && !right)
        return false;
    return (left->data == right->data) && ismirror(left->left, right->right) && ismirror(left->right, right->left);
}