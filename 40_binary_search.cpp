#include<bits/stdc++.h>
using namespace std;
// int binary_search(vector<int>v,int n,int key){

//     int start = 0,end=n-1;
//     // int mid=(start+end)/2;
//     while (end-start>1)
//     {
//     int mid=(start+end)/2;


//         mid = (start+end)/2;
//     }
//     return -1;
    
// }

int main(){

    int n;cin>>n;
    vector<int>v(n);

    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    int to_find;cin>>to_find;
    sort(v.begin(),v.end());
    int low = 0,high=n-1;
    while (high-low>1)
    {
        int mid = (low+high)/2;
        if(v[mid]<to_find){
            low = mid+1;
        }
        else{
            high = mid;
        }
    }
    if(v[low]==to_find){
        cout<<low<<endl;
    }else if(v[high]==to_find){
        cout<<high<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }
    
    
}
