#include <windows.h>
#include <GL/glut.h>
#include <math.h>


void initGL() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}
void TrainLine()
{
    glBegin(GL_POLYGON);//NICHER  LINE

	glColor3b(0,0,0);
	glVertex2f(0,0.28);//g
	glVertex2f(0,0.17);//e
	glVertex2f(19.05,0.17);//f
	glVertex2f(19.05,0.28);//h

	glEnd();
	//UPORER LINE
	 glBegin(GL_POLYGON);
	 glColor3b(0,0,0);
	glVertex2f(0,0.65);//I
	glVertex2f(19.05,0.65);//J
	glVertex2f(19.05,0.8);//N
	glVertex2f(0,0.8);//K
	glEnd();

	//dora line
	glLineWidth(2);
	glBegin(GL_LINES);
	glColor3b(0,0,0);
	glVertex2f(0.34,0.3);//L
	glVertex2f(1.08,0.72);//M

	glVertex2f(1.02,0.3);//O
	glVertex2f(2.21,0.71);//P

	glVertex2f(2.12,0.26);//Q
	glVertex2f(3.3,0.7);//R

	glVertex2f(3.36,0.29);//S
	glVertex2f(4.39,0.7);//T

	glVertex2f(4.41,0.29);//U
	glVertex2f(5.5,0.69);//V

	glVertex2f(5.59,0.29);//W
	glVertex2f(6.58,0.69);//Z

	glVertex2f(6.69,0.29);//A1
	glVertex2f(7.67,0.68);//B1

	glVertex2f(7.82,0.29);//C1
	glVertex2f(8.76,0.68);//D1

	glVertex2f(8.95,0.29);//E1
	glVertex2f(9.85,0.68);//F1

	glVertex2f(10.05,0.29);//G1
	glVertex2f(10.96,0.68);//H1

	glVertex2f(11.19,0.29);//I1
	glVertex2f(12.06,0.68);//J1

	glVertex2f(12.29,0.29);//K1
	glVertex2f(13.18,0.68);//L1

	glVertex2f(13.34,0.29);//M1
	glVertex2f(14.21,0.68);//N1

	glVertex2f(14.54,0.29);//O1
	glVertex2f(15.3,0.68);//P1

	glVertex2f(15.67,0.29);//Q1
	glVertex2f(16.41,0.68);//R1

	glVertex2f(16.73,0.28);//S1
	glVertex2f(17.49,0.68);//T1

	glEnd();

}
void TrainLineground()
{
    glBegin(GL_POLYGON);

	glColor3ub(165, 42, 42);
	glVertex2f(0,1.2);//U1
	glVertex2f(19,1.2);//V1
	glVertex2f(19,0);//C
	glVertex2f(0,0);//B

	glEnd();
}
void UndergroundWall()
{
    glBegin(GL_POLYGON);
	glColor3ub(119, 92, 78);
	glVertex2f(0,4);//W1
	glVertex2f(19,4);//Z1
	glVertex2f(19,1.2);//V1
	glVertex2f(0,1.2);//U1
	glEnd();
}
void Road()
{
    glBegin(GL_POLYGON); //black road
	glColor3ub(95,95,95);
	glVertex2f(0,4);//W1
	glVertex2f(19,4);//Z1
	glVertex2f(19,6);//B2
	glVertex2f(0,6);//A2
	glEnd();
	//white parts
	glBegin(GL_POLYGON);
	glColor3ub(255,255,255);
	glVertex2f(1,5);//C2
	glVertex2f(3,5);//D2
	glVertex2f(3,5.08);//E2
	glVertex2f(1,5.08);//F2
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255,255,255);
	glVertex2f(6,5);//G2
	glVertex2f(8,5);//H2
	glVertex2f(8,5.08);//J2
	glVertex2f(6,5.08);//I2
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255,255,255);
	glVertex2f(11,5.08);//M2
	glVertex2f(13,5.08);//N2
	glVertex2f(13,5);//L2
	glVertex2f(11,5);//K2
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255,255,255);
	glVertex2f(16,5.08);//Q2
	glVertex2f(18,5.08);//R2
	glVertex2f(18,5);//P2
	glVertex2f(16,5);//O2
	glEnd();
}
void drawWheel(float centerX, float centerY, float radius);
void Car()
{
    glBegin(GL_POLYGON);
	glColor3ub(0, 150, 255);
	glVertex2f(13.61,5.78);//S2
	glVertex2f(15.17,5.78);//T2
	glVertex2f(15.79,5.31);//V2
	glVertex2f(12.98,5.32);//U2
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(0, 150, 255);
	glVertex2f(12.98,5.32);//U2
	glVertex2f(12.18,5.32);//W2
	glVertex2f(12.18,4.74);//Z2
	glVertex2f(16.58,4.74);//A3
	glVertex2f(16.58,5.31);//B3
	glVertex2f(15.79,5.31);//V2
	glVertex2f(12.98,5.32);//U2
	glEnd();

	//WINDOW
	 glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(13.61,5.67);//G3
	glVertex2f(14.19,5.67);//H3
	glVertex2f(14.2,5.4);//J3
	glVertex2f(13.25,5.4);//I3
	glEnd();

	 glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(14.48,5.68);//K3
	glVertex2f(15.09,5.68);//L3
	glVertex2f(15.46,5.41);//M3
	glVertex2f(14.47,5.41);//N3
	glEnd();
	glColor3ub(0, 0, 0); // Set wheel color (black)
    drawWheel(12.84,4.73,0.37); // Left wheel (center at 13.0, 4.74)
    drawWheel(15.93,4.73,0.35); // Right wheel (center at 15.0, 4.74)

}
void drawWheel(float centerX, float centerY, float radius) {
    int num_segments = 100;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(centerX, centerY);
    for (int i = 0; i <= num_segments; i++) {
        float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);
        float x = radius * cosf(theta);
        float y = radius * sinf(theta);
        glVertex2f(x + centerX, y + centerY);
    }
    glEnd();
}
void display() {
	glClear(GL_COLOR_BUFFER_BIT);
    TrainLineground();
    TrainLine();
    UndergroundWall();
    Road();
    Car();
	glFlush();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(1000, 700);
	glutInitWindowPosition(50,50);
glutCreateWindow("Vertex, Primitive & Color");

	glutDisplayFunc(display);
	initGL();
	gluOrtho2D(0,19,0,13);
	glutMainLoop();
	return 0;
}


