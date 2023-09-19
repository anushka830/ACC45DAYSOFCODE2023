#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,x,y,z;
	cin>>T;
	while(T--){
	    int X = 5; //x no of coins
	    int Y = 10; //y no of coins
	    cin>>x>>y>>z;
	  int  total = x*X+y*Y;
	  cout<<total/z<<endl;
	}
	return 0;
}
