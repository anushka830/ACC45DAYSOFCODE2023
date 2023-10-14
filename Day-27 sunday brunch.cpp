#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int  t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(x/y>20){
	        cout<<20<<endl;
	    }
	    else{
	        cout<<x/y<<endl;
	    }
	}
	return 0;
}
