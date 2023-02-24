#include<stdio.h>
#include<string.h>

struct person{
    char name[30];
    int money;
};

int main(){
    int n;
    struct person p[10];
    char name1[30], name2[30];
    int money1,count;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",p[i].name);
        p[i].money = 0;
    }
    for(int i=0;i<n;i++){
        scanf("%s",name1);
        scanf("%d %d",&money1,&count);
        if(count == 0){
            continue;
        }
        for(int y=0;y<n;y++){
            if(strcmp(p[y].name,name1) == 0){
                if(money1%count != 0){
                    p[y].money += money1%count;
                }
                p[y].money -= money1;
                break;
            }
        }
        for(int y=0;y<count;y++){
            scanf("%s",name2);
            for(int z=0;z<n;z++){
                if(strcmp(p[z].name,name2) == 0){
                    p[z].money += money1/count;
                    break;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%s %d\n",p[i].name,p[i].money);
    }
}