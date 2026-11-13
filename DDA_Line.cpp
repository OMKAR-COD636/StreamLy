#include <graphics.h>
#include <bits/stdc++.h>

using namespace std;

void DDA_Line(int x1,int y1,int x2,int y2){
    float dx=(x2-x1),dy=(y2-y1);
    float steps=max(abs(dx),abs(dy));
    float i=0,x=x1,y=y1;
    putpixel(x,y,WHITE);
    while(i<steps){
        x+=dx/steps;
        y+=dy/steps;
        putpixel(round(x),round(y),WHITE);
        i++;
    }
}

int main(){
    initwindow(500, 550, "DDA Line Drawing");
    DDA_Line(100,160,300,360);
    getch();
    closegraph();
    return 0;
}