#include<iostream>
using namespace std;
class math{
    public:
    int add(int a,int b){
        return a+b;
    }
    int add(double a,double b){
        return a+b;
    }
    int add(int a,int b,int c){
        return a+b+c;
    }
};
int main(){
    math m;
    cout<<"sum of 2 ints:"<<m.add(5,10)<<endl;
    cout<<"sum of 2 doubles:"<<m.add(3.5,2.2)<<endl;
    cout<<"sum of 3 ints:"<<m.add(1,2,3)<<endl;
}