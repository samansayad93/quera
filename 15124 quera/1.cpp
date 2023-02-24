#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int a,b,x,count = 0,i=1,temp;
    cin>>a>>b>>x;
    temp = a;
    while(temp+b <= x){
        temp = a * i;
        i++;
        if((x-temp)%b == 0){
            count++;
        }
    }
    cout<<pow(2,count)<<endl;
}