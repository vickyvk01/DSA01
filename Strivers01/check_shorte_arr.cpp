#include<iostream>
using namespace std;

int checkShort(int arr[], int size){

    // for(int i =0 ; i<size ; i++){
    //     for(int j = i+1; j<size ; j++){
    //         if(arr[i] <= arr[j]){
    //             continue;
    //         }
    //         else{
    //             return 0;
    //         }
    //     }
    // }
    // return 1;

    // better sollution

    for(int i =0; i< size ; i++){

        if(arr[i] <= arr[i+1]){
            continue;
        }
        else{
            return 0;
        }
    }
    return 1;

}

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i =0;i< size;i++){
        cin>>arr[i];
    }
    int lar = checkShort(arr,size);
    cout<< lar;
    
}