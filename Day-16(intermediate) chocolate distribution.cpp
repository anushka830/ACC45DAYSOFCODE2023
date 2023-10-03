#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    int n;
	    cin>>n;
	    if(n%2==0){
	        cout<<"1 "<<"1 "<<n-2<<endl;
	    }
	    else{
	        cout<<"1 "<<(n-1)/2<<" "<<(n-1)/2<<endl;
	    }
	    t--;
	}
	return 0;
}
