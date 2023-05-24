#include<iostream>

using namespace std;

int main(){
    long long n;
    cin>>n;
    long long x = n/2;
    long long sum = x*(x+1)/2;
    double result;
    if(n%2 == 1){
        result = (double)sum*2 / (n+1);
    }
    else{
        result = (double)(sum*2-x) / (n+1);
    }
    cout<<result<<endl;
}