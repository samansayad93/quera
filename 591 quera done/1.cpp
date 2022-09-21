#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"*";
    }
    cout<<endl;
    for(int r=0;r<n-2;r++){
        cout<<"*";
        for(int i=0;i<n-2;i++){
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
    for(int i=0;i<n;i++){
        cout<<"*";
    }
}
