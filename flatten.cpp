// Time Complexity: O(n) 
// space Complexity: O(d) d = max depth of child chains 

// Recursive
class Solution {
public:
    Node* flatten(Node* head) {
      Node* currentNode = head;

      while(currentNode != NULL){
        if(currentNode->child != NULL){
            // find child list
            Node* next = currentNode->next;
            currentNode->next = flatten(currentNode->child);
            currentNode->next->prev = currentNode;
            currentNode->child = NULL;

            // find tail
            while(currentNode->next != NULL){
                currentNode = currentNode->next;
            }

            // connect to tail
            if(next != NULL){
               currentNode->next = next;
               next->prev = currentNode;
            }
        }
        currentNode = currentNode->next;
      }
      return head;
    }
};




// Time Complexity: O(n) 
// space Complexity: O(d) Stack stores deferred  next pointers
// Using stack additionally 
class Solution {
public:
    Node* flatten(Node* head) {
      stack<Node*> st;
      Node* currentNode = head;

      while(currentNode != NULL){
        if(currentNode->child){
            if(currentNode->next) st.push(currentNode->next);
            currentNode->next = currentNode->child;
            currentNode->next->prev = currentNode;
            currentNode->child = NULL;
        }

        if(currentNode->next==NULL && !st.empty()){
            currentNode->next = st.top(); st.pop();
            currentNode->next->prev = currentNode;
        }

        currentNode = currentNode->next;
      }
      return head;
    }
};
