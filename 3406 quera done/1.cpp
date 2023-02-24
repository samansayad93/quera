#include<iostream>
#include<math.h>

using namespace std;

int reverse(int n,int i){
	if(n<10){
		return n;
	}
	i--;
	return (n%10)*pow(10,i) + reverse(n/10,i);
}

int main(){
	int a,b,ar,br;
	cin>>a>>b;
	ar = reverse(a,3);
	br = reverse(b,3);
	if( ar == br){
		cout<<a<<" = "<<b<<endl;
	}
	else if(ar>br){
		cout<<b<<" < "<<a<<endl;
	}
	else{
		cout<<a<<" < "<<b<<endl;
	}
}
