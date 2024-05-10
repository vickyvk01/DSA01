#include<iostream>
using namespace std;

#define max 10

class Queue {

    int * arr;
    int front;
    int back;

    public:
    Queue(){
        arr = new int[max];
        front = -1;
        back = -1;
    }

    void push(int data){
        if(back == max-1){
            cout<<"Overflow"<<endl;
            return;
        }

        back++;
        arr[back] = data;

        if(front == -1){
            front++;
        }
    }

    void pop(){
        if(back == -1 || front > back){

            cout<<"Underflow";
            return;
        }
        front++;  
    }

    int peek(){
        if(back == -1 || front > back){

            cout<<"Underflow";
            return 0;
        }

        return arr[front];
        
    }

    bool isEmpty(){
        if(back == -1 || front > back){
            return true;
        }
        else{
            return false;
        }
    }

};

int main(){

    Queue qu;

    qu.push(1);
    qu.push(2);
    qu.push(3);
    qu.push(4);
    cout<< qu.peek()<<endl;
    qu.pop();
    cout<< qu.peek()<<endl;

}