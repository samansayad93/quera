#include<iostream>
#include<string.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int i=s.length();
    for(i;i>0;i--){
        cout<<s[i-1];
    }
    cout<<endl;
}