#include<iostream>

using namespace std;

int main(){
    int a,b,i=1,count=0;
    cin>>a>>b;
    while(a<=b){
        while (i<=a)
        {
            if(a%i == 0){
                count++;
            }
            i++;
        }
        if(count == 2){
            cout<<a<<endl;
        }
        i=1;
        count = 0;
        a++;
    }
}