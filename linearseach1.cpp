#include<iostream>
using namespace std;

int search(int arr[],int sz,int key){
    for(int i =0;i<sz;i++){
        if(arr[i]==key){
        return i;
        }
    }
    
}

int main(){
    int key;
    int array[10]={3,6,8,9,1,2,5,-6,4,7};
    cout<<"Enetr the key";
    cin>> key;

   int  found = search(array,10,key);
   cout<<found;

    // if(found){
    //     cout<<"present";
    // }
    // else{
    //     cout<<"not present";
    // }

}