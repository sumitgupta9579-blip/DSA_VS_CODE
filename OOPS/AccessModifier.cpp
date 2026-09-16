#include<iostream>
using namespace std;
class Crickter{
private:
    string name;
    int runs;
    float average;
public:
    // string name;
    // int runs;
    // float average;
    Crickter(string name , int runs , float average){
        this->name=name;
        this->runs=runs;
        this->average=average;
    }
    void print(){
        cout<<name<<endl;
        cout<<runs<<endl;
        cout<<average<<endl;

    }
    // getter
    int getRuns(){
        return runs;
    }
    void setRuns(int runs){
        this->runs=runs;
    }
};
int main(){
    Crickter*c = new Crickter("ABD",12400,54.8);
    // cout<<c->name;
    // cout<<c->average;
    // cout<<c->runs;

    c->print();
    cout<<c->getRuns()<<endl;
    c->setRuns(15000);
    cout<<c->getRuns()<<endl;

}