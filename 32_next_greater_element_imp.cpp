// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n;cin>>n;
//         int arr[n];
//         for (int  i = 0; i < n; i++)
//         {
//             cin>>arr[i];
//         }
//         vector<int>v;
//         for (int i = 0; i < n-1; i++)
//         {
//             for (int j = i; j < n; j++)
//             {
//                 if(arr[j]>arr[i]){
//                     v.push_back(arr[j]);
//                     break;
//                 }
//                 else if(arr[j]<arr[i]){
//                     v.push_back(-1);
//                     break;
//                 }
//             }
//          }
//          for (int i = 0; i < n; i++)
//          {
//             cout<<v[i]<<" ";
//          }
         
        
        
    
//     }
    
// }

// Using NORMAL OR NAIVE METHOD:-
/*#include<bits/stdc++.h>
using namespace std;
void NGEarr(int arr[],int n){
    int i,j;
    // int next_ge = -1; // Think Why?
    for (int i = 0; i < n; i++)
    {
    int next_ge = -1;

        for (int j = i+1; j < n; j++)
        {
            if (arr[j]>arr[i])
            {
                next_ge=arr[j];
                break;
            }
        }  
         cout<<arr[i]<<" - "<<next_ge<<endl;
    }
}
int main(){
    int n;cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    NGEarr(arr,n);

    
}*/

// USING STACKS
#include<bits/stdc++.h>
using namespace std;

void NGE(int arr[],int n){
     stack<int>s;
     s.push(arr[0]);
     for (int i = 1; i < n; i++)
     {
        if(s.empty()){
            s.push(arr[i]);
        }
        while (!s.empty() && s.top()<arr[i])
        {
            cout<<s.top()<<" - "<<arr[i]<<endl;
            s.pop();
        }
        s.push(arr[i]);
        
     }
     while (!s.empty())
     {
        cout<<s.top()<<" - "<<"-1"<<endl;
        s.pop();
     }
     
     
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    NGE(arr,n);
    
}