#include<iostream>
#include<string>
#include<string.h>

using namespace std;

int check1(string str){
    int lenght = str.length();
    int count = 0;
    for(int i=0;i<lenght;i++){
        for(int j=i+1;j<lenght;j++){
            if(str[i] == str[j]){
                count++;
            }
        }
        if(count>=3){
            return 1;
        }
        count = 0;
    }
    return 0;
}

int check2(string str){
    int lenght = str.length();
    int count = 0;
    for(int i=0;i<lenght;i++){
        for(int j=i+1;j<lenght;j++){
            if(str[i] == str[j]){
                count++;
            }
            else{
                break;
            }
        }
        if(count>=2){
            return 1;
        }
        count = 0;
    }
    return 0;
}

int check3(string str){
    string temp=str;
    int j = 0;
    for (int i = str.length()-1; i >= 0; i--){
        temp[i] = str[j];
        j++;
    }
    if(temp == str){
        return 1;
    }
    return 0;
}

int main(){
    string str[1000];
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>str[i];
    }
    for(int i=0;i<t;i++){
        if(check1(str[i])){
            cout<<"Ronde!"<<endl;
        }
        else if(check2(str[i])){
            cout<<"Ronde!"<<endl;
        }
        else if(check3(str[i])){
            cout<<"Ronde!"<<endl;
        }
        else{
            cout<<"Rond Nist"<<endl;
        }
    }
}