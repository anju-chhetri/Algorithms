#include <SDL2/SDL_bgi.h>
#include <iostream>
using namespace std;

int main(){
int gd = DETECT, gm , color;
//initwindow(720,720);

initgraph(&gd, &gm , NULL);

float x1=10;
float x2= 500;
float y1 = 10;
float y2 = 600;
float delx = abs(x2 - x1);
float dely= abs(y2 - y1);
float step;
int a,b;
if (x2>x1)
    a = 1;
else
    a=-1;
if(y2>y1)
    b=1;
else
    b=-1;
putpixel(x1,y1,GREEN);

if(delx>dely){
    int p = (2*dely) - delx;   //initial value of Po initial.
    for(int i=0;i<delx;i++){
        putpixel(x1,y1,GREEN);
        if(p<=0){
            x1 = x1 + a;
            y1 = y1;
            p = p + (2*dely);
            putpixel(x1,y1,GREEN);

        }
    else{
            x1 = x1 + a;
            y1 = y1+b;
            p = p + (2*(dely-delx));
            putpixel(x1,y1,GREEN);

    }
    }
}
else{
    int p = (2*delx) - dely;   //From derivation of BLA
    for(int i=0;i<dely;i++){
        if(p<=0){
            x1 = x1;
            y1 = y1+b;
            p = p + (2*delx);
            putpixel(x1,y1,GREEN);
        }
    else{
            x1 = x1 + a;
            y1 = y1+b;
            p = p + (2*(delx-dely));
            putpixel(x1,y1,GREEN);
    }
    }
}


    getch();
    closegraph();
}


