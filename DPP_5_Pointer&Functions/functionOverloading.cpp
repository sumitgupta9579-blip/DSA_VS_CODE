#include<iostream>
using namespace std;
float calArea(float r){
    float pi= 3.14159265359;
    float area = pi*r*r;
    return area;
}
float calArea(float length , float width){
    float area = length*width;
    return area;
}
int main(){
    cout<<"Area of circle :"<<calArea(3)<<endl;
    cout<<"Area of square :"<<calArea(4,5);
}