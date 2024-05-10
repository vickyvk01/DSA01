#include<iostream>
using namespace std;

// void rotateByK(int arr[] ,int size , int key){                     12345 -- 12321
//     int lastindex = size-1;
//     int till = size-key;
//     int k =0;
//     for(int i = lastindex; i >= till-1; i--){
//         arr[lastindex] = arr[k];
//         k++;
//     }
//     for(int i =0; i<size;i++){
//         cout<<arr[i];
//     }
// }

// void rotateByK(int arr[], int size, int key){                 /* time comp O(N) space complexity O(N)*/
//     int temp[key];
//     for(int i =0;i< key;i++){
//         temp[i] = arr[i];
//     }

//     int ind=0;
//     for(int i =0; i < size;i++){
//         if( i < size-key){
//             arr[i] = arr[i+key];
//         }
//         else{
//             arr[i] = temp[ind];
//             ind++;
//         }    
//     } 
//     for(int i =0; i< size;i++){
//         cout<< arr[i];
//     }
// }

void rotateByK(int arr[] , int size , int key){
    int it = 1;
    while(it <= key){
        for(int i =0;i<size-1;i++){
            arr[i] = (arr[i]+arr[i+1]) - (arr[i+1]=arr[i]);
        }
        it++;
    }
    for(int i =0; i< size ; i++){
        cout<<arr[i];
    }
}

int main(){

    int size;
    int key;
    
    cout<<"Enter the Size and array: "<<endl;
    cin>>size;
    int arr[size];
    for(int i =0; i < size;i++){
        cin>>arr[i];
    }
    cout<<"enter the key: "<<endl;
    cin>>key;
    rotateByK(arr,size,key);

}