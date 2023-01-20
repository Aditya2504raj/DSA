#include<bits/stdc++.h>
using namespace std;


string isBalanced(string s) {
    unordered_map<char,int>m={{'[',-1},{'{',-2},{'(',-3},{']',1},{'}',2},{')',3}};
    stack<char>st;
   for(char bracket :s ){
    if(m[bracket]<0){
        st.push(bracket);
    }
    else{
        if(st.empty())
            return "No";
        char top = st.top();
        st.pop();
        if(m[top]+m[bracket]!=0){
            return "No";
        }
    }
   }
   if(st.empty()){
    return "Yes";
   }
    else{
        return "No";
    }
}


int main(){
    int n;
    cin>>n;
    while (n--)
    {
        string s;
        cin>>s;
        cout<<isBalanced(s);
    }

    
}