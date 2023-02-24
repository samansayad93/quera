#include<iostream>

using namespace std;

int main(){
    int n;
    float m,bmi;
    cin>>n>>m;
    bmi=n/(m*m);
    if(bmi>10){
        cout.precision(4);
    }
    else{
        cout.precision(3);
    }
    cout<<bmi<<endl;
    if(bmi<18.5){
        cout<<"Underweight"<<endl;
    }
    else if(bmi<25&&bmi>=18.5){
        cout<<"Normal"<<endl;
    }
    else if(bmi<30&&bmi>=25){
        cout<<"Overweight"<<endl;
    }
    else if(bmi>=30){
        cout<<"Obese"<<endl;
    }
}
