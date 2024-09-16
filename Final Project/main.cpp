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
//void drawWheel(float centerX, float centerY, float radius);
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
//float CarX = 18.0f; // Start the car from the right side of the screen

float CarX = 19.0f; // Start the car from the right side just within the frame
void moveCar(float variable) {
    glPushMatrix();
    glTranslatef(variable, 0.0f, 0.0f);  // Move the boat along the X-axis
    Car();  // Call the boat drawing function
    glPopMatrix();
}
void update(int value) {
    CarX -= 0.06f;  // Move the car to the left

    // If the car moves beyond the left side of the frame
    if (CarX < -17.0f) {  // Reset based on the car's width (approximately 5 units)
        CarX = 19.0f;    // Reset the car to just outside the right side
    }

    glutPostRedisplay();  // Redisplay the scene
    glutTimerFunc(16, update, 0);  // Call update again after 16 ms
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

	glBegin(GL_LINES);

	    glLineWidth(2.0);
	    glColor3ub(0,0,0);
	     glVertex2f(5,2.21);//V5
	glVertex2f(5,0.22);//W5
	glEnd();

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
float metroX = 0.0f;

void updatemetro(int value) {
    metroX += 0.05f;
    if (metroX > 19.0f) {
        metroX = -7.0f;
    }
    glutPostRedisplay();
    glutTimerFunc(16, updatemetro, 0);
}
void moveMetro(float metrovariable) {
    glPushMatrix();
    glTranslatef(metrovariable, 0.0f, 0.0f);  // Move the boat along the X-axis
    Metro();  // Call the boat drawing function
    glPopMatrix();
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
void Home4()
{
    glPushMatrix();
    glTranslatef(15.0f,6.5f,0.0f);
    glScalef(0.6f,0.6f,0.0f);
  //   glClear(GL_COLOR_BUFFER_BIT);
    glColor3ub(255,156,85);
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
void Sky()
{
     glBegin(GL_POLYGON);
     glColor3ub(135, 206, 235);
        glVertex2f(0,13); //A
        glVertex2f(19,13); // D
        glVertex2f(19,6.56); // p3
        glVertex2f(0,6.6); // o3
    glEnd();

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
void Tree2()
{
     glPushMatrix();
    glTranslatef(-8.0f,-0.9f,0.0f);
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
void Lamppost()
{
     glPushMatrix();
    glTranslatef(-5.0f, 6.0f, 0.0f);
	glScalef(0.4f, 0.4f, 0.0f);
    glBegin(GL_POLYGON);
	glColor3ub(   85, 66, 26    );

	glVertex2f(16.50f, 0.0f);//A
	glVertex2f(17.5f, 0.0f);//C

	glVertex2f(17.2f, 1.0f);//E
	glVertex2f(16.8f, 1.0f);//D
		glVertex2f(16.5f, 0.0f);//A

glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(  85, 66, 26    );

	glVertex2f(16.8f, 1.0f);//D
	glVertex2f(16.84f, 5.0f);//B

	glVertex2f(16.88f, 5.16f);//G
	glVertex2f(17.11f, 5.16f);//H
		glVertex2f(17.16f, 5.0f);//F
		glVertex2f(17.2f, 1.0f);//E
		glVertex2f(16.8f, 1.0f);//D

glEnd();
   glBegin(GL_POLYGON);
	glColor3ub(   85, 66, 26    );


	glVertex2f(16.88f, 5.16f);//G
	glVertex2f(17.11f, 5.16f);//H
	glVertex2f(17.31f, 5.4f);//J
	glVertex2f(16.69f, 5.4f);//I
	glVertex2f(16.88f, 5.16f);//G

glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(   249, 244, 90     );//Bulb

    glVertex2f(16.69f, 5.4f);//I
	glVertex2f(17.31f, 5.4f);//J
	glVertex2f(17.5f, 6.3f);//L
	glVertex2f(16.5f, 6.3f);//K
    glVertex2f(16.69f, 5.4f);//I
glEnd();

    glBegin(GL_LINE_LOOP);// to create border

   glColor3f(0.0f, 0.0f, 0.0f); // BLACK
      glVertex2f(16.69f, 5.4f);//I
	glVertex2f(17.31f, 5.4f);//J
	glVertex2f(17.5f, 6.3f);//L
	glVertex2f(16.5f, 6.3f);//K
    glVertex2f(16.69f, 5.4f);//I
	glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(   85, 66, 26    );

	glVertex2f(16.4f, 6.3f);//V
  	glVertex2f(17.6f, 6.3f);//W
  	glVertex2f(17.28f, 6.7f);//N
  	glVertex2f(16.75f, 6.7f);//M
  	glVertex2f(16.4f, 6.3f);//V

 glEnd();
   glBegin(GL_POLYGON);
	glColor3ub(   85, 66, 26    );

	glVertex2f(16.94f, 6.7f);//O
  	glVertex2f(17.11f, 6.7f);//T
  	glVertex2f(17.031f, 7.0f);//U

 glEnd();
 glBegin(GL_LINES);
	glColor3ub(   0,0,0  );

	glVertex2f(16.71f, 6.3f);//P
  	glVertex2f(16.94f, 5.4f);//Q
  	glVertex2f(17.25f, 6.29f);//R
  	glVertex2f(17.09f, 5.4f);//S

 glEnd();

glPopMatrix();


}
void Lamppost2()
{
    glPushMatrix();
    glTranslatef(1.7f, 6.0f, 0.0f);
	glScalef(0.4f, 0.4f, 0.0f);
    glBegin(GL_POLYGON);
	glColor3ub(   85, 66, 26    );

	glVertex2f(16.50f, 0.0f);//A
	glVertex2f(17.5f, 0.0f);//C

	glVertex2f(17.2f, 1.0f);//E
	glVertex2f(16.8f, 1.0f);//D
		glVertex2f(16.5f, 0.0f);//A

glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(  85, 66, 26    );

	glVertex2f(16.8f, 1.0f);//D
	glVertex2f(16.84f, 5.0f);//B

	glVertex2f(16.88f, 5.16f);//G
	glVertex2f(17.11f, 5.16f);//H
		glVertex2f(17.16f, 5.0f);//F
		glVertex2f(17.2f, 1.0f);//E
		glVertex2f(16.8f, 1.0f);//D

glEnd();
   glBegin(GL_POLYGON);
	glColor3ub(   85, 66, 26    );


	glVertex2f(16.88f, 5.16f);//G
	glVertex2f(17.11f, 5.16f);//H
	glVertex2f(17.31f, 5.4f);//J
	glVertex2f(16.69f, 5.4f);//I
	glVertex2f(16.88f, 5.16f);//G

glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(   249, 244, 90     );//Bulb

    glVertex2f(16.69f, 5.4f);//I
	glVertex2f(17.31f, 5.4f);//J
	glVertex2f(17.5f, 6.3f);//L
	glVertex2f(16.5f, 6.3f);//K
    glVertex2f(16.69f, 5.4f);//I
glEnd();

    glBegin(GL_LINE_LOOP);// to create border

   glColor3f(0.0f, 0.0f, 0.0f); // BLACK
      glVertex2f(16.69f, 5.4f);//I
	glVertex2f(17.31f, 5.4f);//J
	glVertex2f(17.5f, 6.3f);//L
	glVertex2f(16.5f, 6.3f);//K
    glVertex2f(16.69f, 5.4f);//I
	glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(   85, 66, 26    );

	glVertex2f(16.4f, 6.3f);//V
  	glVertex2f(17.6f, 6.3f);//W
  	glVertex2f(17.28f, 6.7f);//N
  	glVertex2f(16.75f, 6.7f);//M
  	glVertex2f(16.4f, 6.3f);//V

 glEnd();
   glBegin(GL_POLYGON);
	glColor3ub(   85, 66, 26    );

	glVertex2f(16.94f, 6.7f);//O
  	glVertex2f(17.11f, 6.7f);//T
  	glVertex2f(17.031f, 7.0f);//U

 glEnd();
 glBegin(GL_LINES);
	glColor3ub(   0,0,0  );

	glVertex2f(16.71f, 6.3f);//P
  	glVertex2f(16.94f, 5.4f);//Q
  	glVertex2f(17.25f, 6.29f);//R
  	glVertex2f(17.09f, 5.4f);//S

 glEnd();

glPopMatrix();


}
void Lamppost3()
{
     glPushMatrix();
    glTranslatef(9.0f, 6.0f, 0.0f);
	glScalef(0.4f, 0.4f, 0.0f);
    glBegin(GL_POLYGON);
	glColor3ub(   85, 66, 26    );

	glVertex2f(16.50f, 0.0f);//A
	glVertex2f(17.5f, 0.0f);//C

	glVertex2f(17.2f, 1.0f);//E
	glVertex2f(16.8f, 1.0f);//D
		glVertex2f(16.5f, 0.0f);//A

glEnd();
    glBegin(GL_POLYGON);
	glColor3ub(  85, 66, 26    );

	glVertex2f(16.8f, 1.0f);//D
	glVertex2f(16.84f, 5.0f);//B

	glVertex2f(16.88f, 5.16f);//G
	glVertex2f(17.11f, 5.16f);//H
		glVertex2f(17.16f, 5.0f);//F
		glVertex2f(17.2f, 1.0f);//E
		glVertex2f(16.8f, 1.0f);//D

glEnd();
   glBegin(GL_POLYGON);
	glColor3ub(   85, 66, 26    );


	glVertex2f(16.88f, 5.16f);//G
	glVertex2f(17.11f, 5.16f);//H
	glVertex2f(17.31f, 5.4f);//J
	glVertex2f(16.69f, 5.4f);//I
	glVertex2f(16.88f, 5.16f);//G

glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(   249, 244, 90     );//Bulb

    glVertex2f(16.69f, 5.4f);//I
	glVertex2f(17.31f, 5.4f);//J
	glVertex2f(17.5f, 6.3f);//L
	glVertex2f(16.5f, 6.3f);//K
    glVertex2f(16.69f, 5.4f);//I
glEnd();

    glBegin(GL_LINE_LOOP);// to create border

   glColor3f(0.0f, 0.0f, 0.0f); // BLACK
      glVertex2f(16.69f, 5.4f);//I
	glVertex2f(17.31f, 5.4f);//J
	glVertex2f(17.5f, 6.3f);//L
	glVertex2f(16.5f, 6.3f);//K
    glVertex2f(16.69f, 5.4f);//I
	glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(   85, 66, 26    );

	glVertex2f(16.4f, 6.3f);//V
  	glVertex2f(17.6f, 6.3f);//W
  	glVertex2f(17.28f, 6.7f);//N
  	glVertex2f(16.75f, 6.7f);//M
  	glVertex2f(16.4f, 6.3f);//V

 glEnd();
   glBegin(GL_POLYGON);
	glColor3ub(   85, 66, 26    );

	glVertex2f(16.94f, 6.7f);//O
  	glVertex2f(17.11f, 6.7f);//T
  	glVertex2f(17.031f, 7.0f);//U

 glEnd();
 glBegin(GL_LINES);
	glColor3ub(   0,0,0  );

	glVertex2f(16.71f, 6.3f);//P
  	glVertex2f(16.94f, 5.4f);//Q
  	glVertex2f(17.25f, 6.29f);//R
  	glVertex2f(17.09f, 5.4f);//S

 glEnd();

glPopMatrix();


}
void bench(){

    glPushMatrix();
    /*Transalation*/
    glTranslatef(3.5f, 6.2f, 0.0f);
    /*Scaling*/
	glScalef(0.3f, 0.3f, 0.0f);

    glBegin(GL_POLYGON);
	glColor3ub(   180, 133, 37    );

	glVertex2f(12.0f, 0.6f);//A
	glVertex2f(16.0f, 0.6f);//B

	glVertex2f(15.5f, 1.0f);//F
	glVertex2f(12.5f, 1.0f);//E
		glVertex2f(12.0f, 0.6f);//A
glEnd();
glBegin(GL_POLYGON);
	glColor3ub(  180, 133, 37    );

	glVertex2f(15.5f, 1.0f);//F
	glVertex2f(12.5f, 1.0f);//E
	glVertex2f(12.5f, 2.0f);//G
	glVertex2f(15.5f, 2.0f);//H
    glVertex2f(15.5f, 1.0f);//F
glEnd();
glBegin(GL_POLYGON);
	glColor3ub( 0,0,0  );

	glVertex2f(12.2f, 0.0f);//J
	glVertex2f(12.4f, 0.0f);//K
	glVertex2f(12.4f, 0.6f);//C
	glVertex2f(12.2f, 0.6f);//I
    glVertex2f(12.2f, 0.0f);//J
glEnd();
glBegin(GL_POLYGON);
	glColor3ub( 0,0,0  );

	glVertex2f(12.5f, 0.28f);//R
	glVertex2f(12.65f, 0.28f);//S
	glVertex2f(12.65f, 0.6f);//T
	glVertex2f(12.5f, 0.6f);//\Q
    glVertex2f(12.5f, 0.28f);//R
glEnd();
glBegin(GL_POLYGON);
	glColor3ub(  0,0,0   );

	glVertex2f(15.6f, 0.0f);//L
	glVertex2f(15.8f,0.0f);//N
	glVertex2f(15.8f, 0.6f);//M
	glVertex2f(15.6f,  0.6f);//D
    glVertex2f(15.6f, 0.0f);//L
glEnd();
glBegin(GL_POLYGON);
	glColor3ub(    0,0,0   );

	glVertex2f(15.35f, 0.3f);//W
	glVertex2f(15.5f,0.3f);//Z
	glVertex2f(15.5f, 0.6f);//U
	glVertex2f(15.35f,  0.6f);//V
    glVertex2f(15.35f, 0.0f);//W
glEnd();
glBegin(GL_LINES);
	glColor3ub(  135, 111, 82 );

	glVertex2f(15.5f, 1.0f);//F
	glVertex2f(12.5f, 1.0f);//E

glEnd();

glPopMatrix();
}

void bench2(){

    glPushMatrix();
    /*Transalation*/
    glTranslatef(8.0f, 6.2f, 0.0f);
    /*Scaling*/
	glScalef(0.3f, 0.3f, 0.0f);

    glBegin(GL_POLYGON);
	glColor3ub(180, 133, 37);

	glVertex2f(12.0f, 0.6f);//A
	glVertex2f(16.0f, 0.6f);//B

	glVertex2f(15.5f, 1.0f);//F
	glVertex2f(12.5f, 1.0f);//E
		glVertex2f(12.0f, 0.6f);//A
glEnd();
glBegin(GL_POLYGON);
	glColor3ub(  180, 133, 37    );

	glVertex2f(15.5f, 1.0f);//F
	glVertex2f(12.5f, 1.0f);//E
	glVertex2f(12.5f, 2.0f);//G
	glVertex2f(15.5f, 2.0f);//H
    glVertex2f(15.5f, 1.0f);//F
glEnd();
glBegin(GL_POLYGON);
	glColor3ub( 0,0,0  );

	glVertex2f(12.2f, 0.0f);//J
	glVertex2f(12.4f, 0.0f);//K
	glVertex2f(12.4f, 0.6f);//C
	glVertex2f(12.2f, 0.6f);//I
    glVertex2f(12.2f, 0.0f);//J
glEnd();
glBegin(GL_POLYGON);
	glColor3ub( 0,0,0  );

	glVertex2f(12.5f, 0.28f);//R
	glVertex2f(12.65f, 0.28f);//S
	glVertex2f(12.65f, 0.6f);//T
	glVertex2f(12.5f, 0.6f);//\Q
    glVertex2f(12.5f, 0.28f);//R
glEnd();
glBegin(GL_POLYGON);
	glColor3ub(  0,0,0   );

	glVertex2f(15.6f, 0.0f);//L
	glVertex2f(15.8f,0.0f);//N
	glVertex2f(15.8f, 0.6f);//M
	glVertex2f(15.6f,  0.6f);//D
    glVertex2f(15.6f, 0.0f);//L
glEnd();
glBegin(GL_POLYGON);
	glColor3ub(    0,0,0   );

	glVertex2f(15.35f, 0.3f);//W
	glVertex2f(15.5f,0.3f);//Z
	glVertex2f(15.5f, 0.6f);//U
	glVertex2f(15.35f,  0.6f);//V
    glVertex2f(15.35f, 0.0f);//W
glEnd();
glBegin(GL_LINES);
	glColor3ub(  135, 111, 82 );

	glVertex2f(15.5f, 1.0f);//F
	glVertex2f(12.5f, 1.0f);//E

glEnd();

glPopMatrix();
}
void Suncircle(float centerX, float centerY, float radius)
{
    glColor3ub(255, 234, 0);
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
void Sun()
{
    Suncircle(16.85,11.86,0.75);
}
void display() {
	glClear(GL_COLOR_BUFFER_BIT);
    TrainLineground();
    TrainLine();
    UndergroundWall();
    Road();
    //Car();
    moveCar(CarX);
    footpath();
    underground_light();
    //Metro();
    moveMetro(metroX);
    //trainwindow();
    Sky();
    Home();
    Home2();
    Home3();
    Home4();
   Cloud();
   Tree();
   Tree2();
   Lamppost();
    bench();
   Lamppost2();
   Lamppost3();
   bench2();
   Sun();

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
	glutTimerFunc(16, update, 0);
	glutTimerFunc(16, updatemetro, 0);
	glutMainLoop();
	return 0;
}


