#include<iostream>
using namespace std;
// User Defined data-structure
class MyVector{
private:
    int length; 
    int* arr;
    int cap;
    // kitne ele h vector me
    // int arr[];
public:
    MyVector(int capacity , int default_value){
        length = cap = capacity;
        arr = new int[capacity];
        for(int i=0;i<capacity;i++){
            arr[i] = default_value;
        }
    }
    int size(){
        return length;
    }
    int capacity(){
        return cap;
    }
    void pop_back(){
        if(length==0){
            cout<<"vector is empty !";
            return;
        }
        length--;
    }
    int get(int idx){
        if(idx<0 || idx >=length){
            cout<<"Invalid index";
            return -1;
        }
        return arr[idx];
    }
    void set(int idx , int val){
        if(idx<0 || idx >=length){
            cout<<"Invalid index";
            return ;
        }
        arr[idx]=val;
    }
    void display(){
        for(int i=0;i<length;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void push_back(int val){
        if(length == cap) {
            // double the capacity & copy paste
            cap = 2*cap;
            int* temp = new int[cap];
            for(int i=0;i<length;i++){
                temp[i] = arr[i];
            }
            delete[] arr;
            arr=temp;
        }
        
        arr[length] = val;
        length++;
    }


};
int main(){
    // vector<int> v(5,-1);
    MyVector v(5,-1);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.display();
    v.pop_back();
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.display();
    v.push_back(10);
    v.display();
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(20);
    v.display();
    cout<<v.get(2)<<endl;
    v.set(2,120);
    v.display();
    cout<<v.get(2)<<endl;
    // int arr[5];
    int* arr = new int[5];
    arr[0] = 10 ; arr[1] = 20;


    int b [] = {67,21};
    arr = b;
    
    // cout<<arr[0]<<endl;
    // int x = 10;
    // int*p = new int(10);
}