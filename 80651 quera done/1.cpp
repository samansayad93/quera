#include<iostream>

using namespace std;

int main(){
    int a1,b1,a2,b2,a3,b3;
    int total=0;
    cin>>a1>>b1>>a2>>b2>>a3>>b3;
    if(a1 <= b1)
        total += a1;
    else
        total += b1;
    if(a2 <= b2)
        total += a2;
    else
        total += b2;
    if(a3 <= b3)
        total += a3;
    else
        total += b3;
    cout<<total<<endl;
}