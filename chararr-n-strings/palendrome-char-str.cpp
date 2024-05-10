#include<iostream>
using namespace std;

int getlength(char arr[]){
    int i=0;
    int count=0;
    while (arr[i]!='\0')
    {
       count++;
       i++;
    }
    return count;
}

bool checkpalindrome(char arr[],int len){
    int s=0;
    int e=s-1;
    while(s<e){
        int i=0;
        if(arr[s]!=arr[e]){
            return false;
        }
        s++;
        e--;
  
        }
        
    }



int main(){
    char arr[20];
    cout<<"enter your string";
    cin>>arr;
    int len = getlength(arr);
    bool palendrome = checkpalindrome(arr, len);
    if(palendrome){
        cout<<"it is pal";
    }
    else{
        cout<<"not";
    }
}
