class Node
{
public:
    int key;
    int val;
    Node *next;
    Node *prev;
    Node(int key, int val)
    {
        this->val = val;
        this->key = key;
        next = NULL;
        prev = NULL;
    }
};
class LRUCache
{
public:
    unordered_map<int, Node *> mp;
    Node *head = new Node(-1, -1);
    Node *tail = new Node(-1, -1);
    int size;
    LRUCache(int capacity)
    {
        size = capacity;
        head->next = tail;
        tail->prev = head;
    }

    void deleteNode(Node *p)
    {
        Node *pre = p->prev;
        Node *nex = p->next;
        pre->next = nex;
        nex->prev = pre;
    }
    void addNode(Node *newnode)
    {
        Node *temp = head->next;
        head->next = newnode;
        newnode->prev = head;
        newnode->next = temp;
        temp->prev = newnode;
    }
    int get(int key)
    {
        if (mp.find(key) == mp.end())
            return -1;
        Node *p = mp[key];
        deleteNode(p);
        addNode(p);
        mp[key] = head->next;
        return head->next->val;
    }

    void put(int key, int value)
    {
        if (mp.find(key) != mp.end())
        {
            Node *p = mp[key];
            deleteNode(p);
            // update the value
            p->val = value;
            addNode(p);
            mp[key] = head->next;
        }
        else
        {
            if (mp.size() == size)
            {
                Node *prev = tail->prev;
                deleteNode(prev);
                Node *l = new Node(key, value);
                addNode(l);
                mp.erase(prev->key);
                mp[key] = head->next;
            }
            else
            {
                Node *l = new Node(key, value);
                addNode(l);

                mp[key] = head->next;
            }
        }
    }
};
