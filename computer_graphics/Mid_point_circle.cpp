#include <iostream>
#include <typeinfo>
#include <SDL2/SDL_bgi.h>
using namespace std;
//gcc filename.c -o objFileName -lSDL_bgi -lSDL2
///r>h and k to avoid plotting the negative pixels(which probably dosen't exist).
int main(){
    int h,k,r;
    cin>>h>>k>>r;
    int init_decision = 1-r;
    float x_front=0;float y_front=r;
    float x_back=0; float y_back=r;

    int gd = DETECT, gm , color;
    initgraph(&gd, &gm , NULL);
    putpixel(x_front+h,y_front+k,GREEN);
    while(int(x_front)<int(y_front)){
        if(init_decision<=0){
            x_front = x_front+1;
            y_back=y_back;
            y_front = y_front;
            x_back =x_back -1;
            init_decision = init_decision+(2*x_front)+1;
            putpixel(x_front+h,y_front+k,GREEN); //first quadrant
            putpixel(y_front+h,x_front+k,GREEN); // symmetry property(x=y)
            putpixel(x_back+h,y_back+k,GREEN); // second quadrant
            putpixel(y_back+h,x_back+k,GREEN);

            putpixel(x_front+h,((-1)*y_front)+k, GREEN);//Fourth Quadrant
            putpixel(((-1)*y_front)+h,x_front+k, GREEN);//symmetry property
            putpixel((-1*x_front)+h, (y_front*-1)+k, GREEN); //Third Quadrant
            putpixel((y_front*-1)+h, (-1*x_front)+k, GREEN); //symmetry property

        }
        else{
            x_front=x_front+1;
            y_front=y_front-1;
            x_back = x_back-1;
            y_back = y_front;
            init_decision = init_decision+(2*x_front)-(2*y_front)+1;
            putpixel(x_front+h,y_front+k,GREEN);  //first Quadrant
            putpixel(y_front+h,x_front+k,GREEN);//symmetry Property
            putpixel(x_back+h,y_back+k,GREEN); // Seconf Quadrant
            putpixel(y_back+h,x_back+k,GREEN);

            putpixel(x_front+h,((-1)*y_front)+k, GREEN);//fourth Quadrant
            putpixel(((-1)*y_front)+h,x_front+k, GREEN);
            putpixel((-1*x_front)+h, (y_front*-1)+k, GREEN);//Third Quadrant
            putpixel((y_front*-1)+h, (-1*x_front)+k, GREEN);
        }
    }
getch();
closegraph();
}

