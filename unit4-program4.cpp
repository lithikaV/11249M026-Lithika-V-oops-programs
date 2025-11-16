#include<iostream>
using namespace std;
class rectangle{
    int length,breadth;
    public:
    void getdata(){
        cout<<"enter length and breath:";
        cin>>length>>breadth;
    }
    int area(){
        return length*breadth;
    }
    bool operator>(rectangle r){
        return this->area()>r.area();
    }
};
int main(){
    rectangle r1,r2;
    r1.getdata();
    r2.getdata();
    if(r1>r2)
     cout<<"rectangle 1 is larger"<<endl;
    else
     cout<<"rectangle 2 is larger"<<endl;
    return 0;
}