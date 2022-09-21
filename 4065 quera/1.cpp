#include<iostream>

using namespace std;

int main(){
	int a,b,l;
	int a1,b1;
	cin>>a>>b>>l;
	if(l%2==0){
        a1=a*(l/2);
        b1=b*(l/2);
	}
	else if(l%2==1){
        a1=a*((l/2)+1);
        b1=b*(l/2);
	}
    cout<<a1+b1<<endl;
}
