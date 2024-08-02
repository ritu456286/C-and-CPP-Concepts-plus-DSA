// #include <iostream>
// using namespace std;
// template <typename T>
// class Node{
//     T data;
//     Node<T>* prev, *next;

//     Node(T data){
//         this->data = data;
//         this->next = NULL;
//         this->prev = NULL;

//     }


//     ~Node(){
//         delete next;
//     }

// };
// template <typename T>
// Node<T> *  takeInput(){
//     T data;
//     cout << "Enter head data: ";
//     cin >> data;
//     Node<T> * head = new Node<T>(data);
//     Node<T> * temp = head;
//     while (data != -1){
//         cout << "Enter new element: ";
//         cin >> data;
//         Node<T> * newNode = new Node<T>(data);
//         temp -> next = newNode;
//         newNode -> prev = temp;
//         temp = newNode;
//     }
//     return head;
// }

// template <typename T>
// void printDoublyLL(Node<T> * head){
    
//     while (head -> next != NULL){
//         cout << head -> data <<"-->";
//         head = head -> next;
//     }
//     return;
// }  


// int main(){
//     Node<int>* head = takeInput();
//     return 0;
// }


#include <iostream>
using namespace std;

template <typename T>
class Node {
    public:
    T data;
    Node<T>* prev;
    Node<T>* next;

    
    Node(T data) {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    // ~Node() {
    //     int val = this -> data;
    //     if(next != NULL){

    //         delete next;
    //         next = NULL;
        
    //     }

    //     cout << "Memory free for node with data " << val << endl;
    // }
};

template <typename T>
Node<T>* takeInput() {
    T data;
    cout << "Enter head data: ";
    cin >> data;
    Node<T>* head = new Node<T>(data);
    Node<T>* temp = head;
    while (data != -1) {
        cout << "Enter new element: ";
        cin >> data;
        if (data != -1) {
            Node<T>* newNode = new Node<T>(data);
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
        }
    }
    return head;
}

template <typename T>
void printDoublyLL(Node<T>* head) {
    while (head != NULL) {
        cout << head->data << " --> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

template <typename T>
int getLength(Node<T> * head){
    int len = 0;
    Node <T> * temp = head;
    while (temp != NULL){
        len ++;
        temp = temp -> next;
    }
    return len;
}
template<typename T>
void insertHead(Node<T>* &head, int data){
    Node<T>* newNode = new Node<T>(data);
    newNode -> next = head;
    head -> prev = newNode;
    head = newNode;
}

template<typename T>
Node<T> * insertTail(Node<T> * head, int data){
    Node<T> * temp = head;
    Node<T>* newNode = new Node<T>(data);
    while (temp -> next){
        temp = temp -> next;
    }
    temp -> next = newNode;
    newNode -> prev = temp;
    return head;
}   
template<typename T>
Node<T> * insertAtPos(Node<T>* head, int data, int pos){
    if (pos == 1){
        Node<T>* newNode = new Node<T>(data);
        newNode -> next = head;
        head -> prev = newNode;
        head = newNode;
        return head;
    }

    Node<T>* temp = head;
    Node<T>* newNode = new Node<T>(data);
    for(int i = 1; i < pos - 1; i++){
        if (temp == NULL){
            return head;
        }
        temp = temp -> next;
    }
    if (temp ->next != NULL){
        newNode -> next = temp -> next;
        newNode -> prev = temp;
        // temp -> next -> prev = newNode;
        temp -> next = newNode;
        newNode -> next -> prev = newNode;
        return head;

    }else{
        newNode -> prev = temp;
        temp -> next = newNode;
        return head;
    }
}
// template<typename T>
// Node<T> *deleteNode(Node<T> * head, int pos){
//     if (pos == 1){
//         // T ans = head -> data;
//         Node<T> * toDelete = head;
//         head = head -> next;
//         if(head != NULL){
//             head -> prev = NULL;
//         }
//         // head -> prev = NULL;
//         delete toDelete;
//         return head;
//     }
//     Node<T> * temp = head;
//     for(int i = 1; i < pos - 1; i++){
//         if(temp == NULL || temp -> next == NULL){
//             return head;
//         }
//         temp = temp -> next;

//     }
//     if (temp != NULL){

//         Node <T> * toDelete = temp -> next;
//         // T ans = toDelete-> data;
//         temp -> next = toDelete -> next;
//         if (toDelete -> next != NULL){

//             toDelete -> next -> prev = temp;
//         }
//         delete toDelete;
//     }
//     return head;
//     // }else{
//     //     Node <T> * toDelete = temp;
//     //     T ans = toDelete->data;
//     //     toDelete -> prev -> next = NULL;
//     //     delete toDelete;
//     //     return head;
//     // }

// }

template<typename T>
Node<T>* deleteNode(Node<T>* head, int pos) {
    if (pos == 1) {
        Node<T>* toDelete = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;

        }
        toDelete -> next = NULL;
        delete toDelete;
        return head;
    }

    Node<T>* temp = head;
    for (int i = 1; i < pos - 1; i++) {
        if (temp == NULL || temp->next == NULL) {
            return head;
        }
        temp = temp->next;
    }

    if (temp->next != NULL) {
        Node<T>* toDelete = temp->next;
        temp->next = toDelete->next;
        if (toDelete->next != NULL) {
            toDelete->next->prev = temp;
        }
        delete toDelete;
    }

    return head;
}

int main() {

    Node<int>* head = takeInput<int>();
    printDoublyLL(head);
    cout << getLength(head) << endl;

    insertHead(head, 122);
    printDoublyLL(head);
    cout << getLength(head) << endl;

    insertTail<int>(head, 133);
    printDoublyLL(head);
    cout << getLength(head) << endl;

    head = insertAtPos<int>(head, 450, 1);
    printDoublyLL(head);
    cout << getLength(head) << endl;


    //NOT WORKING
    // cout << "NODE DELETED :  " << deleteNode<int>(head, 1) << endl;
    head = deleteNode(head, 1); 
    printDoublyLL(head);
    cout << getLength(head) << endl;

    // Deallocate memory
    delete head;

    return 0;
}