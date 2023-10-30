#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
       float N,M,A;
       cin>>N>>M;
       A=N-(N/10);
       if(A==M){
            cout<<"EITHER"<<endl;
       }
       else if(A>M){
            cout<<"DINING"<<endl;
       }
       else{
            cout<<"ONLINE"<<endl;
       }
   
    }
    return 0;
    
}
