#include<iostream>
#include<string>
using namespace std;

//to get length of char array
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
int main(){
 char arr[20];
 cout<<"Enter your name"<<endl;
 cin>>arr;
 //arr[2]='\0';
 //int length=getlength(arr);
 int length= sizeof(arr)/sizeof(char);
 cout<<length;
 cout<<arr;
}