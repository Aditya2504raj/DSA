#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=4,b=6;

    /*1 0 --> 1
    0 1 --> 1
    0 0 --> 0
    1 1 --> 0
     
    5 - 101^101=000
    101^000 = 101
    x^x = 0
    x^0 = x
    x^y^z= y^x^z = 
    */
    
    // Swap two numbers

    a = a^b;

    b = b^a;//b--a
    //b= b^(a^b)=b^b^a=0^a=a

    a= a^b;//a--b 

    cout<<a<<" "<<b<<endl;

    /***Given array a of n int. all int are 
     * present in even count except one.
     * Find that one int which has odd count 
     * in O(N) time comp and O(1) space;
     * N<10^5
     * a[i]<10^5
     * */
    int n;cin>>n;int x;
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        ans ^= x;
    }
    cout<<ans<<endl;
    
    
    
    

}