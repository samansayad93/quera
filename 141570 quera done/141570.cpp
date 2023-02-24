#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    switch(n){
        case 0:
            cout<<"out"<<endl;
            break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            cout<<"white"<<endl;
            break;
        case 7:
        case 8:
        case 9:
        case 10:
            cout<<"black"<<endl;
            break;
    }
}