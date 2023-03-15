#include <iostream>

using namespace std;

int main(){
    int a;
    int n[200],t[200],t2[200];
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>n[i]>>t[i]>>t2[i];
    }
    for(int i=0;i<a;i++){
        cout<<(n[i] - 1)*t2[i] + n[i]*t[i]<<endl;
    }
}