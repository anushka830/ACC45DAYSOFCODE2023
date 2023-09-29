#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int i,a,b,temp=0,temp1=0;
	    cin>>a>>b;
	   
	    for(int i=1;temp<=a && temp1<=b;i++){
	       if(i%2!=0){
	           temp=temp+i;
	       } 
	       else{
	          temp1=temp1+i;
	       }
	    }
	    if(temp<=a){
	        cout<<"Limak"<<endl;
	    }
	    else{
	        cout<<"Bob"<<endl;
	    }
	}
	return 0;
}
