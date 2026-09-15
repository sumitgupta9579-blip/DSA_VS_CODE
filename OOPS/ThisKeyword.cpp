#include<iostream>
using namespace std;
class pokemon{
    // Student -> User defined data-type
public:
    string name ;
    string type;
    int hp;

    pokemon(string name , string type , int hp){
        this->name = name;
        this->type = type;
        this->hp = hp;
    }

    
    void print(){
        cout<<name<<" "<<type<<" "<<hp<<endl;
    }
};

int main(){
    pokemon p1("Pikachu","Electric",70);
    pokemon p2("Charizaro","Fire",120);
    pokemon p3("Mewtwo","Psychic",340);

    p3.print();
}