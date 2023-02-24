#include<iostream>

using namespace std;

int main(){
    int n,m,star=0;
    cin>>n>>m;
    char a;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a;
            if(a == '*'){
                star++;
            }
        }
    }
    cout<<star<<endl;
}