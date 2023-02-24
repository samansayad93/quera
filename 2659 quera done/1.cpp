#include<iostream>
#include<string.h>

using namespace std;

int main(){
    int n,count=0;
    string s2,s1;
    cin>>n;
    cin>>s1>>s2;
    for(int i=0;i<n;i++){
        if(s1[i] != s2[i]){
            count++;
        }
    }
    cout<<count<<endl;
}