#include<iostream>

using namespace std;

int main(){
    int t,a,b,total=1,i=1;
    int ar=0,ma=0;
    cin>>t>>a>>b;
    while(total<=t){
        if(i%4 == 1){
            ar++;
            total += a;
        }
        else if(i%4 == 3){
            ma++;
            total += b;
        }
        else{
            total ++;
        }
        i++;
    }
    cout<<ar<<' '<<ma<<endl;
}