#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k,sum=0,count=-1;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<=n-k;i++){
	        sum=0;
	        for(int j=i;j<i+k;j++){
	            sum+=a[j];
	        }
	        if(sum>count){
	            count=sum;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
