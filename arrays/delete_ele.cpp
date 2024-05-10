#include<iostream>
using namespace std;

// int main(){
//     int arr[6] = {1,2,2,2,6,6};
//     int count =0;
 
//     for(int i =0; i< 6 ;i++){
//         for(int j = 0; j< 6 ;j++){
//             if(arr[i] == arr[j] && i != j){
               
//                 for(int k = j; k< 6; k++){
//                     arr[k]= arr[k+1];
//                 }
//             }
//         }
//     }

//     for(int i =0; i<3;i++){
//         cout<<arr[i];
//     }
// }

int main(){
    int arr[7] = {1,1,2,2,2,6,6};
    int i =0;
    for(int j =1;j<6 ; j++){
        if(arr[i] != arr[j]){
            i=i+1;
            arr[i] = arr[j];
            
        }
    }
    int k = i+1;
    for(int i =0; i < k ; i++){
        cout<< arr[i];
    }
}