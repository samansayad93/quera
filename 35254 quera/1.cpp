#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int n,s,t;
    int big,small;
    int count=0,count2=0,temp=1;
    string k;
    cin>>n;
    cin>>k;
    cin>>s>>t;
    if(s>=t){
        big = s;
        small = t;
    }
    else{
        big = t;
        small = s;
    }
    for(int i=small;i<big-1;i++){
        if (k[i] == 'H'){
            count++;
        }
    }
    int i=1;
    while(count>0){
        while(temp*2 <= count){
            temp = pow(2,i);
            i++;
        }
        count -= temp;
        count2++;
    }
    cout<<count2<<endl;
}