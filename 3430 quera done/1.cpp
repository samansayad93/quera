#include<iostream>
#include<string.h>

using namespace std;

int main(){
    string input;
    cin>>input;
    int lenght = input.length();
    int j=1;
    for(int i=0;i<lenght;i++){
        for(int k=0;k<j;k++){
            cout<<input[i];
        }
        for(int k=i+1;k<lenght;k++){
            cout<<input[k];
        }
        cout<<endl;
        j++;
    }
}