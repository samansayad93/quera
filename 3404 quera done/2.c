#include <stdio.h>

int main(){
    float m,l;
    float BMI;
    scanf("%f %f",&m,&l);
    BMI= m /(l*l);
    printf("%.2f\n",BMI);
    if(BMI<18.5){
        printf("Underweight\n");
    }
    else if(BMI>=18.5 && BMI<=24.9){
        printf("Normal\n");
    }
    else if(BMI>=25 && BMI<=29.9){
        printf("Overweight\n");
    }
    else{
        printf("Obese\n");
    }
}
