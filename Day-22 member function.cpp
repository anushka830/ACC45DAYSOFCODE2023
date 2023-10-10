#include <iostream>

using namespace std;

class mohini{
    private:
    int l,b,h;
    public:
    void length();
    void breadth();
    void height();
    int  volume();

};

void mohini::length(){
    cout<<"Enter the length of the box"<<endl;
    cin>>l;
}

void mohini::breadth(){
    cout<<"Enter the breadth of the box"<<endl;
    cin>>b;
}

void mohini::height(){
    cout<<"Enter the height of the box"<<endl;
    cin>>h;
}

int mohini::volume(){
    return (l*b*h);

}

int main(){
    mohini m;
    m.length();
    m.breadth();
    m.height();
    int c=m.volume();
    cout<<"The volume of the box is "<<c;

    return 0;
}
