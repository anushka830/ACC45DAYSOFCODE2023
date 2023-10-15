#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x%3==0){
	        cout<<0<<endl;
	    }
	    else{
	        cout<<3-(x%3)<<endl;
	    }
	}
	return 0;
}
