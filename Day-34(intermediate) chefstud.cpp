#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int len= s.size();
	    int count=0;
	    for(int i=0;i<len;i++){
	        if(s[i]=='<' && s[i+1]=='>'){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
