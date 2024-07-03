Node *swapkthnode(Node *head, int num, int K)
{
    // Your Code here
    Node *first = head, *sec = head;
    Node *knode = NULL;
    Node *pre1 = NULL, *pre2 = NULL;

    // Find the k-th Node from the Beginning:

    for (int i = 1; i < K; i++)
    {
        if (first->next)
        {
            pre1 = first;
            first = first->next;
        }
    }
    knode = first;
    // Find the k-th Node from the end:
    while (first && first->next)
    {
        pre2 = sec;
        sec = sec->next;
        first = first->next;
    }

    // linking the nodes
    if (pre1 != NULL)
    {
        pre1->next = sec;
    }
    if (pre2 != NULL)
    {
        pre2->next = knode;
    }

    // swapping the nodes
    Node *temp = knode->next;
    knode->next = sec->next;
    sec->next = temp;
    // handling edge cases

    if (K == 1)
        head = sec;

    if (num == K)
        head = knode;

    return head;
}