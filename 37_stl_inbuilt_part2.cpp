#include<bits/stdc++.h>
using namespace std;
// bool ispositive(int x){
//     return x>0;
// }
int main(){
    //lambda funcn;
    // cout<<[](int x){return x+2;}(4);

    // auto sum = [](int x,int y){return x+y;};
    // cout<<sum(2,6);

    vector<int>v={-2,-3,5};
    cout<<all_of(v.begin(),v.end(),
            [](int x){return x>0;})<<endl;
    // cout<<all_of(v.begin(),v.end(),ispositive);
    cout<<any_of(v.begin(),v.end(),
            [](int x){return x>0;})<<endl;
    cout<<none_of(v.begin(),v.end(),
            [](int x){return x>0;})<<endl;
    
    vector<int>v1={2,4,6,8};
    cout<<all_of(v1.begin(),v1.end(),
            [](int x){return x%2==0;})<<endl;
      
}