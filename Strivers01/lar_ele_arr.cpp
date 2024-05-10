#include<iostream>
using namespace std;

int findLargest(int arr[], int sz){
    int temp = arr[0];
    for(int i =1; i <sz ;i++){
        
        if(arr[i]>temp){
            temp = arr[i];
        }
    }
    return temp;
}

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i =0;i< size;i++){
        cin>>arr[i];
    }
    int lar = findLargest(arr,size);
    cout<< lar;
}


