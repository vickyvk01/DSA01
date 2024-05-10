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



void insertAtBeginning(Node * &head , int data){

    Node * newNode = new Node(data);

    if(head == NULL){
        head = newNode;
        return;                                         
    }

    newNode->next = head;
    head = newNode;

}

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

}