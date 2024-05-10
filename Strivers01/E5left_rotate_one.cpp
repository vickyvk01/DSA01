#include<iostream>
using namespace std;

void leftRotate(int arr[] , int size){
    int s =0;
    int e = size-1;
    int first = arr[0];
    for(int i =0;i<size-1;i++){
        // int temp = arr[i];
        // arr[i]= arr[i+1];
        // arr[i+1]= temp;
        arr[i] = (arr[i]+arr[i+1])-(arr[i+1] = arr[i]);
    }
    // arr[size-1]= first;
    for(int i =0;i< size;i++){
        cout<<arr[i];
    }




}

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i =0; i< size ; i++){
        cin>>arr[i];
    }
    leftRotate(arr,size);
}

