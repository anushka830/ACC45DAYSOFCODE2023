#include <iostream>
using namespace std;
int digitSum(int num){
    int sum=0,rem=0;
    while(num!=0){
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    return sum;
}
int sumchecking(int num){
    int sum=0,sum1=0;
    sum=digitSum(num);
    num++;
    sum1=digitSum(num);
    while(true){
        if((sum%2==0 && sum1%2!=0) || (sum%2!=0 && sum1%2==0)){
            return num;
        }
        else{
            sum=digitSum(num);
            num++;
            sum1=digitSum(num);
            

        }
    }


}
int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int n;
	    cin>>n;
	    int res=sumchecking(n);
	    cout<<res<<endl;
	    
	}
	return 0;
}
