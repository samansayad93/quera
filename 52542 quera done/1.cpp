#include<iostream>

using namespace std;

int main(){
    int n,a[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i] > 3){
            cout<<"*"<<endl;
        }
        else{
            for(int j=0;j<a[i];j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
}