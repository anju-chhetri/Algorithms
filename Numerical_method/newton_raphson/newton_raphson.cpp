#include <math.h>
#include <iostream>
#define fx(x) (sin(x))
#define fx_d(x) (cos(x))
using namespace std;

int main(){
    float x_0;
    cin>>x_0;
    float fun;
    float fun_deri;
    int counter=0;
    while(true){
        fun = fx(x_0);
        fun_deri = fx_d(x_0);

        if(abs(fx(x_0)<0.000001)){
            cout<<x_0<<" is the required root.\n";
            exit(0);
        }
        else if(abs(fun_deri)<0.00001 || counter>500){
            cout<<"Required root cannot be found. \n";
            exit(0);
        }
        x_0 = x_0- (fun/fun_deri);
        counter++;
    }

}
