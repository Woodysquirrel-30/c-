#include <iostream>
using namespace std;
int add(int a,int b){
    return  a + b;
}
double add(double a, double b){
    return a+b;
}
int main(){
   cout<<add(8,6)<<endl;
   cout<<add(7.8,8.9)<<endl;
   return 0 ;
}