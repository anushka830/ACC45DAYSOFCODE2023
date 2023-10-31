#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,a,b,countA=0,countB=0;
	    cin>>n>>a>>b;
	    string s;
	    cin>>s;
	    for(int i=0;i<n;i++){
	        if(s[i]=='1'){
	            countA++;
	        }
	        else{
	            countB++;
	        }
	    }
	    cout<<countA*b+countB*a<<endl;
	}
	return 0;
}
