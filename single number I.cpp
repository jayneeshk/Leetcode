#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Size:";
	cin>>n;
	int arr[n];
	cout<<"Element:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int xorall=0;
	for(int i=0;i<n;i++){
		xorall ^=arr[i];
	}
	cout<<xorall;
}
