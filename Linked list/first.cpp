  ////    ............    print 
// #include <iostream>
// using namespace std;

// class Node {
//         public:
//         int data;
//         Node* next;

//         Node() {
//                 this->data = 0;
//                 this->next = NULL;
//         }
//         Node(int data) {
//                 this->data = data;
//                 this->next = NULL;
//         }
// };

// void print(Node* &head){

//     Node* temp = head;
//     while(temp != NULL){
//         cout << temp->data << " ";
//         temp = temp->next;
//     }

// }


// int main(){
//     Node* first = new Node(10);
//     Node* second = new Node(20);
//     Node* third = new Node(30);
//     Node* fourth = new Node(40);
//     Node* fifth = new Node(50);

//     first->next = second;
//     second->next = third;
//     third->next = fourth;
//     fourth->next = fifth;

//     cout << "printing the LL"<< endl;
//     print(first);

//     return 0;
// }


//                 #################      insert at head , tail and position 

#include <iostream>
using namespace std;

class Node {
        public:
        int data;
        Node* next;

        Node() {
                this->data = 0;
                this->next = NULL;
        }
        Node(int data) {
                this->data = data;
                this->next = NULL;
        }
        ~Node(){
                cout<< "node with value: "<<this->data<< "deleted" << endl;

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
// (3 step --- create a node(newNode),newNode ka next point to head,head=newNode(head ko first per le aao))
void insertAtHead(Node* &head,Node* &tail,int data){

    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node* newNode = new Node(data);
    newNode -> next = head;
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
    tail = newNode;
}

//insert at position(4 step)
void insertAtPosition(int data, int position ,Node* &head, Node* &tail ){

     if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

      if(position == 0) {
                insertAtHead(head, tail , data);
                return;
        }    
        int len = findLength(head);
        if(position >= len) {
                insertAtTail(head, tail, data);
                return;
        }
           //ste1:find prev and curr
        int i = 1;
        Node* prev = head;
        while(i < position) {
                prev= prev -> next;
                i++;
        }
        Node* curr = prev -> next;
        Node* newNode = new Node(data);
        newNode -> next = curr;
        prev -> next = newNode;
}

void deleteNode(int position, Node* &head, Node* &tail) {
        if(head == NULL) {
                cout << "Cannot delete, LL is empty";
                return;
        }

        //deleting first node
        if(position == 1) {
                Node* temp = head;
                head = head -> next;
                temp -> next = NULL;
                delete temp;
                return;
        }

        int len  = findLength(head);
        //deleting last node
        if(position == len) {
                //find prev
                int i = 1;
                Node* prev = head;
                while(i < position - 1) {
                        prev = prev->next;
                        i++;
                }
                //step2:
                prev->next = NULL;
                //step3:
                Node* temp = tail;
                //step4:
                tail = prev;
                
                //step5:
                delete temp;
                return;
        }

        //deleting middle node

        //step  : find prev and curr
        int i =1;
        Node* prev = head;
        while( i < position-1) {
                prev= prev -> next;
                i++;
        }
        Node* curr = prev -> next;

        //step2:
        prev -> next = curr -> next;
        //step3:
        curr -> next = NULL;
        //step4:
        delete curr;

}


int main(){
    // Node* head = new Node(10);
    Node* head = NULL;     
    Node* tail = NULL;

    insertAtHead(head,tail, 20);   //if head and tail  is null so add head and tail both
    insertAtHead(head,tail, 30);
    insertAtHead(head,tail,  80);

    insertAtTail(head,tail, 11);     
    insertAtTail(head, tail, 90);
    insertAtTail(head, tail, 77);
    
    print(head);
     cout << endl;
     cout << "head: " << head -> data << endl;
     cout << "tail: " << tail->data << endl;

    insertAtPosition(108, 0, head, tail);
    cout<< endl;
    
    print(head);
      cout << endl;
      cout << "head: " << head -> data << endl;
      cout << "tail: " << tail->data << endl;
      cout<<endl;

      deleteNode(7 , head, tail);
      cout<< endl;
      print(head);
      cout<< endl;
      cout << "head: " << head -> data << endl;
      cout << "tail: " << tail->data << endl;
      cout<<endl;
      


    return 0;
}


