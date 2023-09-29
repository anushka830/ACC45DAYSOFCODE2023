#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z,a;
	    cin>>x>>y>>z;
	    a=y/x;
	    if(a<z){
	        cout<<z-a<<endl;
	    }
	    else{
	        cout<<0<<endl;
	    }
	}
	return 0;
}
