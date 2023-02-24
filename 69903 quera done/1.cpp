#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int m1,m2,d1,d2;
    int days=0;
    cin>>m1>>d1>>m2>>d2;
    if(m1>m2){
        m1 += m2;
        m2 = m1-m2;
        m1 -= m2;
        d1 += d2;
        d2 = d1-d2;
        d1 -= d2;
    }
    if(m1<=6 && m2<=6){
        days += ((m2-m1)*31)+d2-d1;
    }
    else if(m1<=6 && m2>6){
        if(m2 == 12){
            days += 5*30;
            days += ((6-m1)*31)+31-d1;
            days += d2;
        }
        else{
            days += ((6-m1)*31)+31-d1;
            days += ((m2-7)*30)+d2;
        }
    }
    else{
        days += ((m2-m1)*30)+d2-d1;
    }
    cout<<abs(days)<<endl;
}