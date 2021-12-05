#include <SDL2/SDL_bgi.h>
#include <iostream>
using namespace std;

int main(){
int gd = DETECT, gm , color;
initgraph(&gd, &gm , NULL);
float x1=600;
float x2= 10;
float y1 = 50;
float y2 = 400;
float delx = x2 - x1;
float dely= y2 - y1;
float step;
if(delx>dely)
    step = abs(delx);
else
    step = abs(dely);

putpixel(x1, y1,GREEN);
for(int i=0;i<step;i++){
    x1 = x1 + (delx/step);
    y1 = y1 + (dely/step);
    putpixel(x1, y1,GREEN);

}
    getch();
    closegraph();
}

