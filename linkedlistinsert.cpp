#include<iostream>
using namespace std;
class Node{
public:
    int value;
    Node* next;
};

int main(){
    Node* head;
    Node* one = NULL;
    Node* two = NULL;
    Node* three = NULL;

    // allocate three nodes in the heap.......
    one = new Node();
    two = new Node();
    three = new Node();

    one->value = 10;
    two ->value = 20;
    three->value = 30;

    one->next = two;
    two->next = three;
    three->next = NULL;
    head = one;

    // insert at beginning......................
    Node* fourth = new Node();
    fourth->value = 100;
    fourth->next = head;
    head = fourth;

    // insert at the end...............
    Node* temp = NULL;
    Node* lastNode = new Node();
    lastNode->value = 90;
    temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = lastNode;
    lastNode->next = NULL;


    while(head != NULL){
        cout<<head->value<<" ";
        head = head->next;
    }
}
