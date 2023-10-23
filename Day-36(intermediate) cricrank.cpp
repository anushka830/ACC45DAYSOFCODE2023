#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	   int r1,w1,c1,r2,w2,c2;
	   cin>>r1>>w1>>c1>>r2>>w2>>c2;
	    if((r1>r2) && (c1>c2) || (w1>w2) &&(r1>r2) || (c1>c2)&&(w1>w2)){
	        cout<<"A"<<endl;
	    }
	    else{
	        cout<<"B"<<endl;
	    }
	}
	return 0;
}
