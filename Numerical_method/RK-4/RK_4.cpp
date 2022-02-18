#include <iostream>
using namespace std;

float  f_y(float x,float y,float z){
    return(((3*x)+y-z));
}
float fh_z(float x, float y, float z){
    return (2*x)+z-y;
}
int main(){
    float x_n,x_o,h, y_o,z_o;
    cout<<"Enter the initial, final value and width: ";
    cin>>x_o>>x_n>>h;
    float n = (x_n-x_o)/h;
    float k,l;
    y_o = 1;
    z_o = 2;
    for(int i=0;i<(int)n;i++){
        float ki[4], li[4];
        for(int j=0;j<4;j++){
            if(j==0){
                ki[j] = h* f_y(x_o,y_o,z_o);
                li[j] = h* fh_z(x_o,y_o,z_o);

            }
            else if(j==3){
                ki[j] = h* f_y(x_o+h,y_o+ki[j-1],z_o+li[j-1]);
                li[j] = h * fh_z(x_o+h,y_o+ki[j-1],z_o+li[j-1]);
            }
            else{
                ki[j] = h* f_y(x_o+(h/2.0),y_o+(ki[j-1]/2.0),z_o+(li[j-1]/2.0));
                li[j] = h* fh_z(x_o+(h/2.0),y_o+(ki[j-1]/2.0),z_o+(li[j-1]/2.0));


            }
        }
        k = (ki[0]+(2*(ki[1]+ki[2]))+ki[3])/6;
        l = (li[0]+(2*(li[1]+li[2]))+li[3])/6;
        x_o = x_o+h;
        y_o = y_o+k;
        z_o = z_o+l;
           cout<<"x:  "<<x_o<<" y: "<<y_o<<" z: "<<z_o<<"\n";

    }
}
