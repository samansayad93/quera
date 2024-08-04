#include <iostream>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    if((2*a+b)%2 == 0){
        if(b == 0 && a%2 == 1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;
}