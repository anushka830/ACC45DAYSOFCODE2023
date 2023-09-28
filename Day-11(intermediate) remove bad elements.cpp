#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,count=0,temp=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
        
	    for(int i=0;i<n;i++){
	        if(arr[i]==arr[i+1]){
	            count++;
	        }
	        else{
	            temp=max(count,temp);
	            count=0;
	        }
	        
	}
	cout<<n-1-temp<<endl;
	}
	return 0;
}
