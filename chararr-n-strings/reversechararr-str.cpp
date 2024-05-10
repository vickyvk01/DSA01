#include<iostream>
using namespace std;

// int getlength(char arr[]){
//     int count=0;
//     int i =0;
//     while(arr[i]!='\0'){
//         count++;
//         i++;
//     }
//     return count;
// }
// void reverse(char arr[],int n){

//     int s=0;
//     int e=n-1;
//     while(s<e){
//         // swap(arr[s++],arr[e--]);
//         char temp;
//         temp = arr[s];
//         arr[s]  = arr[e];
//         arr[e] = temp;
//         s++;
//         e--;
//     }
//     cout<<arr;
    
// }

// int main(){
//  char arr[20];
//  cout<<"Enter your name"<<endl;
//  cin>>arr;
//  int len = getlength(arr);
//  cout<<len<<endl;
//  reverse(arr,len);
// //  cout<<arr;
// }

void reverse(string str, int size){
    int s =0;
    int e = size-1;
    while(s<e){
        char temp = str[s];
        str[s] = str[e];
        str[e] = temp;
        s++;
        e--;
    }
    cout << str;
}

int main(){
    string str;
    cout<<"enter your name"<<endl;
    getline(cin,str);
    cout<<str<<endl;
    int count =0;
    int i =0;
    while(str[i]!= '\0'){
        count++;
        i++;
    }
    cout<<count<<endl;

    reverse(str,count);
}
