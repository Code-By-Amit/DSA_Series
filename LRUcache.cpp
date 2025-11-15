class Node{

    public:
    int key;
    int val;
    Node* next;
    Node* prev;
    Node(int k, int v){
        key = k;
        val = v;
        next = prev = NULL;
    }
};

class LRUCache {
public:
      int limit;
    Node* head = new Node(-1,-1);
    Node* tail = new Node(-1,-1);
    unordered_map<int,Node*> map;

    void addNode(Node* newNode){
        Node* oldNextNode = head->next;

        head->next = newNode;
        newNode->prev = head;

        newNode->next = oldNextNode;
        oldNextNode->prev = newNode;
    }

    void deleteNode(Node* oldNode){
        Node* oldPrev = oldNode->prev;
        Node* oldNext = oldNode->next;

        oldPrev->next = oldNext;
        oldNext->prev = oldPrev;
    }

    LRUCache(int capacity) {
        limit = capacity;
        head->next = tail;
        tail->prev = head; 
    }
    
    int get(int key) {
        if(map.find(key) == map.end()) return -1;
        int ans = map[key]->val;

        Node* ansNode = map[key];

        map.erase(key);
        deleteNode(ansNode);

        addNode(ansNode);
        map[key] = ansNode;
        return ans;
    }
    
    void put(int key, int value) {
        if(map.find(key) != map.end()){
            Node* nodeToDelete = map[key];
            map.erase(key);
            deleteNode(nodeToDelete);
        }

        if(map.size() == limit){
            map.erase(tail->prev->val);
            deleteNode(tail->prev);
        }

        Node* newNode = new Node(key, value);
        addNode(newNode);
        map[key] = newNode;
    }
};
