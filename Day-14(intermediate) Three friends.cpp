#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if ((x+y-z)==0 || (x-y+z)==0 || (-x+y+z)==0) {
        cout << "yes" << endl;
    } 
    else {
        cout << "no" << endl;
    }
	}
	return 0;
}
