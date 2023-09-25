#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int i,n,b,p,w,h,area=0;
	    cin>>n>>b;
	    for(i=0;i<n;i++){
	        cin>>w>>h>>p;
	    }
	    for(i=0;i<n;i++){
	        if(p<=b){
	            area = max(area,(w*h));
	            cout<<area<<endl;
	            break;
	        }
	        else{
	            cout<<"no tablets"<<endl;
	            break;
	        }
	}
	}
	return 0;
}
