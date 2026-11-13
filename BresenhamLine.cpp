#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

void bresenhamLine(int xc,int yc,int x1,int y1,int x2,int y2){
    int dx=x2-x1, dy=y2-y1,m=dy/dx;
    if(m<1)
    {
    p=2*dy-dx
    }
}

int main() {
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)" ");
    int xc=100,yc=100;
    bresenhamLine(xc,yc,100,160,300,360);
    getch();
    closegraph();
    return 0;
}