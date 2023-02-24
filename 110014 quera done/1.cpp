#include<iostream>

using namespace std;

int main(){
    char a,b,c,d;
    cin>>a>>b>>c>>d;
    if (a == b){
        cout<<"YES"<<endl;
    }
    else if(c == d){
        cout<<"YES"<<endl;
    }
    else if (a == d || b == c){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}