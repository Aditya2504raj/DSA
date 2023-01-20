#include<bits/stdc++.h>
using namespace std;
// int lower_bound(vector<int>v,int n,int key){
//     int low =0,high=n-1,mid;
//     while (high-low>1)
//     {
//         mid = (low + high)/2;
//         if(key<=v[mid]){
//             high = mid;
//         }
//         else{
//             low = mid+1;
//         }
//         mid = (low + high)/2;
//     }
//     if(v[low]==key){
//         return low;
//     }
//     if(v[high]>=key){
//         return high;
//     }
//     return -1;

    
// }
int upper_bound(vector<int>v,int n,int key){
    int low =0,high=n-1,mid;
    while (high-low>1)
    {
        mid = (low + high)/2;
        if(v[mid]<=key){
            low=mid+1;
        }
        else{
            high = mid;
        }
        mid = (low + high)/2;
    }
    if(v[low]>key){
        return low;
    }
    if(v[high]>key){
        return high;
    }
    return -1;

    
}

int main(){
    int n;cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int element;cin>>element;
    // cout<<lower_bound(v,n,element)<<endl;
    cout<<upper_bound(v,n,element)<<endl;
    
}