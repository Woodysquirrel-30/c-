#include <iostream>
using namespace std;

int main() {
    int n,i=2;
   cout<<"up till which even number do you want to print"<<endl;
    cin>>n;
    while (i<=n)
    { 
       cout<<i<<endl;
        i+=2;
    }
    

    return 0;
}