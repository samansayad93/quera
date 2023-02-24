#include<stdio.h>

int n;

int search (int arr[][2],int i,int j){
    for(int k=0;k<n;k++){
        if(arr[k][0] == i+1 && arr[k][1] == j+1){
            return 1;
        }
    }
    return 0;
}

int check(int arr[][2],int i,int j,int x,int y){
    if(i < 0 || i >= x){
        return 0;
    }
    if(j < 0 || j >= y){
        return 0;
    }
    if(search(arr,i,j) == 1){
        return 1;
    }
    else{
        return 0;
    }
}

int func(int arr[][2],int i,int j,int x,int y){
    int count =0;
    count += check(arr,i-1,j-1,x,y);
    count += check(arr,i-1,j,x,y);
    count += check(arr,i-1,j+1,x,y);
    count += check(arr,i,j-1,x,y);
    count += check(arr,i,j+1,x,y);
    count += check(arr,i+1,j-1,x,y);
    count += check(arr,i+1,j,x,y);
    count += check(arr,i+1,j+1,x,y);
    return count;
}

int main(){
    int x,y;
    scanf("%d %d %d",&x,&y,&n);
    int arr[10000][2]={0};
    int x1,y1;
    for(int i=0;i<n;i++){
        scanf("%d %d",&x1,&y1);
        arr[i][0] = x1;
        arr[i][1] = y1;
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if(check(arr,i,j,x,y) == 1){
                printf("* ");
            }
            else{
                printf("%d ",func(arr,i,j,x,y));
            }
        }
        printf("\n");
    }
}