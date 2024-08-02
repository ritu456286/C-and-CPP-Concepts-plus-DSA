class Node{
    public:
    Node *next;
    int data;


    Node(int data){
        this->data = data;
        next = NULL;
    }
};
Node * takeinput(){
    // time complexity of this is O(n)
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while(data != -1){
        // Node n(data); //STATICALLY CREATED OBJECTS GET DEALLOCATED AFTER EACH ITERATION IS OVER
        Node * newNode = new Node(data);
        if(head == NULL){
            head = newNode; 
            tail = newNode;
        }      
        else{
            // tail = newNode;
            
            tail -> next = newNode;
            tail = tail -> next;
        }
        cin >> data;
    }
    return head;
}
void print(Node *head){
    //printing linked list
    // Node *temp = head;
    while(head != NULL){
        cout << head -> data << " ";
        head = head -> next;
    }
    cout << endl;
    // while(head != NULL){
    //     cout << head -> data << " ";
    //     head = head -> next;
    // }
    
}
Node * input(){
    // time complexity of this is O(n^2)
    int data;
    cin >> data;
    Node *head = NULL;
    while(data != -1){
        // Node n(data); //STATICALLY CREATED OBJECTS GET DEALLOCATED AFTER EACH ITERATION IS OVER
        Node * newNode = new Node(data);
        if(head == NULL){
            head = newNode; 
        }      
        else{
            Node * temp = head;
            while(temp -> next != NULL){
                temp = temp -> next;
            }
            temp -> next = newNode;
        }
        cin >> data;
    }
    return head;
}