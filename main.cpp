#include <graphics.h>
#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;

void day_code()
{
    setcolor(GREEN);
    rectangle(10,0, 625, 400); //border
    setcolor(BROWN);
    //left,top,right,bottom
    rectangle(10,260,625,280);  // BASE
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(11,261, BROWN);


    setcolor(GREEN);
    rectangle(10,170,625,259);  // BACKGROUND GREEN FILED
    setfillstyle(INTERLEAVE_FILL,GREEN);
    floodfill(20,180, GREEN);

    setcolor(LIGHTBLUE);
    rectangle(10,0,625,170);  // BACKGROUND SKY
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    floodfill(120,120, LIGHTBLUE);

    setcolor(WHITE);
    circle(200,70,25);
    setfillstyle(SOLID_FILL,WHITE);  // cloud 2
    floodfill(201, 71, WHITE);

    circle(235,60,30);
    setfillstyle(SOLID_FILL,WHITE);  // cloud 2
    floodfill(241, 61, WHITE);

    circle(225,80,30);
    setfillstyle(SOLID_FILL,WHITE);  // cloud 2
    floodfill(226, 91, WHITE);

    circle(260,70,30);
    setfillstyle(SOLID_FILL,WHITE);  // cloud 2
    floodfill(261, 81, WHITE);

    circle(50,10,30);
    setfillstyle(SOLID_FILL,WHITE);  // cloud 1
    floodfill(51, 21, WHITE);

    circle(80,20,25);
    setfillstyle(SOLID_FILL,WHITE);  // cloud 1
    floodfill(91, 21, WHITE);

    circle(110,10,25);
    setfillstyle(SOLID_FILL,WHITE);  // cloud 1
    floodfill(120, 15, WHITE);

    circle(400,10,30);
    setfillstyle(SOLID_FILL,WHITE);  // cloud 3
    floodfill(401, 21, WHITE);

    circle(430,20,25);
    setfillstyle(SOLID_FILL,WHITE);  // cloud 3
    floodfill(431, 21, WHITE);

    circle(460,10,25);
    setfillstyle(SOLID_FILL,WHITE);  // cloud 3
    floodfill(460, 15, WHITE);

    // MAIN STRUCTURE CCOLOR CODE START
    setcolor(DARKGRAY);
    line(300,260,320,30); //main structure
    line(340,260,320,30);
    line(300,260,340,260);
    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(320,170, DARKGRAY);

    line(280,260,320,50);
    line(360,260,320,50);
    line(280,260,360,260);
    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(290,230, DARKGRAY);
    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(350,230, DARKGRAY);

    line(260,260,320,70);
    line(380,260,320,70);
    line(380,260,260,260);
    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(280,230, DARKGRAY);
    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(360,230, DARKGRAY);

    line(240,260,320,90);
    line(400,260,320,90);
    line(400,260,240,260);
    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(260,230, DARKGRAY);
    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(380,230, DARKGRAY);

    line(220,260,320,110);
    line(420,260,320,110);
    line(420,260,220,260);
    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(250,230, DARKGRAY);
    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(390,230, DARKGRAY);

    line(200,260,320,130);
    line(440,260,320,130);
    line(200,260,440,260);

    line(180,260,320,150);
    line(460,260,320,150);
    line(180,260,460,260);
    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(200,250, DARKGRAY);
    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(440,250, DARKGRAY);
    //MAIN  STRUCTUE COLOR CODE END


    setcolor(WHITE);
    line(300,260,320,30); //main structure line draw
    line(340,260,320,30);

    line(280,260,318,50);
    line(360,260,322,50);

    line(260,260,317,70);
    line(380,260,323,70);

    line(240,260,305,120);
    line(400,260,345,145);

    line(220,260,286,160);
    line(420,260,350,160);

    line(200,260,270,183);
    line(440,260,369,183);

    line(180,260,240,215);
    line(460,260,400,215);

    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    line(300,260,320,240);
    line(320,240,340,260);
    line(300,260,340,260);
    floodfill(320,250, LIGHTGRAY);

    setcolor(WHITE);
    rectangle(310,150,330,160);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(311,151, WHITE);
    line(320,30,320,240);

    setcolor(DARKGRAY);
    rectangle(10,280,625,400);  // Front Gray Filed
    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(40,300, DARKGRAY);

    setcolor(GREEN);
    setfillstyle(INTERLEAVE_FILL,GREEN);
    line(10,300,160,300);
    line(160,300,100,380); // front left side green filed
    line(100,380,10,380);
    line(10,380,10,300);
    floodfill(40,310, GREEN);

    setcolor(GREEN);
    setfillstyle(INTERLEAVE_FILL,GREEN);
    line(480,300,625,300);
    line(625,300,625,380); // front right side green filed
    line(625,380,540,380);
    line(540,380,480,300);
    floodfill(610,370, GREEN);

    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    line(120,400,200,280);
    line(200,280,440,280);
    line(440,280,520,400);
    line(520,400,120,400);
    floodfill(320,350, LIGHTGRAY);

    setcolor(DARKGRAY);
    setfillstyle(SOLID_FILL,DARKGRAY);
    line(207,400,250,280);
    line(250,280,390,280); //front lake outer
    line(390,280,433,400);
    line(433,400,207,400);
    floodfill(240,350, DARKGRAY);

    setcolor(LIGHTBLUE);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    line(235,400,270,300);
    line(270,300,370,300);    // front lake inner
    line(370,300,405,400);
    line(405,400,235,400);
    floodfill(320,350, LIGHTBLUE);

    setcolor(DARKGRAY);
    rectangle(290,390,350,400);  // FLAG BASE
    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(320,395, DARKGRAY);

    setcolor(YELLOW);
    rectangle(319,200,321,390);  // FLAG STAND
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(320,201, YELLOW);

    setcolor(GREEN);
    rectangle(321,210,380,240);  // FLAG GREEN
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(330,220, GREEN);

    setcolor(RED);
    circle(350,225,9);
    setfillstyle(SOLID_FILL,RED);  // FLAG CIRCLE
    floodfill(350, 225, RED);


}

