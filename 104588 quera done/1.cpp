#include<iostream>

using namespace std;

int main(){
    int a[5],count=0;
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    for(int i=0;i<5;i++){
        if(a[i] >= 80){
            count++;
        }
    }
    if(count>=3){
        cout<<"Mamma mia!"<<endl;
    }
    else if(count>=1){
        cout<<"Mamma mia!!"<<endl;
    }
    else{
        cout<<"Mamma mia!!!"<<endl;
    }
}