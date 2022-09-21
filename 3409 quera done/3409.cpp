#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int r=1;r<=n;r++){
            cout<<i*r<<' ';
        }
        cout<<endl;

    }
}
