#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,x,y;
	    cin>>a>>b>>x>>y;
	    int max1 = max(a, b);
        int max2 = max(x, y);

        if (max1 > max2)
        {
            cout<<"Q"<<endl;
        }
        else if (max1 < max2)
        {
            cout<<"P"<<endl;
        }
        else
        {
            cout<<"TIE"<<endl;
        }
	}
	return 0;
}
