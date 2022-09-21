#include<iostream>

using namespace std;

int arrow(int c){
    if(c>=11){
        cout<<"Left";
    }
    else{
        cout<<"Right";
    }
}

int row(int r){
    int a=11-r;
    cout<<a;
}

int column(int c){
    if(c>=11){
        int b=21-c;
        cout<<b;
    }
    else{
        int b=c;
        cout<<b;
    }
}

int main(){
    int r,c;
    cin>>r>>c;
    arrow(c);
    cout<<" ";
    row(r);
    cout<<" ";
    column(c);
}
