#include <iostream>
using namespace std;

int binsearch(int arr[],int size,int key){

    int start=0;
    int end = size-1;
    int mid =(end+start)/2;

    while(start<=end){
        if (arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start = mid+1;
        }
        else{
            end=mid-1;
        }
        mid = (start+end)/2;
    }
    return -1;
}

int mani(){
    // int even[6]={2,4,6,8,12,18};
    // int odd[5]={3,8,11,14,16};

    // int index = binsearch(even,6,12);
    // cout<<"index of the given number is "<<index;
    cout<<"hello";

    return 0;

}