#include <iostream>
#include <cmath>
#define func(x) ((4.0*x*x)-(2*x))
//(pow(x,2)*cos(x))+ (x*sin(x))
using namespace std;
float trap(float x_0, float x_n, float n, float h);
float simp_3(float x_0, float x_n, float n, float h);
float simp_8(float x_0, float x_n, float n, float h);

int main(){
    float n;
    cout<<"Enter the number of strips: \n";
    cin>>n;
    if((int(n)%2!=0)||(int(n)%3!=0)){cout<<"N should be multiple of 2 and 3";exit(0);}
    float x_0,x_n;
    cout<<"Enter the initial and final value of x-axis:\n ";
    cin>>x_0>>x_n;
    float h = abs(x_n-x_0)/n;
    float trap_value = trap(x_0, x_n, n, h);
    float simp_3_value = simp_3(x_0,x_n,n,h);
    float simp_8_value = simp_8(x_0, x_n, n, h);
    cout<<"The final value are:\nTrapezoidal = "<<trap_value<<"\nsimpson 1/3 = "<<simp_3_value<<"\nsimpson 3/8 = "<<simp_8_value;
}
float trap(float x_0,float x_n, float n, float h){
    float sum = 0;
    for(int i=0;i<=n;i+=h){
    if(abs(i-x_0)<=0.00001 || abs(i-x_n)<=0.00001 )
        sum+=func(i);
    else
        sum+= (2*func(i));
    }
    return (sum*h)/2;
}

float simp_3(float x_0, float x_n, float n, float h){
    float sum = 0;
    float z=x_0;
    for(int i=0;i<=n;i++){

    if(i==0 || i==int(n) )
        sum+=func(z);
    else if((i%2)==0)
        sum+=(2*func(z));
    else
        sum+=(4*func(z));
        z+=h;
    }
return((sum*h)/3);}

float simp_8(float x_0, float x_n, float n, float h){
    float sum = 0;
    float z=x_0;
    for(int i=0;i<=n;i++){
        if(i==0 || i==int(n) )
            sum+=func(z);
        else if(i%3==0)
            sum+=(2*func(z));
        else
            sum+=(3*func(z));

        z+=h;
    }
    cout<<" "<<z<<"\n";
    return((3*h*sum)/8);
}