//############### Day Code End #############



//################## Night Code Start ##################

void night_code()
{
    setcolor(GREEN);
    rectangle(10,0, 625, 400); //border
    setcolor(BROWN);
    //left,top,right,bottom
    rectangle(10,260,625,280);  // BASE
    setfillstyle(SOLID_FILL,BROWN);
    floodfill(11,261, BROWN);

    delay(300);

    setcolor(GREEN);
    rectangle(10,170,625,259);  // BACKGROUND GREEN FILED
    setfillstyle(INTERLEAVE_FILL,GREEN);
    floodfill(20,180, GREEN);

    delay(300);

    setcolor(BLACK);
    rectangle(10,0,625,170);  // BACKGROUND SKY
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(120,120, BLACK);

    delay(300);

    setcolor(WHITE);
    outtextxy(10,10,".");
    delay(300);
    setcolor(WHITE);
    outtextxy(120,90,".");
    delay(300);
    setcolor(WHITE);
    outtextxy(20,120,".");
    delay(300);
    setcolor(WHITE);
    outtextxy(200,140,".");
    delay(300);
    setcolor(WHITE);
    outtextxy(170,80,".");
    delay(300);
    setcolor(WHITE);
    outtextxy(270,50,".");
    delay(300);
    setcolor(WHITE);
    outtextxy(240,10,".");
    delay(300);
    /////////
    outtextxy(410,10,".");
    delay(300);
    setcolor(WHITE);
    outtextxy(520,90,".");
    delay(300);
    setcolor(WHITE);
    outtextxy(620,120,".");
    delay(300);
    setcolor(WHITE);
    outtextxy(475,140,".");
    delay(300);
    setcolor(WHITE);
    outtextxy(550,80,".");
    delay(300);
    setcolor(WHITE);
    outtextxy(440,50,".");
    delay(300);
    setcolor(WHITE);
    outtextxy(590,10,".");
    delay(300);


    // MAIN STRUCTURE CCOLOR CODE START
    setcolor(DARKGRAY);
    line(300,260,320,30); //main structure
    line(340,260,320,30);
    line(300,260,340,260);
    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(320,170, DARKGRAY);

    delay(300);

    line(280,260,320,50);
    line(360,260,320,50);
    line(280,260,360,260);
    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(290,230, DARKGRAY);
    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(350,230, DARKGRAY);


    delay(300);

    line(260,260,320,70);
    line(380,260,320,70);
    line(380,260,260,260);
    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(280,230, DARKGRAY);
    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(360,230, DARKGRAY);

    delay(300);

    line(240,260,320,90);
    line(400,260,320,90);
    line(400,260,240,260);
    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(260,230, DARKGRAY);
    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(380,230, DARKGRAY);

    delay(300);

    line(220,260,320,110);
    line(420,260,320,110);
    line(420,260,220,260);
    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(250,230, DARKGRAY);
    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(390,230, DARKGRAY);

    delay(300);

    line(200,260,320,130);
    line(440,260,320,130);
    line(200,260,440,260);

    delay(300);

    line(180,260,320,150);
    line(460,260,320,150);
    line(180,260,460,260);
    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(200,250, DARKGRAY);
    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(440,250, DARKGRAY);
    //MAIN  STRUCTUE COLOR CODE END

    delay(300);

    setcolor(WHITE);
    line(300,260,320,30); //main structure line draw
    line(340,260,320,30);

    delay(300);

    line(280,260,318,50);
    line(360,260,322,50);

    delay(300);

    line(260,260,317,70);
    line(380,260,323,70);

    delay(300);

    line(240,260,305,120);
    line(400,260,345,145);

    delay(300);

    line(220,260,286,160);
    line(420,260,350,160);

    delay(300);

    line(200,260,270,183);
    line(440,260,369,183);

    delay(300);

    line(180,260,240,215);
    line(460,260,400,215);

    delay(300);

    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    line(300,260,320,240);
    line(320,240,340,260);
    line(300,260,340,260);
    floodfill(320,250, LIGHTGRAY);

    delay(300);

    setcolor(WHITE);
    rectangle(310,150,330,160);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(311,151, WHITE);
    line(320,30,320,240);

    delay(300);

    setcolor(DARKGRAY);
    rectangle(10,280,625,400);  // Front Gray Filed
    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(40,300, DARKGRAY);

    delay(300);

    setcolor(GREEN);
    setfillstyle(INTERLEAVE_FILL,GREEN);
    line(10,300,160,300);
    line(160,300,100,380); // front left side green filed
    line(100,380,10,380);
    line(10,380,10,300);
    floodfill(40,310, GREEN);

    delay(300);

    setcolor(GREEN);
    setfillstyle(INTERLEAVE_FILL,GREEN);
    line(480,300,625,300);
    line(625,300,625,380); // front right side green filed
    line(625,380,540,380);
    line(540,380,480,300);
    floodfill(610,370, GREEN);

    delay(300);

    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    line(120,400,200,280);
    line(200,280,440,280);
    line(440,280,520,400);
    line(520,400,120,400);
    floodfill(320,350, LIGHTGRAY);

    delay(300);

    setcolor(DARKGRAY);
    setfillstyle(SOLID_FILL,DARKGRAY);
    line(207,400,250,280);
    line(250,280,390,280); //front lake outer
    line(390,280,433,400);
    line(433,400,207,400);
    floodfill(240,350, DARKGRAY);

    delay(300);

    setcolor(LIGHTBLUE);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    line(235,400,270,300);
    line(270,300,370,300);    // front lake inner
    line(370,300,405,400);
    line(405,400,235,400);
    floodfill(320,350, LIGHTBLUE);

    delay(300);

    setcolor(DARKGRAY);
    rectangle(290,390,350,400);  // FLAG BASE
    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(320,395, DARKGRAY);

    delay(300);

    setcolor(YELLOW);
    rectangle(319,200,321,390);  // FLAG STAND
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(320,201, YELLOW);

    delay(300);

    setcolor(GREEN);
    rectangle(321,210,380,240);  // FLAG GREEN
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(330,220, GREEN);

    delay(300);

    setcolor(RED);
    circle(350,225,9);
    setfillstyle(SOLID_FILL,RED);  // FLAG CIRCLE
    floodfill(350, 225, RED);



}

