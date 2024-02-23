#include<iostream>
using namespace std;

void reverse(int arr[],int sz){
    int temp =0;
    int i;
    while(i<3){
        temp = arr[i];
        arr[i]=arr[sz-1-i];
        arr[sz-1-i]=temp;
        i++;
    }

    for(int i=0;i<sz;i++){
       cout<< arr[i];
    }
}

int main(){
    int array[6]={3,7,9,5,1,6};
    reverse(array , 6);
}