#include <iostream>
using namespace std;
int func1(int a,int b){
    if(a%b!=0){
        return ((a/b)+1);
    }
    else{
        return (a/b);
    }
}
int func2(int a,int c){
    if(a%c!=0){
        return ((a/c)+1);
    }
    else{
        return (a/c);
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int l,v1,v2;
	    cin>>l>>v1>>v2;
	    int c=0,b=0;
	    b=func1(l,v1);
	    c=func2(l,v2);
	    if(b==c+1){
	        cout<<"0"<<endl;
	    }
	    else if(b>c+1){
	        cout<<(b-(c+1))<<endl;
	    }
	    else{
	        cout<<"-1"<<endl;
	    }
	    
	}
	return 0;
}
