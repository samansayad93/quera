#include<iostream>
#include<string.h>

using namespace std;

int func(string a){
    string m = "MOLANA";
    string h = "HAFEZ";
    if(a.find(m) != string::npos){
        return 1;
    }
    else if(a.find(h) != string::npos){
        return 1;
    }
    return 0;
}

int main(){
    string a[5];
    int k=0;
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    for(int i=0;i<5;i++){
        if(func(a[i]) != 0){
            cout<<i+1<<" ";
            k++;
        }
    }
    if(k == 0){
        cout<<"NOT FOUND!"<<endl;
    }
}