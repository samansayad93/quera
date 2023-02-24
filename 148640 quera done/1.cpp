#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int n,k;
    int answer[20];
    char user[5000][4];
    char a;
    int correct=0,incorrect=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%c",&a);
        switch (a)
        {
        case 'A':
            answer[i] = 0;
            break;
        case 'B':
            answer[i] = 1;
            break;
        case 'C':
            answer[i] = 2;
            break;
        case 'D':
            answer[i] = 3;
            break;
        default:
            i--;
            break;
        }
    }
    scanf("%d",&k);
    for(int i=0;i<n*k;i++){
        for(int j=0;j<4;j++){
            scanf("%c",&a);
            if(a != '\n'){
                user[i][j] = a;
            }
            else{
                j--;
            }
        }
    }
    int r=0,p=0;
    while(r<k){
        for(int t=0;t<n;t++){
            if(user[p][answer[t]] == '#'){
                user[p][answer[t]] = '0';
                if(user[p][0] == '#' || user[p][1] == '#' || user[p][2] == '#' || user[p][3] == '#'){
                    incorrect++;
                }
                else{
                    correct++;
                }
            }
            else if(user[p][0] == '#' || user[p][1] == '#' || user[p][2] == '#' || user[p][3] == '#'){
                incorrect++;
            }
            p++;
        }
        printf("%d\n",(correct*3)-incorrect);
        correct = 0;
        incorrect = 0;
        r++;
    }
}