#include<iostream>
using namespace std ;
int main(){
   int cp , sp ;
   cout<<"Enter your cost_price ?  " ;
   cin>>cp;
   cout<<"Enter your selling_price ?  " ;
   cin>>sp;
   if(cp>sp) cout << " Loss "<<cp-sp;
   else if(sp>cp) cout<<" Profit "<<sp-cp;
   else cout << "Neither profit nor Loss";

}