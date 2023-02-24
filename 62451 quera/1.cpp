#include<iostream>

using namespace std;

int main(){
    int x1,x2,v1,v2;
    cin>>x1>>v1>>x2>>v2;
    if(v1 == v2){
        cout<<"WAIT WAIT"<<endl;
    }
    else if(v1 * v2 > 0){
        if(v1 * x1 >= v2 * x2){
            cout<<"SEE YOU"<<endl;
        }
        else{
            cout<<"BORO BORO"<<endl;
        }
    }
    else if(v1 * v2 == 0){
        
    }
    else{
        cout<<"BORO BORO"<<endl;
    }
}