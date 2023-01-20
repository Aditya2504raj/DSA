#include<bits/stdc++.h>
using namespace std;

// function to print binary of any no. :-
void printBinary(int num){
   for(int i=7;i>=0;--i){
    cout<<((num>>i)&1);
   } 
   cout<<endl;
}

int main(){
    // unset = 0
    // set = 1
    int num;cin>>num;
    printBinary(num);
    int a = num;
    int i;cin>>i;
    // if((a&(1<<i)) !=0){
    //     cout<<"Set bit";
    // }else{
    //     cout<<"not set bit";
    // }
    // cout<<endl;

    // bit set banana hai:
    // printBinary(a|(1<<i));

    // bit ko unset 
    printBinary(a&(~(1<<i)));
    
    // toggle
    printBinary(~a);

    // toggle a bit
    
    printBinary(a^(1<<i));

    // bit count

    int ct =0;
    for(int i=31;i>=0;--i){
        if ((a&(1<<i))!=0)
        {
            ct++;
        }
    }
    cout<<ct<<endl;

    cout<<__builtin_popcount(a)<<endl;
    cout<<__builtin_popcountll((1LL<<35)-1)<<endl;

}