#include <iostream>
using namespace std;

int getMax(int arr[],int sz){
    int maxo =0;


    for(int i =0;i<sz;i++){
    //     if(arr[i]>max){
    //         max = arr[i];
    //     }
        maxo = max(maxo,arr[i]);
     }
    return maxo;
}

int main(){
    int size;
    cin>>size;
    int array[size];
    for(int i =0;i<size;i++){
        cin>>array[i];
    }
    cout<<"the maximum number is "<<getMax(array,size);    
}
