#include<iostream>
using namespace std;

void reverse(int arr[],int sz){
    int s=0;
    int e=sz-1;
    while(s<e){
        swap(arr[s++],arr[e--]);
    }
     for(int i=0;i<sz;i++){
    cout<<arr[i]<<" ";
}

}

int main(){
 int num;
 cin>>num;
 int arr[num];
 cout<<"Enter your name"<<endl;
  for(int i =0;i<num;i++){
    cin>>arr[i];
 }
 reverse(arr,num);

}