#include<iostream>

using namespace std;

int check(float a,float b){
    float c = 0;
    while(c<=b){
        c += 0.5;
        b -= 0.5;
        if(a+c>b && a+b>c && b+c>a){
            return 1;
        }
    }
    return 0;
}

int main(){
    float a,b;
    cin>>a>>b;
    if(a>b){
        float temp = a;
        a = b;
        b = temp;
    }
    else if(a == b){
        cout<<"NO"<<endl;
        return 0;
    }
    if(check(a,b) == 1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}