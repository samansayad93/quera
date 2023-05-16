#include <iostream>

using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int dif1,dif2;
    dif1 = a-b;
    dif2 = c-d;
    if(dif1 < dif2){
        cout<<"Namakestan"<<endl;
    }
    else if (dif1 == dif2){
        cout<<"Equal"<<endl;
    }
    else{
        cout<<"Shekarestan"<<endl;
    }
}