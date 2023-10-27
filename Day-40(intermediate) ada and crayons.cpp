#include <iostream>
#include <cstring>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int temp, len, count = 0;
	    char c[60];
	    cin>>c;
	    len = strlen(c);
	    for(int i = 0; i< len; i++)
	    {
	        if(c[0] == c[i])
	        {
	            temp = 0;;
	        }
	        else
	        {
	            c[i] = c[0];
	            if(temp != 1)
	            {
	                count++;
	            }
	            temp = 1;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
