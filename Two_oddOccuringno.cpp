#include<bits/stdc++.h>
using namespace std; 

// Check kth bit is set or not:
bool checksetbit(int n,int k){
    if((n&(1<<(k-1))) != 0){
        return true;
    }
    return false;
}


void oddOccurence(int arr[],int n){
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        temp = (temp^arr[i]);
    }
    int cnt = 1; // cnt rep kitne bit baad set-bit 1 hua hai
    while((temp&1)!=1){
        cnt++;
        temp = (temp>>1);
    }
    cout<<cnt<<endl;
    vector<int>v1;
    vector<int>v2;

    for (int i = 0; i < n; i++)
    {
        if((checksetbit(arr[i],cnt))==1){
            v1.push_back(arr[i]);
        }
        else{
            v2.push_back(arr[i]);
        }
        // cout<<checksetbit(arr[i],cnt)<<" ";
    }
    int res1=0,res2=0;
    for (int i = 0; i < v1.size(); i++)
    {
        res1 = (res1^v1[i]);
    }

    for (int i = 0; i < v2.size(); i++)
    {
        res2 = (res2^v2[i]);
    }
    
    cout<<res1<<" "<<res2<<endl;

}
 
int main(){
    int n;cin>>n;
    int arr[n];
    // arr[]={1,1,22,22,22,33,1,5,1,5}; ==o/p = 22,33
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    oddOccurence(arr,n);
    
}