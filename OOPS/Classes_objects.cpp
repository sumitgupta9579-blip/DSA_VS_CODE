#include<iostream>
using namespace std;
class Student{
    // Student -> User defined data-type
public:
    string name;
    int rollNo;
    float cgpa;
    // int age ;
    // float height ;


    Student(){
        // Deafult Constructor

    }

    Student(string n , int r , float c){
        name = n;
        rollNo = r;
        cgpa = c;
    }
};
int main(){
    Student x1("Sumit" ,39 ,8.7);

    Student x;
    x.name = "Sumit";
    x.rollNo = 39;
    x.cgpa = 8.7;

    Student y;
    y.name = "Sumit";
    y.rollNo = 39;
    y.cgpa = 8.7;

    Student z;
    z.name = "Sumit";
    z.rollNo = 39;
    z.cgpa = 8.7;

    cout<<x1.name <<" "<<x1.rollNo <<" "<<x1.cgpa <<endl;
}