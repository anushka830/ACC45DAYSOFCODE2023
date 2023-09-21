#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int x,y;
	    cin>>x>>y;
	    if(x>=y){
	        cout<<y<<endl;
	    }
	    else{
	        cout<<(x+((y-x)*2))<<endl;
	    }
	}
	return 0;
}
