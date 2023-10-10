#include <iostream>

using namespace std;

class mohini{
    private:
    int a,b,c;
    public:
    void getdata();
    void large();
    void small();

};

void mohini::getdata(){
    

    cout<<"enter the value of a , b and c;"<<endl;

    cin>>a>>b>>c;


}

void mohini::large(){
    if(a>=b && a>=c){
        cout<<"the largest number is "<<a;
    }
    else if(b>=a && b>=c){
        cout<<"the largest number is "<<b;

    }
    else{
        cout<<"the largest number is "<<c;
    }

}

void mohini::small(){
    if(a<=b && a<=c){
        cout<<"the smallest number is "<<a;
    }
    else if(b<=a && b<=c){
        cout<<"the smallest number is "<<b;

    }
    else{
        cout<<"the smallest number is "<<c;
    }

}

int main(){
    mohini m;
    m.getdata();
    m.large();
    m.small();
}
