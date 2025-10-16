class Solution {
public:
    Node* copyRandomList(Node* head) {
      if(head == NULL) return head;

      Node* newHead = new Node(head->val);
      Node* currentNode = newHead;
      Node* oldTemp = head;

      unordered_map<Node*, Node*> map;

      map[oldTemp] = currentNode;
      oldTemp = oldTemp->next;

      while(oldTemp != NULL){
        Node* newNode = new Node(oldTemp->val);
        map[oldTemp] = newNode;
        currentNode->next = newNode;
        currentNode = currentNode->next;
        oldTemp = oldTemp->next;
      }

      oldTemp = head;
      currentNode = newHead;

      while(oldTemp != NULL){
        currentNode->random = map[oldTemp->random];
        currentNode = currentNode->next;
        oldTemp = oldTemp->next;
      } 

      return newHead;
    }
};
