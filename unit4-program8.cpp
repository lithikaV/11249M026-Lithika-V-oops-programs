#include<iostream>
#include<cstring>
using namespace std;
class mystring{
    char *str;
    public:
    mystring(const char *s=" "){
        str=new char[strlen(s)+1];
        strcpy(str,s);
    }
    void display(){
        cout<<str<<endl;
    }
    ~mystring(){
        delete[] str;
    }
};
int main(){
    mystring s1("hello");
    mystring s2("world");
    s1.display();
    s2.display();
}