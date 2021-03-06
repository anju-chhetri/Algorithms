#include <iostream>
#include <cmath>
#include <typeinfo>
#define func(x) (log(x)+pow(x,2) - 12)
using namespace std;
int calculate(float, float, float);
void bisection(float, float, int);
// Bisection method

int main(){
    float a, b,e;
    cout<<"Enter number a, b and e \n";
    cin>>a>>b>>e;
    if((func(a)*func(b) < 0.0003) && (func(a)*func(b) > -0.0003)){
        if(func(a)<0.0003 && func(b)<  0.0003)
            cout<<a<<" and "<<b<<" are both roots.\n";
        else if(func(b)<  0.0003)
            cout<<b<<" is the root.\n";
        else
            cout<<a<<" is the root.\n";
    }
    if(func(a)*func(b)>0)
        cout<<"There is no root between "<<a<<" and "<<b<<"\n";
    else{
        int n = calculate(a, b, e);
        bisection(a, b ,2*n);
    }
}

void bisection(float a, float b, int n){
    float c;
    for(int i=0;i<n;i++){
    c = (a+b)/2;
    if(func(c)*func(a)<0)
        b=c;
    else
        a=c;
    }
    cout<<c<<" is the required root.\n";
}
int calculate(float a, float b, float e){
    return (log((abs(b-a))) - log(e))/log(2);
}
// float trap(float x_0,float x_n, float n, float h){
//     float sum = 0;
//     for(int i=0;i<=n;i+=h){
//     if(abs(i-x_0)<=0.00001 || abs(i-x_n)<=0.00001 )
//         sum+=func(i);
//     else
//         sum+= (2*func(i));
//     }
//     return (sum*h)/2;
// }
