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

    void print(){
        cout<<name <<" "<<rollNo <<" "<<cgpa<<endl;
    }
};

void change(Student s){
    s.name ="Akash";
}
int main(){
    Student x("Sumit",8.7,39);
    change(x);
    x.print();
}