#include<bits/stdc++.h>
using namespace std;
int main(){
    // int n;cin>>n;
    // int a[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>a[i];
    // }
    // sort(a,a+n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    // // lower bound and upper bound function returns the location of element
    // int *ptr = upper_bound(a+3,a+n,5);// log(n)
    // if(ptr == a+n){
    //     cout<<"Not found"<<endl;
    //     return 0;
    // }
    // cout<<*ptr<<endl;


 // vector
//  int n;cin>>n;
//     vector<int>a(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
//     sort(a.begin(),a.end());
//     for (int i = 0; i < n; i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
//     // lower bound and upper bound function returns the location of element
//     auto it = upper_bound(a.begin(),a.end(),25);// log(n)
//     if(it == a.end()){
//         cout<<"Not found"<<endl;
//         return 0;
//     }
//     cout<<*it<<endl;


// set 

int n;cin>>n;
   set<int>s;
   for (int i = 0; i < int(1e6); i++)
   {
    // int x;cin>>x;
    s.insert(rand());
   }
   for(int i = 0; i<int(1e6);i++){
   auto it = s.lower_bound(rand()); //O(logn)
   }
//    cout<<*it<<endl;
   
}