#include <windows.h>
#include <GL/glut.h>
#include <math.h>

void update(int);
void initGL() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}
int dayFlag = 1;
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
float CarX = 0.0f;
float speed=0.0;
void update(int value) {
    // Clamp speed to prevent it from getting too high or too low
    if (speed > 1.0f) {
        speed = 0.0f;// Set a maximum speed
        CarX=0.0;
    }
    if (speed < -1.0f) {
        speed = 0.0f; // Set a minimum speed
        CarX=0.0;
    }

    // Move the car according to the speed
    CarX -= speed;

    // Reset the car position when it goes off-screen
    if (CarX < -17.0f) {
        CarX = 19.0f;
    } else if (CarX > 19.0f) {
        CarX = -17.0f;
    }

    // Redraw the scene
    glutPostRedisplay();

    // Call the update function again after 16ms (approx. 60 FPS)
  glutTimerFunc(16, update, 0);
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
//float CarX = 18.0f;



void moveCar(float variable) {
    glPushMatrix();
    glTranslatef(variable, 0.0f, 0.0f);  // Move the boat along the X-axis
    Car();  // Call the boat drawing function
    glPopMatrix();
}
void specialKeys(int key, int x, int y) {
    switch (key) {
      case GLUT_KEY_UP:
          speed+=0.1;
          //CarX-=0.05f;
          update(0);
          break;
      case GLUT_KEY_DOWN:
          speed-=0.1;
          //CarX+=0.05f;
          update(0);
          break;
    }
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

float MetroX = 0.0f;
float speedmetro = 0.0f;

void updatemetro(int value) {

    if (speedmetro > 0.5f) {
        speedmetro = 0.0f;  // Set a maximum speed
        MetroX = 0.0f;
    }
    if (speedmetro< -0.5f) {
        speedmetro = 0.0f;  // Set a minimum speed
        MetroX = 0.0f;
    }


    MetroX += speedmetro;

    // Reset the car position when it goes off-screen
    if (MetroX > 19.0f) {
        MetroX = -17.0f;
    } else if (MetroX < -17.0f) {
        MetroX = 19.0f;
    }


    glutPostRedisplay();


    glutTimerFunc(16, updatemetro, 0);
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

void moveMetro(float metrovariable) {
    glPushMatrix();
    glTranslatef(metrovariable, 0.0f, 0.0f);  // Move the boat along the X-axis
    Metro();  // Call the boat drawing function
    glPopMatrix();
}
/*void keyboard1(unsigned char key, int x, int y) {
    switch (key) {
        case 'a':  // 'A' to increase speed
        case 'A':
            speedmetro += 0.1f;  // Increase speed
            break;
        case 'd':  // 'D' to decrease speed
        case 'D':
            speedmetro -= 0.1f;  // Decrease speed
            break;
         default:
            // Ignore any other keys to prevent unintended behavior
            break;
    }
    //updatemetro(0);  // Call the update function to move the train
}*/

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
    //glColor3f(0.2f, 0.6f, 1.0f);
     if (dayFlag == 1) {  // Daytime
       glColor3f(0.2f, 0.6f, 1.0f); // Sky blue
    } else {  // Nighttime
        glColor3ub(255,255, 0);  // Black for night
    }
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
     if (dayFlag == 1) {  // Daytime
       glColor3f(0.2f, 0.6f, 1.0f); // Sky blue
    } else {  // Nighttime
        glColor3ub(255,194,0);  // Black for night
    }

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
	// glColor3ub(167,199,203);

    if (dayFlag == 1) {  // Daytime
        glColor3ub(167,199,203); // Sky blue
    } else {  // Nighttime
        glColor3ub(255,255, 0);  // Black for night
    }
	 glVertex2f(6.5,8.22);//f5
	glVertex2f(8.4,8.2);//G5
	glVertex2f(8.4,7);//H5
	glVertex2f(6.5,7.01);//I5
	glEnd();

	 glBegin(GL_POLYGON);
	 //glColor3ub(167,199,203);
	  if (dayFlag == 1) {
        glColor3ub(167,199,203);
    } else {  // Nighttime
        glColor3ub(255,255, 0);
    }
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
   // glColor3f(0.2f, 0.6f, 1.0f);
    if (dayFlag == 1) {  // Daytime
        glColor3ub(167,199,203); // Sky blue
    } else {  // Nighttime
        glColor3ub	(255,237,179);  // Black for night
    }
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
//int dayFlag = 1;  // 1 = Day, 0 = Night

void mouse(int button, int state, int x, int y) {
    if (state == GLUT_DOWN) {
        if (button == GLUT_LEFT_BUTTON) {
            dayFlag = 0;  // Turn to night
        }
        else if (button == GLUT_RIGHT_BUTTON) {
            dayFlag = 1;  // Turn to day
        }
        glutPostRedisplay();  // Redraw the scene after the click
    }
}

void Sky()
{
     glBegin(GL_POLYGON);

    // glColor3ub(135, 206, 235);
      if (dayFlag == 1) {  // Daytime
        glColor3ub(135, 206, 235);  // Sky blue
    } else {  // Nighttime
        glColor3ub(0, 0, 0);  // Black for night
    }
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
float cloudX = 0.0f;
void updatecloudc(int value) {
    cloudX += 0.02f;
    if (cloudX > 10.0f) {
        cloudX = -15.0f; // Reset boat position to the left side
    }
    // Redisplay the scene
    glutPostRedisplay();
    glutTimerFunc(16, updatecloudc, 0);
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
void movecloudc(float speed) {
    glPushMatrix();
    glTranslatef(speed, 0.0f, 0.0f);
    Cloud();
    glPopMatrix();
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
   // glColor3ub(255, 234, 0);
        if (dayFlag == 1) {  // Daytime
        glColor3f(1.0, 1.0, 0.0);  // Yellow Sun
    } else {  // Nighttime
        glColor3f(1.0, 1.0, 1.0);  // White Sun
    }
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

float sunY = 0.0;
void moveSun(float speed)
{
    glPushMatrix();
    glTranslatef(0.0, sunY, 0.0f);
    Sun();
    glPopMatrix();
}


void updateSun(int value)
{

    if (sunY < 0.3)
    {
        sunY += 0.01;
    }


    glutPostRedisplay();
    glutTimerFunc(16, updateSun, 0);
}


void River()
{
    glBegin(GL_POLYGON);
	glColor3ub(68,187,255);

	glVertex2f(0,0);//A
	glVertex2f(19,0);//B
	glVertex2f(19,4);//F
	glVertex2f(0,4);//E

glEnd();
}
void Par()
{
     glBegin(GL_POLYGON);
	glColor3ub(160, 82, 45);

	glVertex2f(0,4);//E
	glVertex2f(19,4);//F
	glVertex2f(19,4.56);//H
	glVertex2f(0,4.57);//G

     glEnd();

      glBegin(GL_POLYGON);
	glColor3ub(124, 252, 0);

	glVertex2f(0,5.19);//B1
	glVertex2f(19,5.23);//C1
	glVertex2f(19,4.56);//H
	glVertex2f(0,4.57);//G

     glEnd();
}
void  Roadv()
{
     glBegin(GL_POLYGON);
	glColor3ub(182,133,90);

	glVertex2f(19,5);//H
	glVertex2f(0,5);//G
	glVertex2f(0,6.59);//I
	glVertex2f(19,6.63);//J
	glEnd();

}
void Landv()
{
     glBegin(GL_POLYGON);
	glColor3ub(50, 205, 50);
	glVertex2f(0,6.59);//I
	glVertex2f(19,6.63);//J
	glVertex2f(19,8.23);//e1
	glVertex2f(0,8.19);//d1
	glEnd();
}
void boat()
{
    glBegin(GL_POLYGON);
	glColor3ub(0,0,0);

	glVertex2f(3.29,1.97);//K
	glVertex2f(5.16,1.59);//P
	glVertex2f(5.06,1.15);//L
	glEnd();

	 glBegin(GL_POLYGON);
	glColor3ub(0,0,0);

	glVertex2f(5.16,1.59);//P
	glVertex2f(5.06,1.15);//L
	glVertex2f(9.44,1.13);//M
	glVertex2f(9.54,1.57);//O
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(0,0,0);

	glVertex2f(9.54,1.57);//O
	glVertex2f(9.44,1.13);//M
	glVertex2f(11.44,2.01);//N
	glEnd();

		 glBegin(GL_POLYGON);
	glColor3ub(184, 115, 51);

	glVertex2f(5.16,1.59327);//P
	glVertex2f(6.00981,2.37021);//Q
	glVertex2f(7.38704,2.50242);//R
	glVertex2f(8.85241,2.40326);//S
	glVertex2f(9.54,1.57);//O
	glEnd();

    glLineWidth(2);
	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(5.61,2);//t
	glVertex2f(9.18,2);//u

	glVertex2f(6.58,2.42);//v
	glVertex2f(6.23,1.58);//w

	glVertex2f(7.99,2.46);//Z
	glVertex2f(7.78,1.58);//A1
	glEnd();
}
void Leafv(float centerX, float centerY, float radius)
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
void Treev()
{
    glPushMatrix();
    glTranslatef(-27.0f,-6.0f,0.0f);
    glScalef(2.0f,2.0f,0.0f);
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
void Tree2v()
{
    glPushMatrix();
    glTranslatef(-10.0f,1.0f,0.0f);
    glScalef(1.0f,1.0f,0.0f);
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
void housev()
{
    glBegin(GL_POLYGON);
	glColor3ub(160, 82, 45);

	glVertex2f(2.96807,8.79882);//F1
	glVertex2f(1.94634,7.76106);//L1
	glVertex2f(2.38387,7.76365);//M1
	glVertex2f(3.28,8.62);//N1

	glEnd();



	glBegin(GL_POLYGON);
	glColor3ub(204, 119, 34);
    glVertex2f(2.52127,7.29066);//k1
	glVertex2f(2.51,7.89);//j1
	glVertex2f(3.28,8.62);//n1
	glVertex2f(4.07,8.15);//p1
	glVertex2f(4.05,7.2);//o1

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(204, 119, 34);
    glVertex2f(4.07,8.15);//p1
	glVertex2f(4.05,7.2);//o1
	glVertex2f(6.43079,7.28021);//q1
	glVertex2f(6.43,7.98);//r1


	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(160, 82, 45);

	glVertex2f(2.96807,8.79882);//F1
	glVertex2f(4.45814,7.92193);//I1
	glVertex2f(7,8);//H1
	glVertex2f(5.84871,8.6981);//G1

	glEnd();

	/*glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(4.07,8.15);//p1
	glVertex2f(4.05,7.2);//o1
	glEnd();*/

	glBegin(GL_POLYGON);
	//glColor3ub(0,0,0);
     if (dayFlag == 1) {  // Daytime
        glColor3ub(0,0,0); // Sky blue
    } else {  // Nighttime
        glColor3ub	(255,237,179);  // Black for night
    }
	glVertex2f(3.07,8.2);//s1
	glVertex2f(3.6,8.2);//v1
	glVertex2f(3.6,7.8);//u1
	glVertex2f(3.07,7.8);//t1

	glEnd();
}
void doorv()
{
     glPushMatrix();
    glTranslatef(3.5f,5.12f,0.0f);
    glScalef(0.3f,0.3f,0.0f);
    glBegin(GL_POLYGON);
	glColor3ub(0,0,0);

	glVertex2f(5.97,7);//t
	glVertex2f(6.02,8.41);//u
	glVertex2f(6.98,8.41);//v
	glVertex2f(6.96,7);//w

	glEnd();
	 glPopMatrix();
}
void house2v()
{
     glPushMatrix();
    glTranslatef(2.5f,2.5f,0.0f);
    glScalef(0.7f,0.7f,0.0f);
    glBegin(GL_POLYGON);
	glColor3ub(160, 82, 45);

	glVertex2f(8.68,9.51);//w
	glVertex2f(13.86,9.48);//a1
	glVertex2f(13.81,7);//b1
	glVertex2f(8.68,7);//z

	glEnd();

	    glBegin(GL_POLYGON);
	glColor3ub(152, 133, 88);

	glVertex2f(8.01699,9.50951);//t
	glVertex2f(14.57297,9.47288);//u
	glVertex2f(11.31329,11.34079);//v
	//glVertex2f(8.68,7);//z

	glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(0,0,0);

	glVertex2f(10.72,7);//d1
	glVertex2f(10.72,8.58);//c1
	glVertex2f(12.04,8.58);//e1
	glVertex2f(12.04,7);//f1

	glEnd();
    glPopMatrix();
}
void house3v()
{
     glPushMatrix();
    glTranslatef(11.0f,3.5f,0.0f);
    glScalef(0.6f,0.6f,0.0f);
    glBegin(GL_POLYGON);
	glColor3ub(160, 82, 45);

	glVertex2f(2.96807,8.79882);//F1
	glVertex2f(1.94634,7.76106);//L1
	glVertex2f(2.38387,7.76365);//M1
	glVertex2f(3.28,8.62);//N1

	glEnd();



	glBegin(GL_POLYGON);
	glColor3ub(204, 119, 34);
    glVertex2f(2.52127,7.29066);//k1
	glVertex2f(2.51,7.89);//j1
	glVertex2f(3.28,8.62);//n1
	glVertex2f(4.07,8.15);//p1
	glVertex2f(4.05,7.2);//o1

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(204, 119, 34);
    glVertex2f(4.07,8.15);//p1
	glVertex2f(4.05,7.2);//o1
	glVertex2f(6.43079,7.28021);//q1
	glVertex2f(6.43,7.98);//r1


	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(160, 82, 45);

	glVertex2f(2.96807,8.79882);//F1
	glVertex2f(4.45814,7.92193);//I1
	glVertex2f(7,8);//H1
	glVertex2f(5.84871,8.6981);//G1

	glEnd();

	/*glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(4.07,8.15);//p1
	glVertex2f(4.05,7.2);//o1
	glEnd();*/

	glBegin(GL_POLYGON);
	//glColor3ub(0,0,0);
     if (dayFlag == 1) {  // Daytime
        glColor3ub(0,0,0); // Sky blue
    } else {  // Nighttime
        glColor3ub	(255,237,179);  // Black for night
    }
	glVertex2f(3.07,8.2);//s1
	glVertex2f(3.6,8.2);//v1
	glVertex2f(3.6,7.8);//u1
	glVertex2f(3.07,7.8);//t1

	glEnd();
	glPopMatrix();
}
void khar()
{
     glPushMatrix();
    glTranslatef(2.3f,2.6f,0.0f);
    glScalef(0.7f,0.7f,0.0f);
     glBegin(GL_POLYGON);
	glColor3ub(255,255,0);

	glVertex2f(9.28,9.21);//d1
	glVertex2f(7.5,10.13);//c1
	glVertex2f(6.13,8.38);//e1
	glVertex2f(6.16,7);//f1
	glVertex2f(9.35,7);//f1

	glEnd();
	glPopMatrix();
}
void Hill()
{
    glPushMatrix();
    glTranslatef(6.3f,4.0f,0.0f);
    glScalef(0.6f,0.6f,0.0f);
    glBegin(GL_POLYGON);
	glColor3ub(34, 139, 34);

	glVertex2f(14.56,7);//l
	glVertex2f(16.58,11.13);//m
	glVertex2f(18.26,7);//n
	glEnd();
	glPopMatrix();
}
void Hill2()
{
    glPushMatrix();
    glTranslatef(6.3f,3.3f,0.0f);
    glScalef(0.7f,0.7f,0.0f);
    glBegin(GL_POLYGON);
	glColor3ub(34, 139, 34);

	glVertex2f(14.56,7);//l
	glVertex2f(16.58,11.13);//m
	glVertex2f(18.26,7);//n
	glEnd();
	glPopMatrix();
}
void Suncirclev(float centerX, float centerY, float radius)
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
void Sunv()
{
    Suncircle(16.85,11.86,0.75);
}
void Cloudcirclev(float centerX, float centerY, float radius)
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
float cloudXc = 0.0f;
void updatecloudv(int value) {
    cloudXc+= 0.02f;


    if (cloudXc > 10.0f) {
        cloudXc = -15.0f; // Reset boat position to the left side
    }
    // Redisplay the scene
    glutPostRedisplay();
    glutTimerFunc(16, updatecloudv, 0);
}
void Cloudv()
{
     Cloudcirclev(13,11.88,0.60);
   Cloudcirclev(14,12,0.65);
   Cloudcirclev(14.75,12.03,0.60);
}
void movecloudv(float speed) {
    glPushMatrix();
    glTranslatef(speed, 0.0f, 0.0f);
    Cloud();
    glPopMatrix();
}
void Skyv()
{
     glBegin(GL_POLYGON);
   //  glColor3ub(135, 206, 235);
   if (dayFlag == 1) {  // Daytime
        glColor3ub(135, 206, 235);  // Sky blue
    } else {  // Nighttime
        glColor3ub(0, 0, 0);  // Black for night
    }

        glVertex2f(0,13); //A
        glVertex2f(19,13); // D
        glVertex2f(19,6.56); // p3
        glVertex2f(0,6.6); // o3
    glEnd();

}

//
float boatX = 0.0f;
float speedboat=0.0f;
/*void updatev(int value) {
    boatX += 0.02f;


    if (boatX > 19.0f) {
        boatX = -7.0f; // Reset boat position to the left side
    }
    // Redisplay the scene
    glutPostRedisplay();
    glutTimerFunc(16, updatev, 0);
}*/
void updateboat(int value) {
    // Clamp speed to prevent it from getting too high or too low
    if (speedboat > 0.5f) {
        speedboat = 0.0f;  // Set a maximum speed
        boatX = 0.0f;
    }
    if (speedboat< -0.5f) {
        speedboat = 0.0f;  // Set a minimum speed
        boatX = 0.0f;
    }

    // Move the car to the right according to the speed
    boatX += speedboat;
     if (boatX > 19.0f) {
        boatX = -7.0f; // Reset boat position to the left side
    }
    // Redisplay the scene
    glutPostRedisplay();
    glutTimerFunc(16, updateboat, 0);

}
void moveBoatv(float xOffset) {
    glPushMatrix();
    glTranslatef(xOffset, 0.0f, 0.0f);
    boat();
    glPopMatrix();
}


int flag = 0;
void keyboard(unsigned char key, int x, int y) {
   switch (key) {
      case 13:  // Enter key (ASCII code 13)
         flag++;
         if(flag>2)
         {
             flag=0;
         }
         glutPostRedisplay();  // Ensure the display is updated after the key press
         break;
          case 'a':
        case 'A':
            speedmetro += 0.1f;
            break;
        case 'd':
        case 'D':
            speedmetro -= 0.1f;
            break;
        case 'b':
        case 'B':
            speedboat+=0.01f;
            break;
        case 'n':
        case 'N':
            speedboat-=0.01;
            break;

   }
}




void display() {

    glClear(GL_COLOR_BUFFER_BIT);
    if (flag==0)

    {
      TrainLineground();
    TrainLine();
    UndergroundWall();
    Road();
    //Car();
    moveCar(CarX);
    footpath();
    underground_light();
    //Metro();
    moveMetro(MetroX);
    //trainwindow();
    Sky();
    Home();
    Home2();
    Home3();
    Home4();
   //Cloud();

   Tree();
   Tree2();
   Lamppost();
    bench();
   Lamppost2();
   Lamppost3();
   bench2();
   //Sun();
   moveSun(sunY);
    movecloudc(cloudX);

    }
    else{
          River();
    Skyv();
    Par();
    Roadv();

    //boat();
    moveBoatv(boatX);
    Landv();
   // Tree();
    khar();
    Tree2v();
   housev();
    doorv();
    house2v();
    house3v();
    Hill();
    Hill2();

    Sunv();
    //Cloud();
    movecloudv(cloudXc);
    Treev();
    }

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
	glutTimerFunc(16, updateboat, 0);
	glutTimerFunc(16, updatemetro, 0);
	 glutTimerFunc(16, updatecloudc, 0);
	glutTimerFunc(16, updatecloudv, 0);
	 glutTimerFunc(16, updateSun, 0);
	glutKeyboardFunc(keyboard);
    //glutKeyboardFunc(keyboard1);
		glutSpecialFunc(specialKeys);
		//glutSpecialFunc(specialKeys);

     glutMouseFunc(mouse);


	glutMainLoop();
	return 0;
}


