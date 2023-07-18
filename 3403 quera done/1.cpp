#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double a[4];
    double sum =0,product=1;
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    double min = a[0],max = a[3];
    for(int i=0;i<4;i++){
        sum += a[i];
        product *= a[i];
        if(a[i] > max){
            max = a[i];
        }
        if(a[i] < min){
            min = a[i];
        }
    }
    cout<<fixed<<setprecision(6);
    cout<<"Sum : "<<sum<<endl;
    cout<<"Average : "<<sum/4<<endl;
    cout<<"Product : "<<product<<endl;
    cout<<"MAX : "<<max<<endl;
    cout<<"MIN : "<<min<<endl;
}