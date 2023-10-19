#include <iostream> 
#include<algorithm>
using namespace std;
int main() {
    int T;
    cin>>T;
    while(T--){
		int A[3],B[3],sum1=0,sum2=0;
		for(int i=0;i<3;i++){
			cin>>A[i];
        }
        for(int i=0;i<3;i++){
			cin>>B[i];
        }
    sort(A,A+3);
    sort(B,B+3);
    sum1=A[0]*1+A[1]*10+A[2]*100;
    sum2=B[0]*1+B[1]*10+B[2]*100;
		if(sum1>sum2){
			cout<<"ALICE"<<endl;
		}
		else if(sum1==sum2){
			cout<<"TIE"<<endl;
		}
		else{
			cout<<"BOB"<<endl;
		}
	}
	return 0;
}
