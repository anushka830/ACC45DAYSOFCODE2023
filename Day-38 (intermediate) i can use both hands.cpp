#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int l,r,m;
	    cin>>l>>r>>m;
	    int a=(m/l);
	    int b= m/r;
	    if(m%l!=0){
	    cout<<a+b+1<<endl;
	    }
	    else{
	        cout<<a+b<<endl;
	    }
	}
	return 0;
}
