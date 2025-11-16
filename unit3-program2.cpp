#include<iostream>
using namespace std;
class Number{
    int value;
    public:
    Number(int v=0){
        value=v;
    }
    void operator-(){
        value=-value;
    }
    void display(){
        cout<<"value:"<<value<<endl;
    }
};
int main(){
    Number n1(10);
    cout<<"before overloading:";
    n1.display();
    -n1;
    cout<<"after overloading:";
    n1.display();
    return 0;
}