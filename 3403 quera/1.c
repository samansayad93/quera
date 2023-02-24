#include<stdio.h>

int main(){
    int i;
    double a[4];
    double sum=0,average=0,product=1,max=0,min=10000;
    scanf("%lf %lf %lf %lf",&a[0],&a[1],&a[2],&a[3]);
    for(i=0;i<4;i++){
        sum+=a[i];
    }
    printf("Sum : %.6lf\n",sum);
    average = sum/4;
    printf("Average : %.6lf\n",average);
    for(i=0;i<4;i++){
        product*=a[i];
    }
    printf("Product : %.6lf\n",product);
    for(i=0;i<4;i++){
        if(a[i]>max)
            max = a[i];
    }
    printf("MAX : %.6lf\n",max);
    for(i=0;i<4;i++){
        if(a[i]<min)
            min = a[i];
    }
    printf("MIN : %.6lf\n",min);
}