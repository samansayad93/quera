#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    switch(n%4){
        case 0:
            cout<<-1*n/4<<' '<<n/4<<endl;
            break;
        case 1:
            cout<<-1*n/4<<' '<<-1*n/4<<endl;
            break;
        case 2:
            cout<<n/4+1<<' '<<-1*n/4<<endl;
            break;
        case 3:
            cout<<n/4+1<<' '<<n/4+1<<endl;
            break;
    }
}