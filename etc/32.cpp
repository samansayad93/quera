#include<iostream>

using namespace std;

int main(){
    int a;
    string b;
    string A[6];
  //  string A1,A2,A3,A4,A5,A6,A7;
    cin>>a;
 //   A1="somagh";
 //   A2="sonbol";
 //   A3="senjed";
 //   A4="sib";
 //   A5="serkeh";
 //   A6="sekeh";
 //   A7="samanoo";
    A[1]="somagh";
    A[2]="sonbol";
    A[3]="senjed";
    A[4]="sib";
    A[5]="serkeh";
    A[6]="sekeh";
    A[0]="samanoo";

    for(a;a>0;a--){
        cout<<A[a-1]<<endl;
    }
}
