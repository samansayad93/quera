#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    int k;
    cin>>k;
    for(int i=1;i<=k;i++){
        s += to_string(i);
    }
    cout<<s[k-1]<<endl;;
}