#include <bits/stdc++.h>
#include<iomanip>
using namespace std;

int main() {
	// your code goes here
	double a,b;
	char c;
	cin>>a;
	cin>>b;
	cin>>c;
	double result;
	switch(c){
	    case '+':
	     result = a+b;
	    break;
	    case '-':
	     result = a-b;
	    break;
	    case '*':
	     result = a*b;
	    break;
	    case '/':
	    if(b!=0){
	         cout<<fixed<<setprecision(7);
	         result = a/b;
	    }
	    else{
	        cout<<"not possible"<<endl;
	    }
	    break;
	    default :
	    cout<<"wrong choice"<<endl;
	    break;
	}
	cout<<result<<endl;
	return 0;
}
