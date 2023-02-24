#include<iostream>

using namespace std;

int main(){
    int n;
    string s;
    cin>>n>>s;
    for(int i=0;i<n;i++){
        if(s[i] == s[i+n]){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
}