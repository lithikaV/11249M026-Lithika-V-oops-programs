#include<iostream>
using namespace std;
class academics{
    protected:
    int marks;
    public:
    void getacademics(){
        cout<<"enter academic marks(out of 100):";
        cin>>marks;
    }
    void showacademics(){
        cout<<"academic marks:"<<marks<<endl;
    }
};
class sports{
    protected:
    int score;
    public:
    void getsports(){
        cout<<"enter sports score:";
        cin>>score;
    }
    void showsports(){
        cout<<"sports score:"<<score<<endl;
    }
};
class result:public academics,public sports{
    public:
    void displayresult(){
        int total=marks+score;
        cout<<"final result:"<<endl;
        showacademics();
        showsports();
        cout<<"total score:"<<total<<endl;
    }
};
int main(){
    result r;
    r.getacademics();
    r.getsports();
    r.displayresult();
    return 0;
}