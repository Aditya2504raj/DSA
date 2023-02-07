#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    // n is given no and to check kth bit set or not

    // Using right shift operator
    /*int y = n>>(k-1);
    if(y&1==1){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    */
    // or using left shift operator
    if((n&(1<<(k-1))) != 0){
        cout<<"yes"<<endl;
    }
     else{
        cout<<"No"<<endl;
    }

}