#include <iostream>

using namespace std;

int main(){
    long a,b,c;
    cin>>a>>b>>c;
    int count = 0 ;
    long average = (a+b+c)/3;
    if(a != average && b != average && c != average){
        count += 2;
    }
    else if(a != average || b != average || c != average){
        count++;
    }
    cout<<count<<endl;
}