//####### Night Code End #######


int main()
{
    int gd,gm;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

    setcolor(WHITE);
    outtextxy(260,440,"National Memorial"); //TITLE
    night_code();
    for (int i=625; i>=440; i--)
    {
        setcolor(WHITE);
        circle(70,i-480,25);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(70,i-502, WHITE);
        setcolor(BLACK);
        //cleardevice();
        circle(70,i-479,25);
        delay(50);

    }
    // delay(1000000);
    cleardevice();
    day_code();
    for (int i=625; i>=180; i--)
    {
        setcolor(RED);
        circle(540,i-480,25);
        setfillstyle(SOLID_FILL,RED); //sun
        floodfill(540,i-502, RED);
        setcolor(LIGHTBLUE);
        circle(540,i-479,25);

        setcolor(YELLOW);
        outtextxy(i+90,415,"<National Memorial>"); //ID AND NAME

        delay(30);
        //cleardevice();

    }

    delay(2000);
    cleardevice();
    //readimagefile("7.jpg",10,0,625,400);
    setcolor(YELLOW);

    outtextxy(100,200,"Team Information: Sudham Chandra Debnath (191-15-12854)");
    outtextxy(100,250,"Team Information: Pronay Kumar Saha (191-15-12704)");
    outtextxy(100,300,"Team Information: Sharmina Urmila Srity (191-15-12716)"); //ID AND NAME

    //main();
    getchar();
    return 0;
}
