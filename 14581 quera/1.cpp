#include<iostream>

using namespace std;

int main(){
    long long n;
    cin>>n;
    long long sum =0;
    for(long long i=0;i<=n/2;i++){
        sum += i;
    }
    float result;
    if(n%2 == 1){
        result = (float)sum*2 / (n+1);
    }
    else{
        result = (float)(sum*2-(n/2)) / (n+1);
    }
    cout<<result<<endl;
}