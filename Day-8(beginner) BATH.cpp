#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(x<y*2){
	        cout<<"0"<<endl;
	    }
	    else{
	        cout<<x/(2*y)<<endl;
	    }
	}
	return 0;
}
