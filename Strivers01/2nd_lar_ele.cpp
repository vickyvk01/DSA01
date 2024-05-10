#include<iostream>
using namespace std;

int secondLargest(int arr[] , int sz){
   int lar = arr[0];
   for(int i =1;i< sz; i++){
    if(arr[i]> lar){
        lar = arr[i];
    }
   }
   int secondLar =arr[0];
   for(int i=0; i<sz ;i++){
    
    if(arr[i]> secondLar && arr[i] != lar ){
        secondLar = arr[i];
    }
   }
    return secondLar;

}

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i =0;i< size;i++){
        cin>>arr[i];
    }
    int secondLar = secondLargest(arr,size);
    cout<< secondLar;
}