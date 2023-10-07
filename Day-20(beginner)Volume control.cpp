#include <iostream>
using namespace std;

int main() {
	// your code goes here
int i,t;
cin>>t;
while(t--){
    int x,y;
    cin>>x>>y;
    if(x<y){
     int   ans1 = y-x;
    cout<<ans1<<endl;
}
else if(x>y){
int ans2 = x-y;
cout<<ans2<<endl;
}
else{
cout<<"0"<<endl;
}
}
	return 0;
}
