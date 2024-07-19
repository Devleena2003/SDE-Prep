Node *oddEvenList(Node *head)
{
    Node *odd = head;
    Node *even = head->next;
    Node *even_start = head->next;

    while (odd->next != NULL && even->next != NULL)
    {
        odd->next = even->next;
        even->next = odd->next->next;
        odd = odd->next;
        even = even->next;
    }

    odd->next = even_start;

    retun head;
}