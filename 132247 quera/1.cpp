#include<iostream>
#include<string.h>

using namespace std;

int main(){
    int n,flag = 0;
    cin>>n;
    string string1[1000];
    string string2[1000];
    for(int i=0;i<n;i++){
        cin>>string1[i];
    }
    for(int i=0;i<n-1;i++){
        cin>>string2[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(string1[i] == string2[j]){
                flag = 1;
            }
        }
        if(flag == 0){
            cout<<string1[i]<<endl;
            return 0;
        }
        flag = 0;
    }
}