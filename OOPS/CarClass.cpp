#include<iostream>
using namespace std ;
class Car{
public :
    string name ;
    // string color;
    float milage;
    bool isE20;
    int power ;
    // int seats ;
    // int price ;

    void print(){
        cout<<name <<" "<<milage <<" "<<isE20 <<" "<<power<<endl;
    }
};

int main(){
    Car c1;
    c1.name ="kia Sonet";
    c1.power = 118;
    c1.milage =9.2;
    c1.isE20 =true;

    Car c2 ={"Toyota Fortuner" ,200 ,7.6,false};

    cout<<c2.power<<endl;

    // print(c1);
    // print(c2);
    c1.print();
}
