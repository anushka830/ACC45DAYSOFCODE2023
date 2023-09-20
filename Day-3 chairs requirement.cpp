#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,X,Y;
	cin>>T;
	while(T--){
	    cin>>X>>Y;
	    if(X<Y)
	    cout<<"0"<<endl;
	    else
	    cout<<X-Y<<endl;
	}
	return 0;
}
