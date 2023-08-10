#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    int i;
    cout<<"\n1.flag";
    cout<<"\n2.emoji";
    cout<<"\n3.house";
    cout<<"\n4.sunset";
    cout<<"\nEnter your choice:";
    cin>>i;

    switch(i)
    {
    case 1:

        setcolor(WHITE);
        rectangle(60,60,70,560);
        setfillstyle(1,WHITE);
        floodfill(65,65,WHITE);
        setcolor(GREEN);
        setfillstyle(SOLID_FILL,GREEN);
        rectangle(70,60,560,350);
        floodfill(75,70,GREEN);

        setcolor(RED);
        circle(300,200,100);
        setfillstyle(1,RED);
        floodfill(300,200,RED);
          getch();
    closegraph();
        break;

    case 2:

        setcolor(YELLOW);
        circle(400,300,150);
        setfillstyle(SOLID_FILL,YELLOW);
        floodfill(401,302,YELLOW);
        setcolor(BLACK);
        circle(445,235,35);
        circle(355,235,35);
        setfillstyle(SOLID_FILL,BLACK);
        floodfill(446,236,BLACK);
        floodfill(356,236,BLACK);
        setcolor(BLACK);
        line(400,275,400,325);
        //line(300,175,345,225);
        line(355,325,445,325);
        setcolor(RED);
        ellipse(400,375,180,0,55,30);
        ellipse(400,375,180,0,55,10);
        setfillstyle(SOLID_FILL,RED);
        floodfill(400,400,RED);
          getch();
    closegraph();
        break;

    case 3:

        setcolor(9);
        rectangle(0,0,1024,300);
        setfillstyle(1,9);
        floodfill(50,50,9);
        setcolor(2);
        line(0,300,800,300);
        setfillstyle(1,2);
        floodfill(50,500,2);
        setcolor(3);
        line(150,200,350,200);
        line(150,200,250,350);
        line(350,200,450,350);
        line(250,350,450,350);
        setfillstyle(1,3);
        floodfill(250,300,3);
        line(50,340,75,340);
        line(50,340,150,200);
        line(75,340,165,215);
        setfillstyle(1,3);
        floodfill(60,339,3);
        setcolor(11);
        line(75,340,164,215);
        line(164,215,250,350);
        line(75,340,75,400);
        line(250,350,250,450);
        line(75,400,250,450);
        setfillstyle(1,11);
        floodfill(76,342,11);

        setcolor(12);
        line(75,400,50,420);
        line(75,400,250,450);
        line(50,420,250,475);
        line(250,450,425,430);
        line(425,430,445,450);
        line(250,475,445,450);
        setfillstyle(1,12);
        floodfill(75,410,12);
        setcolor(14);
        line(250,350,430,350);
        line(250,350,250,450);
        line(250,450,425,430);
        line(425,350,425,430);
        setfillstyle(1,14);
        floodfill(400,400,14);
        setcolor(3);
        line(320,380,320,443);
        line(320,380,380,380);
        line(380,380,380,435);
        line(320,443,380,435);
        setfillstyle(1,3);
        floodfill(330,390,3);

        setcolor(YELLOW);
        ellipse(650,435,360,180,70,250);
        line(580,435,720,435);
        setfillstyle(1,YELLOW);
        floodfill(650,434,YELLOW);
          getch();
    closegraph();
        break;

    case 4:

        setcolor(9);
        rectangle(0,0,1000,450);
        setfillstyle(1,9);
        floodfill(50,50,9);
        setcolor(YELLOW);
        line(0,450,1000,450);
        setfillstyle(1,YELLOW);
        floodfill(50,700,YELLOW);

        setcolor(YELLOW);
        circle(450,320,40);
        setfillstyle(SOLID_FILL,YELLOW);
        floodfill(450,322,YELLOW);
        setcolor(2);
        line(0,450,250,120);
        line(250,120,520,450);
        line(0,450,720,450);
        setfillstyle(1,2);
        floodfill(130,449,2);

        setcolor(2);
        line(650,450,750,100);
        line(750,100,1000,450);
        line(650,450,1000,450);
        setfillstyle(1,2);
        floodfill(660,449,2);
        setcolor(2);
        line(400,450,550,150);
        line(550,150,720,450);
        line(400,450,720,450);
        setfillstyle(1,2);
        floodfill(530,448,2);
          getch();
    closegraph();
        break;

    default:


        break;

    }

}


