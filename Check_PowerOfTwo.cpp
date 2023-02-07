#include<bits/stdc++.h>
using namespace std;


// T.c == O(logn)
bool ispow2(int n){
    if(n==0){
        return false;
    }
    while(n!=1){
        if(n%2==1){
            return false;
        }
        n /= 2;

    }
    return true;
}

// T.c==O(1)
/* n= 7 -- 0111
      6 -- 0110
               7 & 6 = 
*/

bool ispower2(int n){
    if(n==0){
        return false;
    }
    if(n&(n-1)!=0){
        return false;
    }
    return true;
}

int main(){
    int n;cin>>n;
    cout<<ispow2(n)<<endl;
    cout<<ispower2(n)<<endl;

    if(__builtin_popcount(n)==1){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}