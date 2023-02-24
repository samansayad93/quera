#include<stdio.h>
#include<math.h>

int main(){
    int a,b;
    int input,temp10=0,i=0,output=0,reoutput=0;
    int temp;
    scanf("%d",&input);
    scanf("%d %d",&a,&b);
    while(input > 0){
        temp = input % 10;
        temp10 += pow(a,i)*temp;
        input /= 10;
        i++;
    }
    i=0;
    while(temp10>0){
            output += (temp10%b)*pow(10,i);
            temp10 = temp10/b;
            i++;
    }
    i=0;
    temp = output;
    while(temp>0){
        temp /= 10;
        i++;
    }
    i--;
    temp = output;
    while (temp>0){
        reoutput += (temp%10)*pow(10,i);
        //printf("%d\n",reoutput);
        temp /= 10;
        i--;
    }
    //printf("%d %d\n",reoutput,output);
    if(reoutput == output){
        printf("YES");
    }
    else{
        printf("NO");
    }
    
}