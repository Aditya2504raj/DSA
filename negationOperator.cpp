#include<iostream>
using namespace std;
int main(){
    unsigned int x = 1;// range = 0 to (2^32 - 1) === 4294967296-1 ==4294967295;
    
    // means all the no rep by this datatype is +ve or 0.
    cout<<(~x)<<endl;
    x= 5;
    cout<<(~x)<<endl;

    //signed input  - range = (-2^31 to 2^31-1)
    int y= 1;
    cout<<(~y)<<endl;
    y=5;
    cout<<(~y)<<endl;


}