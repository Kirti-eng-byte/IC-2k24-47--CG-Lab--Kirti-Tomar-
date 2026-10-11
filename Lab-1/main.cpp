#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    setcolor(WHITE);
    line(50, 100, 300, 100);
    outtextxy(50, 80, (char*)"1. Straight Line");

    setcolor(RED);
    circle(150, 250, 60);
    outtextxy(50, 180, (char*)"2. Circle");

    setcolor(GREEN);
    rectangle(350, 80, 550, 200);
    outtextxy(350, 60, (char*)"3. Rectangle");

    setcolor(YELLOW);
    line(400, 350, 300, 450);
    line(400, 350, 500, 450);
    line(300, 450, 500, 450);
    outtextxy(350, 280, (char*)"4. Triangle");

    getch();
    closegraph();
    return 0;
}