#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n, count=0, count1=0, max1=0, max2=0;
	    cin>>n;
	    int arr1[n], arr2[n];
	    for(int i=0; i<n; i++){
	        cin>>arr1[i];
	        if(arr1[i]>0){
	            count++;
	        }
	        else count=0;
	        if(count>max1){
	            max1=count;
	        }
	    }
	    for(int i=0; i<n; i++){
	        cin>>arr2[i];
	        if(arr2[i]>0){
	            count1++;
	        }
	        else count1=0;
	        if(count1>max2){
	            max2=count1;
	        }
	    }
	    if(max2==max1){
	        cout<<"Draw"<<endl;
	    }
	    else if(max1>max2){
	        cout<<"Om"<<endl;
	    }
	    else cout<<"Addy"<<endl;
	}
	
	return 0;
}
