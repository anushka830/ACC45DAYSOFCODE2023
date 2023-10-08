#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int n;
	    cin>>n;
	    int arr[3];
	    for(int i=0; i<3; i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+3);
	    cout<<((n-1)*arr[0])+(1*arr[1])<<endl;
	}
	return 0;
}
