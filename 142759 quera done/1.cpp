#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s="quera";
    for(int i=0;i<n;i++){
        cout<<s[i%5];
    }
    cout<<endl;
}