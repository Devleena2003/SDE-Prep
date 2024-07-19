int countNodesinLoop(struct Node *head)
{
    // Code here
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (fast == slow)
        {
            Node *meet = slow;
            slow = slow->next;
            int count = 1;
            while (slow != meet)
            {
                slow = slow->next;
                count++;
            }
            return count;
        }
    }
    return 0;
}