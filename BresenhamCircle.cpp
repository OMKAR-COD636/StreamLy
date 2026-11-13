#include<graphics.h>
#include<bits/stdc++.h>

using namespace std;

void put8(int xc,int yc,int x,int y){
    putpixel(xc+x,yc+y,WHITE);
    putpixel(xc-x,yc+y,WHITE);
    putpixel(xc-x,yc-y,WHITE);
    putpixel(xc+x,yc-y,WHITE);
    putpixel(xc+y,yc+x,WHITE);
    putpixel(xc-y,yc+x,WHITE);
    putpixel(xc-y,yc-x,WHITE);
    putpixel(xc+y,yc-x,WHITE);
}

int main() {
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)" ");
    int r=100;
    int x=0,y=r,d=3-2*r;

    put8(100,100,x,y);
    while(x<=y){
        if(d<0) d+=4*x+6;
        else{
            d+=4*(x-y)+10;
            y--;
        }
        x++;
        put8(100,100,x,y);
    }
    getch();
    closegraph();
    return 0;
}


