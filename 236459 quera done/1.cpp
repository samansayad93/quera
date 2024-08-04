#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    double n,m;
    cin>>n>>m;
    int temp;
    int prev =0;
    double sum =0;
    for(int i=0;i<m;i++){
        cin>>temp;
        sum += ceil(abs(prev - temp)/n);
        prev = temp;
    }
    sum += m + ceil(prev/n);
    cout<<sum<<endl;
}