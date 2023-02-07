#include<bits/stdc++.h>
using namespace std;

// t.c = O(total bits in binary rep of n );
int cntSetBit(int n){
    int cnt = 0;
    while (n!=0)
    {
        if(n&1==1){
            cnt++;
        }
        n = (n>>1);
    }
    return cnt;
}
/* when we subtract 1 from a no. all the 0s after the last set bit becomes 1 and last set bit become 0
   eg n=40 ---  101000
      n-1=39 -- 100111 
*/


// brian kerningam's algorithm -- gives no of setbit in a given no;
// T.c= O(set bit cnt)
int brian_kerningam(int n){
    int ans = 0;
    while(n>0){
        n=(n&(n-1));
        ans++;
    }
    return ans;

}

// table method to cnt set bits

int main(){
    int n;cin>>n;
    cout<<cntSetBit(n)<<endl;
    cout<<brian_kerningam(n)<<endl;
    cout<<__builtin_popcount(n)<<endl;
}