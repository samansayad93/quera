#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[1000],b[1000],c[1000],d[1000];
    for(int i=0;i<n;i++){
        scanf("%d%d%d%d",&a[i],&b[i],&c[i],&d[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]+c[i]>b[i]+d[i])
            printf("perspolis\n");
        else if(a[i]+c[i]<b[i]+d[i])
            printf("esteghlal\n");
        else if(a[i]+c[i] == b[i]+d[i]){
            if(b[i]>c[i])
                printf("esteghlal\n");
            else if(c[i]>b[i])
                printf("perspolis\n");
            else if(c[i] == b[i])
                printf("penalty\n");
        }
    }
    return 0;
}