#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node * next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtTail(Node * &head , int data){
    Node * newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node * temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp-> next = newNode;
    
}

void deleatAtBeggining(Node * &head){
    if(head == NULL){
        cout<<"No data to delete"<<endl;
        return;
    }

    Node * temp = head;
    head = head->next;
    delete temp;
   
}
void deleatAtEnd(Node * &head){
    if(head == NULL){
        return;
    }
    Node * temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }

    Node * todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

void deleteForValue(Node * &head , int val){

    if(head == NULL){
        return;
    }

    Node * temp = head;

    while(temp->next->data != val){

        temp = temp->next;

    }
    Node * todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
}


void printList(Node * head){
    Node * temp = head;
    while(temp != NULL){
        cout<< temp->data << " ";
        temp = temp->next;
    }
    cout<< endl;
}

int main(){
    Node * head = NULL;
    cout<<"Enter the size of linkedlist";
    int size;
    cin>>size;
    int data;
    cout<<"Enter the data";
    
    for(int i =0 ; i< size ;i++){
        cin>>data;
        insertAtTail(head,data);
    }

    printList(head);

    //deleatAtBeggining(head);
    deleatAtEnd(head );

    printList(head);

}