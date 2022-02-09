#include <iostream>
#include <cmath>
#define func(x) ((x*x)-sin(x));
using namespace std;

int main(){
    int n;
    float z_0, z_n;
    cout<<"Enter the initial point, final point and number of data points: \n";
    cin>>z_0>>z_n>>n;
    float h=(z_n-z_0)/(float)n;
    float x;
    cout<<"Enter the value of x:\n";
    cin>>x;
//     float arr_y[4] = {12,13,14,16};
//     float arr_x[4] = {5,6,9,11};
    float arr_y[n],arr_x[n];
    for(int i=0;i<n;i++){
        arr_x[i] = z_0;
        arr_y[i] = func(z_0);
        z_0+=h;
    }
    float output=0;
    for(int i=0;i<n;i++){
        float trans_val=1;
        for(int j=0;j<n;j++){
            if(i!=j){
            trans_val*=((x-arr_x[j])/(arr_x[i] - arr_x[j]));
            }}
    trans_val = trans_val*arr_y[i];
    output+=trans_val;

    }
cout<<"Output is: "<<output<<"\n";
}

