#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<string.h>

char * check(char *string){
    int lenght = strlen(string);
    int upper=0,lower=0,vovel =0;
    for(int i=0;i<lenght;i++){
        if(islower(string[i])){
            switch (string[i])
            {
                case 'u':
                case 'e':
                case 'i':
                case 'o':
                case 'a':
                case 'y':
                    vovel++;
                    lower = 0;
                    break;
                default:
                    lower++;
                    break;
            }
        }
        else{
            upper ++;
        }
        if(lower >= 5){
            return string;
        }
    }
    if(upper == lenght){
        return NULL;
    }
    else{
        lower += upper;
    }
    if(lower >= 5){
        return string;
    }
    return NULL;
}

int main()
{
    int bytes_read;
    size_t size =10;
    char *str,*token,*result;
    
    str = (char *) malloc (size);
    bytes_read = getline(&str,&size,stdin);
    for(int i=0;i<bytes_read;i++){
        if(isalpha(str[i]) == 0){
            str[i] = ' ';
        }
    }
    token = strtok(str," ");
    while(token != NULL){
        result = check(token);
        token = strtok(NULL," ");
        if(result != NULL){
            printf("%s ",result);
        }
    }
}