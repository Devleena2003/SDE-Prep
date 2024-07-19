Node *add2Numbers(Node *l1, Node *l2)
{
    Node *curr = new Node(0);
    Node *dummy = curr;
    int sum, carry = 0;

    while (l1 != NULL && l2 != NULL && carry == 1)
    {

        if (l1 != NULL)
        {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2 != NULL)
        {
            sum += l2->val;
            l2 = l2->next;
        }
        sum += carry;
        carry = sum / 10;
        Node *res = new Node(sum % 10);
        curr->next = res;
        curr = curr->next;
    }

    return dummy->next;
}