#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node * next;

    Node(int val){
        data = val;
        next = NULL;
    }

};

class Queue {

    Node* front;
    Node* back;

    public:
    Queue(){
        front = NULL;
        back = NULL;
    }

    void push( int x){
        Node * newnode = new Node(x);

        if(front == NULL){
            back = newnode;
            front = newnode;
            return;
        }
        back->next = newnode;
        back = newnode;
    }

    void pop(){
        if(front == NULL){
            cout<<"Underflow"<<endl;
            return;
        }

        Node * todelete = front;
        front = front->next;
        delete todelete;
    }

    int peek(){
        if(front == NULL){
            cout<<"Underflow"<<endl;
            return 0;
        }

        return front->data;
    }

    bool empty(){
        if(front == NULL){
            return true;
        }

        return false;
    }


};

int main(){

    Queue qu;
    qu.push(1);
    qu.push(2);
    qu.push(3);
    cout<<qu.peek()<<endl;
    qu.pop();
    cout<<qu.peek()<<endl;

}



