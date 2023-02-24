#include<iostream>
#include<string.h>

using namespace std;

int check(string a,string b){
    int len = b.length();
    int lenght = a.length();
    int flag = 0;
    for(int i=0;i<lenght;i++){
        for(int j=0;j<len;j++){
            if(a[i] == b[j]){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            return 1;
        }
        flag = 0;
    }
    return 0;
}

int main(){
    int n;
    cin>>n;
    string t;
    string s[1000];
    cin>>t;
    for(int i=0;i<n;i++){
        cin>>s[i];
        if(check(s[i],t)){
            cout<<"No"<<endl;
            continue;
        }
        cout<<"Yes"<<endl;
    }
}