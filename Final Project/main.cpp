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
void footpath()
{
    glBegin(GL_POLYGON);

	glColor3ub(76, 187, 23);
	glVertex2f(0,6);//A2
	glVertex2f(0,6.6);//O3
	glVertex2f(19,6.56);//P3
	glVertex2f(19,6);//B2

	glEnd();
}
void underground_light()
{
     glBegin(GL_POLYGON);

	glColor3ub(0,0,0);
	glVertex2f(9,3.5);//Q3
	glVertex2f(9.5,3.5);//R3
	glVertex2f(9.5,3);//S3
	glVertex2f(9,3);//T3

	glEnd();
	 glBegin(GL_POLYGON);

	glColor3ub(250, 250,51);
	glVertex2f(9,3);//T3
	glVertex2f(9.26,3.21);//U3
	glVertex2f(9.5,3);//S3
	glEnd();

	 glBegin(GL_POLYGON);

	glColor3ub(0,0,0);
	glVertex2f(15,3.5);//L4
	glVertex2f(15.5,3.5);//M4
	glVertex2f(15.5,3);//N4
	glVertex2f(15,3);//O4
	glEnd();

	glBegin(GL_POLYGON);

	glColor3ub(250, 250,51);
	glVertex2f(15,3);//O4
	glVertex2f(15.26,3.23);//P4
	glVertex2f(15.5,3);//N4
	glEnd();
}
void Metro()
{
     glBegin(GL_POLYGON);

	glColor3ub(255,255,255);
	glVertex2f(0.2,1.19);//Z3
	//glVertex2f(0.57,1.23);//Z3
	glVertex2f(0.99,2.21);//V3
	glVertex2f(9.01,2.21);//W3
	glVertex2f(10.07,1.11);//A4

	glEnd();

	 glBegin(GL_POLYGON);

	glColor3ub(0,0,128);
	glVertex2f(0.2,1.19);//Z3
	glVertex2f(10.07,1.11);//A4
	glVertex2f(9.08,0.2);//B4
	glVertex2f(1,0.24);//D4

	glEnd();

}
void trainwindow()
{
     glBegin(GL_POLYGON);

	glColor3ub(167,199,203);
	glVertex2f(1.11,2);//C4
	glVertex2f(4.13,2);//E4
	glVertex2f(4.12,1.37);//F4
	glVertex2f(1.09,1.39);//G4

	glEnd();

	glBegin(GL_POLYGON);

	glColor3ub(167,199,203);
	glVertex2f(5.75,2);//H4
	glVertex2f(8.5,2);//I4
	glVertex2f(8.53,1.35);//J4
	glVertex2f(5.74,1.36);//K4
	glEnd();
}
void Home()
{
    glPushMatrix();
    glTranslatef(0.0f,6.5f,0.0f);
    glScalef(0.7f,0.7f,0.0f);
  //   glClear(GL_COLOR_BUFFER_BIT);
    glColor3ub(242,170,170);
    glBegin(GL_POLYGON);
        glVertex2f(1.0f, 0.0f); //a
        glVertex2f(1.0f, 7.0f); // b
        glVertex2f(6.0f, 7.0f); // c
        glVertex2f(6.0f, 0.0f); // d
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.25f, 0.0f);
        glVertex2f(3,0); // e
        glVertex2f(2.98, 1.28); // f
        glVertex2f(4, 1.28); // g
        glVertex2f(4,0); // h
    glEnd();

    // Set color for the windows
    glColor3f(0.2f, 0.6f, 1.0f);
   //window
    for (int i = 0; i < 5; ++i) {
        float y = 0.5f + i * 1.2f; // Calculate y position for each floor

        // Left window
        glBegin(GL_POLYGON);
            glVertex2f(1.48f, y); // l
            glVertex2f(2.42f, y); // k
            glVertex2f(2.42f, y + 0.8f); //j
            glVertex2f(1.48f, y + 0.8f); // i
        glEnd();

        // Right window
        glBegin(GL_POLYGON);
            glVertex2f(4.57, y); // B1
            glVertex2f(5.51, y); // d1
            glVertex2f(5.51, y + 0.8f); // c1
            glVertex2f(4.57, y + 0.8f); // a1
        glEnd();
    }
     glPopMatrix();

}
void Home2()
{
    glPushMatrix();
    glTranslatef(4.0f,6.5f,0.0f);
    glScalef(0.6f,0.6f,0.0f);
  //   glClear(GL_COLOR_BUFFER_BIT);
    glColor3ub(250,229,194);
    glBegin(GL_POLYGON);
        glVertex2f(1.0f, 0.0f); //a
        glVertex2f(1.0f, 7.0f); // b
        glVertex2f(6.0f, 7.0f); // c
        glVertex2f(6.0f, 0.0f); // d
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.25f, 0.0f);
        glVertex2f(3,0); // e
        glVertex2f(2.98, 1.28); // f
        glVertex2f(4, 1.28); // g
        glVertex2f(4,0); // h
    glEnd();

    // Set color for the windows
    glColor3f(0.2f, 0.6f, 1.0f);
   //window
    for (int i = 0; i < 5; ++i) {
        float y = 0.5f + i * 1.2f; // Calculate y position for each floor

        // Left window
        glBegin(GL_POLYGON);
            glVertex2f(1.48f, y); // l
            glVertex2f(2.42f, y); // k
            glVertex2f(2.42f, y + 0.8f); //j
            glVertex2f(1.48f, y + 0.8f); // i
        glEnd();

        // Right window
        glBegin(GL_POLYGON);
            glVertex2f(4.57, y); // B1
            glVertex2f(5.51, y); // d1
            glVertex2f(5.51, y + 0.8f); // c1
            glVertex2f(4.57, y + 0.8f); // a1
        glEnd();
    }
  glPopMatrix();
}
void Home3()
{
    glPushMatrix();
    glTranslatef(2.0f,-0.9f,0.0f);
    glScalef(1.1f,1.1f,0.0f);
     glBegin(GL_POLYGON);

	glColor3ub(52, 52, 52);
	glVertex2f(5.98,6.55);//w4
	glVertex2f(5.98,8.63);//Z4
	glVertex2f(8.98,8.63);//A5
	glVertex2f(9.01,6.55);//E5
	glEnd();
	 glBegin(GL_POLYGON);
	 glColor3ub(52, 52, 52);
	 glVertex2f(8.98,6.55);//E5
	glVertex2f(8.98,10.45);//B5
	glVertex2f(12.02,10.45);//C5
	glVertex2f(12.02,6.55);//D5
      glEnd();
      //WINDOW
		 glBegin(GL_POLYGON);
	 glColor3ub(167,199,203);
	 glVertex2f(6.5,8.22);//f5
	glVertex2f(8.4,8.2);//G5
	glVertex2f(8.4,7);//H5
	glVertex2f(6.5,7.01);//I5
	glEnd();

	 glBegin(GL_POLYGON);
	 glColor3ub(167,199,203);
	 glVertex2f(9.24,8.22);//U5
	glVertex2f(9.24,10.19);//R5
	glVertex2f(11.71,10.2);//S5
	glVertex2f(11.71,8.22);//T5
	glEnd();

    	glBegin(GL_LINES);
	{
	    glLineWidth(2.0);
	    glColor3ub(0,0,0);
	     glVertex2f(10.49,10.19);//V5
	glVertex2f(10.49,8.22);//W5
	 glVertex2f(9.27,9.13);//Z5
	glVertex2f(11.71,9.16);//A6

	glEnd();
	}
   //LEFT WINDOWGRID
	glBegin(GL_LINES);
	{
	    glLineWidth(2.0);
	    glColor3ub(0,0,0);
	     glVertex2f(7.4,8.21);//L5
	glVertex2f(7.4,7);//M5
	glEnd();
	}
	//door
	 glBegin(GL_POLYGON);
	 glColor3ub(167,199,203);
	 glVertex2f(10,6.58);//o5
	glVertex2f(10,7.72);//N5
	glVertex2f(10.84,7.72);//P5
	glVertex2f(10.82,6.58);//Q5
	glEnd();
  glPopMatrix();
}
//void Leaf(float centerX, float centerY, float radius);
void Leaf(float centerX, float centerY, float radius)
{
    glColor3ub(0, 128, 0);
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
void Tree()
{
    glPushMatrix();
    glTranslatef(1.0f,-0.9f,0.0f);
    glScalef(1.1f,1.1f,0.0f);
    glBegin(GL_POLYGON);
	 glColor3ub(85,51,17);
	 glVertex2f(14.08,6.57);//D6
	glVertex2f(14.21,7.25);//C6
	glVertex2f(14.13,8.01);//B6
	glVertex2f(14.6,8);//E6
	glVertex2f(14.47,7.23);//F6
	glVertex2f(14.6,6.57);//G6
	glEnd();
	Leaf(14.3,7.81,0.42);
   Leaf(14,8,0.50);
   Leaf(14.53,8.08,0.45);
   Leaf(14.26,8.44,0.50);
   glPopMatrix();
}


void Cloudcircle(float centerX, float centerY, float radius)
{
    glColor3ub(171,171,171);
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
void Cloud()
{
     Cloudcircle(13,11.88,0.60);
   Cloudcircle(14,12,0.65);
   Cloudcircle(14.75,12.03,0.60);
}
void display() {
	glClear(GL_COLOR_BUFFER_BIT);
    TrainLineground();
    TrainLine();
    UndergroundWall();
    Road();
    Car();
    footpath();
    underground_light();
    Metro();
    trainwindow();
    Home();
    Home2();
    Home3();
  Cloud();
   Tree();



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


