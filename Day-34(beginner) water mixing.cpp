#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,x,y;
	    cin>>a>>b>>x>>y;
	    if(b>a){
	        if((b-a)<=x){
	            cout<<"YES"<<endl;
	        }
	        else{
	            cout<<"NO"<<endl;
	        }

	    }
	    else{
	        if((a-b)<=y){
	            cout<<"YES"<<endl;
	        }
	        else{
	        cout<<"NO"<<endl;
	        }
	    }
	}
	return 0;
}
