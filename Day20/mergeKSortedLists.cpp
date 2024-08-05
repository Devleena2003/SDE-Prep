class Solution
{
public:
    ListNode *mergeTwoSorted(ListNode *a, ListNode *b)
    {
        if (a == NULL)
            return b;
        if (b == NULL)
            return a;
        if (a->val <= b->val)
        {
            a->next = mergeTwoSorted(a->next, b);
            return a;
        }
        else
        {
            b->next = mergeTwoSorted(a, b->next);
            return b;
        }
    }
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        if (lists.empty())
            return NULL;

        while (lists.size() > 1)
        {
            vector<ListNode *> newLists;

            for (size_t i = 0; i < lists.size(); i += 2)
            {
                if (i + 1 < lists.size())
                {
                    newLists.push_back(mergeTwoSorted(lists[i], lists[i + 1]));
                }
                else
                {
                    newLists.push_back(lists[i]);
                }
            }

            lists = newLists;
        }

        return lists[0];
    }
};