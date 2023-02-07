#include<bits/stdc++.h>
using namespace std;

void printPowerSet(string str){
    int n = str.length();
    int powSize = pow(2,n);
    // cout<<n<<endl;
    // cout<<powSize<<endl;
    for (int counter = 0; counter < powSize; counter++)
    {
        // cout<<counter<<endl;
        for (int j = 0; j < n; j++)
        {
            if((counter &(1<<j)) != 0){
                cout<<str[j];
            }
        }
        cout<<endl;
    }
    
}
int main(){
    string str;
    cin>>str;
// given a string and u have to print powerset of the string.
    printPowerSet(str);

}