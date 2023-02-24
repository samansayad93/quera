#include<iostream>

using namespace std;

int main(){
    int p,d,i=1,temp;
    cin>>p>>d;
    temp = d;
    while (true)
    {
        if(temp%p>=0 && temp%p<=(p/2)){
            cout<<temp<<endl;
            break;
        }
        i++;
        temp = d*i;
    }
    
}