#include<bits/stdc++.h>
using namespace std;
int OddOccuring(int n,int arr[]){
    int res =0;
    for (int i = 0; i < n; i++)
    {
        res = (res^arr[i]);
    }
    return res;
}

int main(){
    int arr[]={2,4,2,3,3,3,3};
    // print a no which is occuring odd times in given a given array.
    cout<<OddOccuring(7,arr)<<endl;
}

