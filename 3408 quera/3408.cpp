#include<iostream>

using namespace std;

int main(){
    int n;
    string a[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=n;i>=0;i--){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
