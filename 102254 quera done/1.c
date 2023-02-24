#include<stdio.h>
#include<string.h>

char string[10000];
char string2[10000];

void sort(char *string){
    int lenght = strlen(string);
    char temp;
    for(int i=0;i<lenght-1;i++){
        for(int i=1;i<lenght;i++){
            if(string[i] < string[i-1]){
                temp = string[i];
                string[i] = string[i-1];
                string[i-1] = temp;
            }
        }
    }
}

void check(char* string){
    int arr[10] = {0};
    int lenght = strlen(string);
    int count = 0,flag = 0,temp;
    strcpy(string2,string);
    for(int i=0;i<lenght;i++){
        arr[string[i]-48] ++;
    }
    for(int i=0;i<10;i++){
        if(arr[i] != 0){
            string[count] = i+48;
            count++;
        }
    }
    for(int i=0;i<10;i++){
        if(arr[i] > 1){
            temp = arr[i];
            while(temp > 0){
                string[count] = (temp%10) + 48;
                temp /= 10;
                count++;
            }
        }
    }
    string[count] = '\0';
    if(strcmp(string,string2) == 0){
        return;
    }
    return check(string);
}

int main(){
    scanf("%s",string);
    check(string);
    sort(string);
    printf("%s\n",string);
}