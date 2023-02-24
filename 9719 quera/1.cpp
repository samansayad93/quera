#include<iostream>
#include<math.h>

using namespace std;

int mirror(int a){
    int i=0,ret=0,temp;
    temp = a;
    while(temp>0){
        temp/=10;
        i++;
    }
    while(a>0){
        ret += (a%10)*pow(10,i-1);
        a /= 10;
        i--;
    }
    return ret;
}

int mabna(int a,int b){
    if(a<10){
        return a;
    }
    return (a%b)+(mabna(a/b,b)*10);
}

int main(){
    int a=1,b,c,d,e;
    cin>>b;
    while(a<300){
        c = pow(a,2);
        d = mabna(c,b);
        e = mirror(d);
        //cout<<a<<' '<<d<<' '<<e<<endl;
        if(mirror(d) == d){
            cout<<a<<' '<<d<<endl;
        }
        a++;
    }
}