#include <windows.h>
#include <GL/glut.h>
#include <math.h>


void initGL() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
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
void  Road()
{
     glBegin(GL_POLYGON);
	glColor3ub(182,133,90);

	glVertex2f(19,5);//H
	glVertex2f(0,5);//G
	glVertex2f(0,6.59);//I
	glVertex2f(19,6.63);//J
	glEnd();

}
void Land()
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
void Tree2()
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
void house()
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
	glColor3ub(0,0,0);

	glVertex2f(3.07,8.2);//s1
	glVertex2f(3.6,8.2);//v1
	glVertex2f(3.6,7.8);//u1
	glVertex2f(3.07,7.8);//t1

	glEnd();
}
void door()
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
void house2()
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
	glColor3ub(0,0,0);

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
void house3()
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
	glColor3ub(0,0,0);

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
//
void display() {
	glClear(GL_COLOR_BUFFER_BIT);
    River();
    Sky();
    Par();
    Road();
    boat();
    Land();
    Tree();
    khar();
    Tree2();
   house();
    door();
    house2();
    house3();
    Hill();
    Hill2();

    Sun();
    Cloud();
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
