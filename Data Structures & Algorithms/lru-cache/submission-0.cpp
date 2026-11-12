class LRUCache {
public:
    struct Node {
        int key, val;
        Node *prev, *next;
        Node(int k, int v) : key(k), val(v), prev(NULL), next(NULL) {}
    };

    int cap;
    unordered_map<int, Node*> mp;
    Node *head, *tail;

    LRUCache(int capacity) {
        cap = capacity;
        head = new Node(-1, -1);
        tail = new Node(-1, -1);
        head->next = tail;
        tail->prev = head;
    }

    void addNode(Node *node) {
        Node *temp = head->next;
        head->next = node;
        node->prev = head;
        node->next = temp;
        temp->prev = node;
    }

    void deleteNode(Node *node) {
        Node *pre = node->prev;
        Node *nxt = node->next;
        pre->next = nxt;
        nxt->prev = pre;
    }

    int get(int key) {
        if (mp.find(key) == mp.end())
            return -1;

        Node *node = mp[key];
        int res = node->val;

        deleteNode(node);
        addNode(node);

        return res;
    }

    void put(int key, int value) {
        if (mp.find(key) != mp.end()) {
            Node *node = mp[key];
            deleteNode(node);
            mp.erase(key);
            delete node;
        }

        if (mp.size() == cap) {
            Node *lru = tail->prev;
            deleteNode(lru);
            mp.erase(lru->key);
            delete lru;
        }

        Node *node = new Node(key, value);
        addNode(node);
        mp[key] = node;
    }
};
