#include<bits/stdc++.h>
using namespace std;

void printBinary(int num){
    for(int i=7;i>=0;--i){
        cout<<((num>>i)& 1);
    }
    cout<<endl;
}

int main(){
    // for (int i = 0; i < 8; i++)
    // {
    //     printBinary(i);
    //     if(i&1){
    //         cout<<"Odd"<<endl;
    //     }else{
    //         cout<<"Even"<<endl;
    //     }
    // }

    // // divide by 2 & multiply by 2
    // int n=5;
    // cout<<n/2<<endl;
    // cout<<(n>>1)<<endl;
    //101 = (2^2*1 + 2^1*0 + 2^0*1)/2
    // 10=   // (2^1*1 + 2^0*0 + 0)
    //--- 10

    // cout<<n*2<<endl;
    // cout<<(n<<1)<<endl;
    //101 - 1010

    // ((hi+lo)>>1) in bin search

    //Uppercase to lowercase and vice versa 

    // for(char c = 'A'; c<= 'E';c++){

    //     cout<<c<<endl;
    //     printBinary(int(c));
        
    // }

    // for(char c = 'a'; c<= 'e';c++){
    //     cout<<c<<endl;
    //     printBinary(int(c));
    // }

    // char A='A';
    // char a = A| (1<<5);
    // cout<<a<<endl;

    // char c='c';
    // char C = c^(1<<5);
    // cout<<C<<endl;

    // cout<<char(a&(~(1<<5)))<<endl;

    // cout<<char(1<<5);//Space
    // //Upper case to lowercase
    // cout<<char('C'| ' ')<<endl;
    // // lower to upper

    // cout<<char('c'& '_')<<endl;

    







    
}