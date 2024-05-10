#include<iostream>
using namespace std;
#define max 10

class Stack{

    int * arr;
    int top;

    public:
    Stack(){
        arr = new int[max];
        top = -1;
    }

    void push(int data){
        if(top == max-1){
           cout<<"Stack Overflow" ;
           return;
        }
        top++;
        arr[top]=data;
        
    }

    void pop(){
        if(top == -1){
            cout<<"Underflow";
            return;
        }

        top--;
    }

    int peek(){
        if(top == -1){
            cout<<"Underflow";
            return 0;
        }

        return arr[top];
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){

    
    Stack st;
    
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.isEmpty()<<endl;
    cout<<st.peek()<<endl;
    st.pop();
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<endl<<st.isEmpty();

}