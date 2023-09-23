#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int d,count=0;
	    cin>>d;
	    string n;
	    cin>>n;
	    for(int i=0; i<d; i++){
	        if(n[i]=='0' || n[i]=='5'){
	            count++;
	        }
	        
	    }
	    if(count>=1){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	    
	}
	return 0;
}
