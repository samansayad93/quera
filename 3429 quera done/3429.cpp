#include<iostream>

using namespace std;

int steam(int n){
    if(n>100){
        cout<<"Steam"<<endl;
    }
}

int water(int n){
    if(n<=100){
        if(n>=0){
            cout<<"Water"<<endl;
        }
    }
}

int ice(int n){
    if(n<0){
        cout<<"Ice"<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    steam(n);
    water(n);
    ice(n);
}
