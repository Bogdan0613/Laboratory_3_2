#include <iostream>
using namespace std;
float factorial(int part){
    int fact=1;
    for(int i=1;i<=part;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    float k;
    float epsilon, sum=0;
    cout<<"k:";
    cin>>k;
    cout<<"epsilon:";
    cin>>epsilon;
    // f(k)=k/(k+1)!
    int part=k+1;
    while(k/factorial(part)>=epsilon){
        part=k+1;
        sum+=k/factorial(part);
        cout<<k/factorial(part)<<endl;
        k++;
    }

    cout<<"Sum:"<<sum;
}
