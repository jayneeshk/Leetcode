#include<iostream>
#include<vector>
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
	unsigned int x0r2no=0;
	for(unsigned int i=0;i<n;i++){
		x0r2no^=arr[i];
	}
	unsigned int lowestbit=(x0r2no & (-x0r2no));//multiply the bit in real world !
	vector<int>result;
        unsigned int re0=0,re1=0;
	for(unsigned int i=0;i<n;i++){
		if((lowestbit & arr[i])==0){
			re0 ^=arr[i];
		}
		else if((lowestbit & arr[i])!=0){
			re1 ^=arr[i];
		}
	}
     result.push_back(re0);
     result.push_back(re1);
        
	for(int i=0;i<result.size();i++)
    {
    	cout<<result[i]<<" ";
	}
}

