#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n],max=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]>max){
	            max=arr[i];
	        }
	    }
	    cout<<max<<endl;
	}
	return 0;
}
