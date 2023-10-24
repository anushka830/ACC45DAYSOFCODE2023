#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int count=0,temp=0;
	     sort(a,a+n);
	   for(int i=0;i<n;i++){
	       if(a[i]==a[i+1]){
	           count++;
	       }
	   
	   else{
	   temp=max(count,temp);
	   count=0;
	   }
	   }
	   cout<<n-1-temp<<endl;
	}
	return 0;
}
