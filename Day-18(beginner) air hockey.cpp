#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; 
	cin>>t;
	for(int i=0; i<t; i++){
	    int a,b,max1=0;
	    cin>>a>>b;
	    max1=max(a,b);
	    cout<<7-max1<<endl;
	}
	return 0;
}
