#include<graphics.h>
#include<bits/stdc++.h>

using namespace std;

void Transform2D(int tx,int ty,int r,int sx,int sy,int shx,int shy,
    vector<vector<int>>&t,vector<vector<int>>&r1,vector<vector<int>>&s,vector<vector<int>>&sh){
    for(int i=0;i<3;i++){
        int x=v[i][0],y=v[i][1];
        t[i][0]+=tx;
        t[i][1]+=ty;
        r1[i][0]=x*cos(r)-y*sin(r);
        r1[i][1]=x*sin(r)+y*cos(r);
        s[i][0]*=sx;
        s[i][1]*=sy;
        sh[i][0]=x+shx*y;
        sh[i][1]=y+shy*x;
    }
}

void plot(vector<vector<int>>&v,int color){
    setcolor(color);
    for(int i=0;i<3;i++){
        line(v[i][0],v[i][1],v[(i+1)%3][0],v[(i+1)%3][1]);
    }
}

int main(){
    vector<vector<int>>v={
        {100,200},
        {100,100},
        {200,100}
    };
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)" ");
    plot(v,WHITE);
    vector<vector<int>>t(v),r(v),sc(v),sh(v);
    float r1=30*acos(-1.0)/180;
    Transform2D(10,10,r1,2,2,10,0,t,r,sc,sh);
    plot(t,GREEN);
    plot(r,YELLOW);
    plot(sc,RED);
    plot(sh,BLUE);
    getch();
    closegraph();
    return 0;
}