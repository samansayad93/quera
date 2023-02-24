#include<stdio.h>

void shift(char* string,int n){
    char temp,temp2;
    temp = string[0];
    for(int i=0;i<n;i++){
        temp2 = string[i]; 
        string[i] = temp;
        temp =temp2;
    }
    string[0] = temp2;
}

void func(char* string,int n){
    char temp;
    for(int i=0;i<n;i++){
        if(string[i] == 122){
            string[i] = 97;
        }
        else{
            temp = string[i];
            temp++;
            string[i] = temp;
        }
    }
}

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    char string[100];
    scanf("%s",string);
    while(k>0){
        shift(string,n);
        func(string,n);
        k--;
    }
    printf("%s",string);
}