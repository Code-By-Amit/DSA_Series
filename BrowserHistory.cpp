class Node{
    public:
    string url;
    Node* prev;
    Node* next;

    Node(string url){
        this->url = url;
        prev = NULL;
        next = NULL;
    }
};

class BrowserHistory {
public:
    Node* currentNode;
    BrowserHistory(string homepage) {
        Node* newNode = new Node(homepage);
        currentNode = newNode;
    }
    
    void visit(string url) {
         // Delete forward history
         Node* temp = currentNode->next;
         while(temp != NULL){
            Node* nodeToDelete = temp; // delete karne ke liye current node save
            temp = temp->next;   // next node pe move
            delete nodeToDelete;   // current node delete
         }

        // Add new Node
        Node* newNode = new Node(url);
        newNode->prev = currentNode;
        currentNode->next = newNode;
        currentNode = currentNode->next;
    }
    
    string back(int steps) {
        while(steps > 0){
            if(currentNode->prev){
                currentNode = currentNode->prev;
                steps--;
            }else break;
        }
        return currentNode->url;
    }
    
    string forward(int steps) {
          while(steps > 0){
            if(currentNode->next){
                currentNode = currentNode->next;
                steps--;
            }else break;
        }
        return currentNode->url;
    }
};
