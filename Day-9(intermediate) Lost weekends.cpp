#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d,e,p;
	 cin>>a>>b>>c>>d>>e>>p;
	 if((a+b+c+d+e)*p<=120){
	     cout<<"No"<<endl;
	 }
	 else{
	     cout<<"Yes"<<endl;
	 }
	}
	return 0;
}
