#include<iostream>
using namespace std;
class Add{
    int a,b;
    public:
    Add(int x=0,int y=0){
        a=x;
        b=y;
    }
    Add operator +(Add obj){
        Add result;
        result.a=a+obj.a;
        result.b=b+obj.b;
        return result;
    }
    void display(){
        cout<<"a="<<a<<"b="<<b<<endl;
    }
};
int main(){
    Add obj1(10,20);
    Add obj2(5,15);
    Add result;
    cout<<"first object:";
    obj1.display();
    cout<<"second object:";
    obj2.display();
    result=obj1+obj2;
    cout<<"result after addition:";
    result.display();
    return 0;
}