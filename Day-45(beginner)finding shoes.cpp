#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    if(m==0){
	        cout<<2*n<<endl;
	    }
	    else if(n<=m){
	        cout<<n<<endl;
	    }
	    else if(n>m){
	        cout<<n+(n-m)<<endl;
	    }
	}
	return 0;
}
