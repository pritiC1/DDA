#include<stdio.h>
#include<graphics.h>
void main()
{
    int x,y,dx,dy,gd,gm;
    int x1,x2,y1,y2,i,length;
    gd=DETECT;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    printf("enter the first point on line:");
    scanf("%d,%d",&x1,&y1);
    printf("enter the second point on line:");
    scanf("%d,%d",&x2,&y2);
    dx=abs(x2-x1);
    dy=abs(y2-y1);

    if(dx>=dy)
    {
        length=dx;
    }
    else{
        length=dy;
    }
    dx=(x2-x1)/length;
    dy=(y2-y1)/length;
    x=x1+0.5;
    y=y1+0.5;
    
    i=0;
    while(i<=length)
    {
        putpixel(x,y,RED)
        x=x+dx;
        y=y+dy;
        i++;

    }
    getch();
    closegraph();
}    

