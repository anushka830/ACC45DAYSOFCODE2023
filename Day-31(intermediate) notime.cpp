#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,h,x;
	cin>>n>>h>>x;
	int arr[n],temp=h-x,k=0;
	for(int i=0; i<n; i++){
	    cin>>arr[i];
	}
	for(int i=0; i<n; i++){
	    if(arr[i]==temp){
	        k++;
	    }
	}
	if(k>=1){
	    cout<<"YES"<<endl;
	}
	else{
	    cout<<"NO"<<endl;
	}
	return 0;
}
