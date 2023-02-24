#include<iostream>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    if(a == 0){
        if(b == 0){
            cout<<"infinite"<<endl;
        }
        else{
            cout<<"invalid"<<endl;
        }
    }
    else{
        cout<<"unique"<<endl;
    }
}