#include <graphics.h>
#include <stdio.h>

// Function to draw moving car
void draw_moving_car(void) {
	int i, j = 0, gd = DETECT, gm;
	
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	for (i = 0; i <= 420; i = i + 10) {
	
		// Set color of car as white
		setcolor(WHITE);
	
		// These lines for bonnet and body of car
		line(0 + i, 300, 210 + i, 300);
		line(50 + i, 300, 75 + i, 270);
		line(75 + i, 270, 150 + i, 270);
		line(150 + i, 270, 165 + i, 300);
		line(0 + i, 300, 0 + i, 330);
		line(210 + i, 300, 210 + i, 330);
		rectangle(0,0,700,345);
	
		// For left wheel of car
		circle(65 + i, 330, 15);
		circle(65 + i, 330, 2);
	
		// For right wheel of car
		circle(145 + i, 330, 15);
		circle(145 + i, 330, 2);
	
		// Line left of left wheel
		line(0 + i, 330, 50 + i, 330);
	
		// Line middle of both wheel
		line(80 + i, 330, 130 + i, 330);
	
		// Line right of right wheel
		line(210 + i, 330, 160 + i, 330);		
		rectangle(440,40,600,110);
		rectangle(430,30,610,120);
		setfillstyle(SOLID_FILL,YELLOW);
	
		line(430,72,410,72);
		line(430,78,404,78);
		line(404,78,404,0);
		line(410,72,410,0);
		floodfill(410,77,WHITE);	
		
	if(i>=10&&i<=75||i>=350&&i<=370)
		{
	setfillstyle(SOLID_FILL,RED);
	circle(487,75,27);
	floodfill(488,75,WHITE);
	if(i==370)
	{
		Sleep(1000);
	}
	
		}
		
		else
		
		{
	setfillstyle(SOLID_FILL,GREEN);
	circle(563,75,27);
	floodfill(566,75,WHITE);
			
		}

		// To erase previous drawn car
		// use cleardevice() function
setcolor(YELLOW);
settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
outtextxy(200, 400, "BY RITIKA DANGOL");
delay(100);
		cleardevice();
	}

	getch();

	closegraph();
}

// Driver code
int main()
{
	draw_moving_car();

	return 0;
}

