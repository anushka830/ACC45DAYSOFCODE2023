#include <iostream>
using namespace std;
int prime(int n){
    int k=1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            k=0;
            break;
        }
    }
    return k;
}
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a==1) 
        a++;
        for(int i=a;i<=b;i++)
        {
            if(prime(i))
            cout<<i<<endl;
        }
    }
	return 0;
}
