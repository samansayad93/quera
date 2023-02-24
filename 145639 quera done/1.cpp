#include<iostream>

using namespace std;

int main(){
    int s,f,l,x;
    cin>>s>>f>>l>>x;
    if(x>=f){
        cout<<"exam finished!"<<endl;
    }
    else if(x<s){
        cout<<"exam did not started!"<<endl;
    }
    else{
        if(f-x > l){
            cout<<l<<endl;
        }
        else{
            cout<<f-x<<endl;
        }
    }
}