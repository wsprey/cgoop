#include <iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

class line 
{
     int x,y,dx,dy,xi,yi,steps;
        public :
		void put()
        {
        putpixel (x,y,5);
}    
	void lin(int x1,int y1,int x2,int y2)
	{
        dx=x2-x1;
        dy=y2-y1;
        if(abs(dx)>abs(dy))
           steps=abs(dx);
        else steps=abs(dy);
        
        xi=dx/steps ;
        yi=dy/steps;
        x=x1+0.5;
        y=y1+0.5;
        put();
        
        for (int i=1;i<=steps ;i++)
        {
         x=x+xi;	
         y=y+yi;
         put();
         delay(9);
    
        }
    } 
}l;   
class circle1
{
public:

void circle2 (int x,int y,int r)
{
int x1=0;
int y1=r;
putpixel(x1,y1,5);
int p=3-2*r;
while(x1<y1)
{
if (p<=0)
{
p=p+(4*x1)+6;
}
else
{
p=p+4*(x1-y1)+10;
y1--;
}
x1++;

putpixel(x+x1,y+y1,5);
putpixel(x-x1,y+y1,5);
putpixel(x+x1,y-y1,5);
putpixel(x-x1,y-y1,5);
putpixel(x+y1,y+x1,5);
putpixel(x-y1,y+x1,5);
putpixel(x+y1,y-x1,5);
putpixel(x-y1,y-x1,5);
delay(5);
}
}
}c;        


int main ()
{
 int gd=DETECT,gm=DETECT;
 initgraph(&gd,&gm,NULL);
 l.lin(100,100,100,400);
 l.lin(100,400,400,400);
 l.lin(400,400,400,100);
 l.lin(400,100,100,100);
 l.lin(250,100,100,250);
 l.lin(100,250,250,400);
 l.lin(250,400,400,250);
 l.lin(400,250,250,100);
 /*l.lin(175,175,175,325);
 l.lin(175,325,325,325);
 l.lin(325,325,325,175);
 l.lin(325,175,175,175);
 l.lin(250,175,175,250);
 l.lin(175,250,250,325);
 l.lin(250,325,325,250);
 l.lin(325,250,250,175);*/
 //delay(50);
c.circle2(250,250,100);
delay(5000);
closegraph();
return 0;
 }
