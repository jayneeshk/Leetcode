#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"size:";
	cin>>n;
	int arr[n];
	cout<<"Elements:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int x0r2no=0;
	for(int i=0;i<n;i++){
		x0r2no^=arr[i];
	}
	int lowestbit=x0r2no & (-x0r2no);
	int result[2];
	for(int i=0;i<2;i++){
	    result[i]=0;
	}
	for(int i=0;i<n;i++){
		if((lowestbit & arr[i])==0){
			result[0]^=arr[i];
		}
		else if((lowestbit & arr[i])!=0){
			result[1]^=arr[i];
		}
	}
	for(int i=0;i<2;i++){
		cout<<result[i]<<" ";
	}
	return 0;
}

