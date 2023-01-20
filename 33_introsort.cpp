#include<bits/stdc++.h>
using namespace std;
int main(){
    /*int arr[]={4,2,5,6,1,0};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    sort(arr+2,arr+n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }*/
    int n;cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}