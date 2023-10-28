#include <iostream>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int N;
	    cin>>N;
	   if(N>=2){
	        int a= (N-2)/7;
	        cout<<a+1<<endl;
	   }
	   else{
	       cout<<0<<endl;
	   }
	}
	return 0;
}
