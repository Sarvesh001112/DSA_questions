#include <iostream>
using namespace std;

class Node {
        public:
        int data;
        Node* prev;
        Node* next;

        Node() {
                this->data = 0;
                this->prev = NULL;
                this->next = NULL;
        }
        Node(int data) {
                this->data = data;
                this->prev = NULL;
                this->next = NULL;
        }
};
void print(Node* &head){

    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }

}
int findLength(Node* &head ) {
        int len = 0;
        Node* temp = head;
        while(temp != NULL) {
                temp = temp->next;
                len++;
        }
        return len;
}

//head per insert
// (4 step --- )
void insertAtHead(Node* &head,Node* &tail,int data){

    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }


    Node* newNode = new Node(data);
    newNode -> next = head;
    head -> prev = newNode;
    head = newNode;
}

//tail per insert
void insertAtTail(Node* &head, Node* &tail, int data){

     if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    Node* newNode = new Node(data);
    tail -> next = newNode;
    newNode -> prev = tail;
    tail = newNode;
}

//insert at position(6 step)
void insertAtPosition(Node* &head, Node* &tail,int data, int position){

     if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

      if(position == 1) {
                insertAtHead(head, tail , data);
                return;
        }
       
        int len = findLength(head);
        if(position > len) {
                insertAtTail(head, tail, data);
                return;
        }

        //ste1:find prev and curr
        int i = 1;
        Node* prevNode = head;
        while(i < position - 1) {
                prevNode= prevNode -> next;
                i++;
        }
        Node* curr = prevNode ->next;
        Node* newNode = new Node(data);
        newNode -> prev = prevNode;
        prevNode ->next = newNode;
        newNode -> next = curr;
        curr -> prev = newNode;
}

void deleteNode(Node* &head, Node* &tail, int position) {
        if(head == NULL) {
                cout << "Cannot delete, LL is empty";
                return;
        }
         if(head ->next == NULL) {
            Node* temp = head;
            head = NULL;
            tail = NULL;
            delete temp;
            return;
        }
        int len = findLength(head);
        if(position > len){
            cout << "please enter a valid position "<<endl;
            return;
        }

        //deleting first node
        if(position == 1) {
                Node* temp = head;
                head = head -> next;
                head -> prev = NULL;
                temp -> next = NULL;
                delete temp;
                return;
        }

        //deleting last node
        if(position == len) {

            Node* temp = tail;
            tail = tail -> prev;
            temp -> prev = NULL;
            tail -> next = NULL;
            delete temp;
            return;
        }

        //deleting middle node

        //step  : find prev and curr
        int i =1;
        Node* left = head;
        while( i < position-1) {
                left= left -> next;
                i++;
        }
        Node* curr = left -> next;
        Node* right = curr -> next;
        left -> next = right;
        right -> prev = left;
        curr -> next = NULL;
        curr -> prev = NULL; 
        delete curr;

}



int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* head = first;
    Node* tail = third;
    

    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev = second;

    cout << "printing the LL"<< endl;
    print(first);
    cout<<endl;
    cout<<endl;
    
    cout << "printing the LL inser at head"<< endl;
    insertAtHead(head, tail, 101);
    print(head);
    cout<<endl;
    cout<<endl;

    cout << "printing the LL inser at tail "<< endl;
    insertAtTail(head,tail, 11);     
    insertAtTail(head, tail, 90);
    print(head);
    cout<<endl;


    insertAtPosition(head, tail , 104, 5);
    print(head);
    cout<<endl;
    cout<<endl;

    deleteNode(head, tail , 8);
    print(head);
    

    return 0;
}

