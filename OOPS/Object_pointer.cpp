#include<iostream>
using namespace std;
class Crickter{
public:
    string name;
    int runs;
    float average;
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
};
int main(){
    Crickter c1("Virat Kholi",10000,55.7);
    Crickter c2("Rohit Sharma",15000,78.4);
    Crickter c3("Sachin Tendulkar",11000,48.4);

    // Object-pointer
    Crickter*p = new Crickter("ABD",12400,54.8);
    p->print();

    Crickter* ptr =&c1;

    // cout<<(*ptr).name<<endl;
    // cout<<(*ptr).runs<<endl;
    // cout<<(*ptr).average<<endl;

    // (*ptr).average = 74.2;
    // cout<<(*ptr).average<<endl;

    ptr->average = 74.2;

    cout<<ptr->name<<endl;
    cout<<ptr->runs<<endl;
    cout<<ptr->average<<endl;

}