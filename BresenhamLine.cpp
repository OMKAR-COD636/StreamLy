#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

void bresenhamLine(int x1,int y1,int x2,int y2){
    int dx=x2-x1, dy=y2-y1,m=dy/dx;
    putpixel(x1,y1,YELLOW);
    while(x1!=x2 && y1!=y2){
        if(m<1)
        {
            p=2*dy-dx;
            if(p<1){
                p+=2*dy;
            }
            else{
                p+=2*dy-2*dx;
                y1++;
            }
            x1++;
            putpixel(x1,y1,WHITE);
        }
    }
}

int main() {
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)" ");
    bresenhamLine(100,160,300,360);
    getch();
    closegraph();
    return 0;
}