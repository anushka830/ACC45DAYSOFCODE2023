#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        int count = 0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=n;i++){
            if(a[i]>=x){
                count++;
            }
            else{
                count;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
