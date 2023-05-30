//DDA algorithm to draw a straight line
#include<graphics.h>  
#include<stdio.h>  
void main()  
{  
    intgd = DETECT ,gm, j;  
    float x, y,dx,dy,steps;  
    int x0, x1, y0, y1;  
    initgraph(&gd, &gm, "");  
    setbkcolor(WHITE);
    printf("Enter the value of x1 and y1 : ");
	scanf("%f%f",&x1,&y1);
	printf("Enter the value of x2 and y2: ");
	scanf("%f%f",&x2,&y2);

    dx = (float)(x1 - x0);  
    dy = (float)(y1 - y0);  
    if(dx>=dy)  
           {  
        steps = dx;  
    }  
    else  
           {  
        steps = dy;  
    }  
    dx = dx/steps;  
    dy = dy/steps;  
    x = x0;  
    y = y0;  
    j = 1;  
    while(j<= steps)  
    {  
        putpixel(x, y, RED);  
        x += dx;  
        y += dy;  
        j=j++;  
    }    
    closegraph();  
}  
