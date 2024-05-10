#include<iostream>
using namespace std;

int funtion(int arr[] ,int n){
	int i =0;
	int count =0;
	int sum =0;
	for(int j =0; j< n; j++){	
		if(arr[i] != arr[j]){
			if(count % 2 != 0){
				sum = sum+arr[i];
			}
			i=j--;
			count =0;
		}
		else{
			count++;
		}
		}
	return sum;
	
}

int main(){
	int size;
	cin>>size;
	int arr[size];
	for(int i =0;i< size;i++){
		cin>>arr[i];
	}
	int sum = funtion(arr,size);
	cout<<sum;
}