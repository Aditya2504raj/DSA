#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int min = *min_element(v.begin(),v.end()); // min_element return location
    cout<<min<<endl;

    int max = *max_element(v.begin(),v.end());
    cout<<max<<endl;

    int sum = accumulate(v.begin(),v.end(),10);
    cout<<sum<<endl;

    int ct = count(v.begin()+1,v.end(),2);
    cout<<ct<<endl;

    auto it = find(v.begin(),v.end(),10);
    // cout<<*it<<endl;
    if(it !=v.end()){
        cout<<*it<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    reverse(v.begin()+1,v.end());
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    string s= "hsjdahfjdsh";
    reverse(s.begin()+1,s.end());
     cout<<s<<endl;
    
}