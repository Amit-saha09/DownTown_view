#include <windows.h>
#include <stdio.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include <cstdio>
#include<math.h>
#include<iostream>
using namespace std;

# define PI           3.14159265358979323846

GLfloat position = 0.0f;
GLfloat speed = 0.0f;

GLfloat position1 = 0.0f;
GLfloat speed1 = 0.005f;

float _move_cloud_1 = 0.00f;
float _move_cloud_2 = 0.00f;
float _move_cloud_3 = 0.00f;

float car_move = 0.00f;
float truck_move = 0.00f;
float train_move = 0.00f;

float plane_move = 0.00f;

float rain_translate = 0.00f;

float _move_snow_1 = 0.00f;
float _move_snow_2 = 0.00f;
float _move_snow_3 = 0.00f;
float _move_snow_4 = 0.00f;
float _move_snow_5 = 0.00f;
float _move_snow_6 = 0.00f;
float _move_snow_7 = 0.00f;
float _move_snow_8 = 0.00f;
float _move_snow_9 = 0.00f;
float _move_snow_10 = 0.00f;


///view for default page

char Top[] = "Welcome to Computer Graphics Project";
char Title[] = "Downtown View";
char Instructions[] = "Instructions:";
char Instructions1[] = "Press D for Day View";
char Instructions2[] = "Press N for Night View";
char Instructions3[] = "Press R for Rain View";
char Instructions4[] = "Press W for Winter View";
char Instructions5[] = "Press S for Snow View";
char Instructions6[] = "Press Q for Snow-Night View";
char Instructions7[] = "Press P for Rain-Night View";
char Instructions8[] = "Press H for Default View";


void myInit(void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 970.0, 0.0, 720.0);
}

void Idle()
{
    glutPostRedisplay();                     /// marks the current window as needing to be redisplayed
}


void update_snow_1(int value)
{
    _move_snow_1 += 0.0025f;
    if(_move_snow_1-1.3 > 1.0)
        {
            _move_snow_1 = -1.0;
        }
	glutPostRedisplay();                    ///Notify GLUT that the display has changed
	glutTimerFunc(5, update_snow_1, 0);     ///Notify GLUT to call update again in 20 milliseconds
}


void update_snow_2(int value)
{
    _move_snow_2 += 0.0025f;
    if(_move_snow_2-1.3 > 1.0)
        {
            _move_snow_2 = -1.0;
        }
	glutPostRedisplay();
	glutTimerFunc(2, update_snow_2, 0);
}


void update_snow_3(int value)
{
    _move_snow_3 += 0.0025f;
    if(_move_snow_3-1.3 > 1.0)
        {
            _move_snow_3 = -1.0;
        }
	glutPostRedisplay();
	glutTimerFunc(3, update_snow_3, 0);
}


void update_snow_4(int value)
{
    _move_snow_4 += 0.0025f;
    if(_move_snow_4-1.3 > 1.0)
        {
            _move_snow_4 = -1.0;
        }
	glutPostRedisplay();
	glutTimerFunc(8, update_snow_4, 0);
}


void update_snow_5(int value)
{
    _move_snow_5 += 0.0025f;
    if(_move_snow_5-1.3 > 1.0)
        {
            _move_snow_5 = -1.0;
        }
	glutPostRedisplay();
	glutTimerFunc(9, update_snow_5, 0);
}



void update_snow_6(int value)
{
    _move_snow_6 += 0.0025f;
    if(_move_snow_6-1.3 > 1.0)
        {
            _move_snow_6 = -1.0;
        }
	glutPostRedisplay();
	glutTimerFunc(2, update_snow_6, 0);
}


void update_snow_7(int value)
{
    _move_snow_7 += 0.0025f;
    if(_move_snow_7-1.3 > 1.0)
        {
            _move_snow_7 = -1.0;
        }
	glutPostRedisplay();
	glutTimerFunc(6, update_snow_7, 0);
}


void update_snow_8(int value)
{
    _move_snow_8 += 0.0025f;
    if(_move_snow_8-1.3 > 1.0)
        {
            _move_snow_8 = -1.0;
        }
	glutPostRedisplay();
	glutTimerFunc(8, update_snow_8, 0);
}


void update_snow_9(int value)
{
    _move_snow_9 += 0.0025f;
    if(_move_snow_9-1.3 > 1.0)
        {
            _move_snow_9 = -1.0;
        }
	glutPostRedisplay();
	glutTimerFunc(7, update_snow_9, 0);
}


void update_snow_10(int value)
{
    _move_snow_10 += 0.0025f;
    if(_move_snow_10-1.3 > 1.0)
        {
            _move_snow_10 = -1.0;
        }
	glutPostRedisplay();
	glutTimerFunc(1, update_snow_10, 0);
}


void drawsnow(float xx,float yy)
{
    int i;


	GLfloat x=xx; GLfloat y=yy; GLfloat radius =.007f;
	int triangleAmount = 20;                            ///Number of triangles used to draw circle


	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(225, 226, 230);
    glVertex2f(x, y);                                   ///center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f
			(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


void snow()
{
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(0.0f,- _move_snow_1, 0.0f);

    drawsnow(-.95,.95);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.0f,- _move_snow_2, 0.0f);

    drawsnow(-.85,.85);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.0f,- _move_snow_3, 0.0f);

    drawsnow(-.75,.75);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.0f,- _move_snow_8, 0.0f);

    drawsnow(-.65,.65);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.0f,- _move_snow_4, 0.0f);

    drawsnow(-.55,.55);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.0f,- _move_snow_1, 0.0f);

    drawsnow(-.45,.45);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.0f,- _move_snow_10, 0.0f);


    drawsnow(-.35,.35);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.0f,- _move_snow_6, 0.0f);

    drawsnow(-.25,.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.0f,- _move_snow_7, 0.0f);

    drawsnow(-.15,.15);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.0f,- _move_snow_6, 0.0f);

    drawsnow(-.05,.05);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.0f,- _move_snow_2, 0.0f);

    drawsnow(.05,-.05);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.0f,- _move_snow_3, 0.0f);

    drawsnow(.15,-.15);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.0f,- _move_snow_1, 0.0f);

    drawsnow(.25,-.25);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.0f,- _move_snow_9, 0.0f);

    drawsnow(.35,-.35);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.0f,- _move_snow_8, 0.0f);

    drawsnow(.45,-.45);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.0f,- _move_snow_4, 0.0f);

    drawsnow(.55,-.55);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.0f,- _move_snow_3, 0.0f);

    drawsnow(.65,-.65);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.0f,- _move_snow_1, 0.0f);

    drawsnow(.75,-.75);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.0f,- _move_snow_10, 0.0f);


    drawsnow(.85,-.85);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.0f,- _move_snow_1, 0.0f);

    drawsnow(.95,-.95);
    glPopMatrix();


}

void thunder()
 {
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(224,224,224);
    glVertex2f(0,.95);
    glVertex2f(.05,.85);
    glVertex2f(.05,.85);
    glVertex2f(.09,.89);
    glVertex2f(.09,.89);
    glVertex2f(.15,.76);
    glEnd();
}

void print( float x, float y, char *st)
{
    int l,i;

    l=strlen( st );                 /// see how many characters are in text string.
    glColor3f(0,0,0);
                                    /// glDisable(GL_LIGHTING);
    glRasterPos2f( x, y);           /// location to start printing text

    for( i=0; i < l; i++)           /// loop until i is greater then l
        {
           glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, st[i]);
        }
}


void titleprint( float x, float y, char *st)
{
    int l,i;

    l=strlen( st );                 /// see how many characters are in text string.
    glColor3f(0,0,0);
                                    ///glDisable(GL_LIGHTING);
    glRasterPos2f( x, y);           /// location to start printing text

    for( i=0; i < l; i++)           /// loop until i is greater then l
        {
           glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, st[i]);
        }
}


void topprint( float x, float y, char *st)
{
    int l,i;

    l=strlen( st );                  /// see how many characters are in text string.
    glColor3f(0,0,0);
                                     ///glDisable(GL_LIGHTING);
    glRasterPos2f( x, y);            /// location to start printing text

    for( i=0; i < l; i++)            /// loop until i is greater then l
        {
           glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, st[i]);
        }
}



void printview( float x, float y, char *st)
{
    int l,i;

    l=strlen( st );                 /// see how many characters are in text string.
    glColor3f(1,0,1);
                                    ///glDisable(GL_LIGHTING);
    glRasterPos2f( x, y);           /// location to start printing text

    for( i=0; i < l; i++)           /// loop until i is greater then l
        {
           glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, st[i]);
        }
}





void update_car(int value)
{
    car_move += 0.0025f;
    if(car_move-1.3 > 1.0)
        {
            car_move = -1.0;
        }
	glutPostRedisplay();                    ///Notify GLUT that the display has changed
	glutTimerFunc(10, update_car, 0);       ///Notify GLUT to call update again in 20 milliseconds
}

void update_truck(int value)
{
    truck_move += 0.0025f;
    if(truck_move-1.3 > 1.0)
        {
            truck_move = -1.0;
        }
	glutPostRedisplay();                    ///Notify GLUT that the display has changed
	glutTimerFunc(20, update_truck, 0);     ///Notify GLUT to call update again in 20 milliseconds
}

void update_train(int value)
{
    train_move += 0.0025f;
    if(train_move-1.3 > 1.0)
        {
            train_move = -1.0;
        }
	glutPostRedisplay();                    ///Notify GLUT that the display has changed
	glutTimerFunc(15, update_train, 0);     ///Notify GLUT to call update again in 20 milliseconds
}


void update_plane(int value)
{
    plane_move += 0.0025f;
    if(plane_move-1.3 > 1.0)
        {
            plane_move = -1.0;
        }
	glutPostRedisplay();                    ///Notify GLUT that the display has changed
	glutTimerFunc(18, update_plane, 0);     ///Notify GLUT to call update again in 20 milliseconds
}


void WalkWay()
{

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.9,-.65);
    glVertex2f(-.8,-.65);
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.7,-.65);
    glVertex2f(-.6,-.65);
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.5,-.65);
    glVertex2f(-.4,-.65);
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.3,-.65);
    glVertex2f(-.2,-.65);
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.1,-.65);
    glVertex2f(0,-.65);
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.1,-.65);
    glVertex2f(.2,-.65);
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.3,-.65);
    glVertex2f(.4,-.65);
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.5,-.65);
    glVertex2f(.6,-.65);
    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.7,-.65);
    glVertex2f(.8,-.65);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.9,-.65);
    glVertex2f(1,-.65);
    glEnd();

    ///1st
    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.98,-.51);
    glVertex2f(-.93,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.9,-.51);
    glVertex2f(-.85,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.82,-.51);
    glVertex2f(-.77,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.74,-.51);
    glVertex2f(-.69,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.66,-.51);
    glVertex2f(-.61,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.58,-.51);
    glVertex2f(-.53,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.5,-.51);
    glVertex2f(-.45,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.42,-.51);
    glVertex2f(-.37,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.34,-.51);
    glVertex2f(-.29,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.26,-.51);
    glVertex2f(-.21,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.18,-.51);
    glVertex2f(-.13,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.1,-.51);
    glVertex2f(-.05,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.02,-.51);
    glVertex2f(.03,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.06,-.51);
    glVertex2f(.11,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.14,-.51);
    glVertex2f(.19,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.22,-.51);
    glVertex2f(.27,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.3,-.51);
    glVertex2f(.35,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.38,-.51);
    glVertex2f(.43,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.46,-.51);
    glVertex2f(.51,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.54,-.51);
    glVertex2f(.59,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.62,-.51);
    glVertex2f(.67,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.7,-.51);
    glVertex2f(.75,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.78,-.51);
    glVertex2f(.83,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.86,-.51);
    glVertex2f(.91,-.51);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.94,-.51);
    glVertex2f(.99,-.51);
    glEnd();

    ///2nd
    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.98,-.79);
    glVertex2f(-.93,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.9,-.79);
    glVertex2f(-.85,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.82,-.79);
    glVertex2f(-.77,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.74,-.79);
    glVertex2f(-.69,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.66,-.79);
    glVertex2f(-.61,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.58,-.79);
    glVertex2f(-.53,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.5,-.79);
    glVertex2f(-.45,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.42,-.79);
    glVertex2f(-.37,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.34,-.79);
    glVertex2f(-.29,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.26,-.79);
    glVertex2f(-.21,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.18,-.79);
    glVertex2f(-.13,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.1,-.79);
    glVertex2f(-.05,-.79);
    glEnd();


    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(-.02,-.79);
    glVertex2f(.03,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.06,-.79);
    glVertex2f(.11,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.14,-.79);
    glVertex2f(.19,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.22,-.79);
    glVertex2f(.27,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.3,-.79);
    glVertex2f(.35,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.38,-.79);
    glVertex2f(.43,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.46,-.79);
    glVertex2f(.51,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.54,-.79);
    glVertex2f(.59,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.62,-.79);
    glVertex2f(.67,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.7,-.79);
    glVertex2f(.75,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.78,-.79);
    glVertex2f(.83,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.86,-.79);
    glVertex2f(.91,-.79);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(1,1,1);

    glVertex2f(.94,-.79);
    glVertex2f(.99,-.79);
    glEnd();
}

void cloud_left()
{
    ///Cloud on the left
    glLoadIdentity();
	glMatrixMode(GL_MODELVIEW);

    glPushMatrix();
    glTranslatef(-0.78,0.82,0);
    glScalef(0.6,1,1);
    glColor3f(1.000, 1.000, 1.000);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.06;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_cloud_1, 0.0f, 0.0f);
    glTranslatef(-0.74,0.87,0);
    glScalef(0.6,1,1);
    glColor3f(1.000, 1.000, 1.000);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.075;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_cloud_1, 0.0f, 0.0f);
        glTranslatef(-0.70,0.91,0);
        glScalef(0.6,1,1);
        glColor3f(1.000, 1.000, 1.000);
        glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.075;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_cloud_1, 0.0f, 0.0f);
    glTranslatef(-0.65,0.88,0);
    glScalef(0.6,1,1);
    glColor3f(1.000, 1.000, 1.000);
    glBegin(GL_POLYGON);
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.07;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_cloud_1, 0.0f, 0.0f);
    glTranslatef(-0.61,0.80,0);
    glScalef(0.6,1,1);
    glColor3f(1.000, 1.000, 1.000);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.06;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_cloud_1, 0.0f, 0.0f);
    glTranslatef(-0.68,0.77,0);
    glScalef(0.6,1,1);
    glColor3f(1.000, 1.000, 1.000);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.075;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_cloud_1, 0.0f, 0.0f);
    glTranslatef(-0.75,0.78,0);
    glScalef(0.6,1,1);
    glColor3f(1.000, 1.000, 1.000);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.06;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();
}

void cloud_right()
{
    ///Cloud on the right
    glLoadIdentity();
	glMatrixMode(GL_MODELVIEW);

    glPushMatrix();
    glTranslatef(_move_cloud_2, 0.0f, 0.0f);
    glTranslatef(0.78,0.70,0);
    glScalef(0.6,1,1);
    glColor3f(1.000, 1.000, 1.000);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.06;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_cloud_2, 0.0f, 0.0f);
    glTranslatef(0.74,0.75,0);
    glScalef(0.6,1,1);
    glColor3f(1.000, 1.000, 1.000);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.075;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_cloud_2, 0.0f, 0.0f);
    glTranslatef(0.70,0.79,0);
    glScalef(0.6,1,1);
    glColor3f(1.000, 1.000, 1.000);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.075;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_cloud_2, 0.0f, 0.0f);
    glTranslatef(0.65,0.76,0);
    glScalef(0.6,1,1);
    glColor3f(1.000, 1.000, 1.000);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.07;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_cloud_2, 0.0f, 0.0f);
    glTranslatef(0.61,0.76,0);
    glScalef(0.6,1,1);
    glColor3f(1.000, 1.000, 1.000);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.06;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_cloud_2, 0.0f, 0.0f);
    glTranslatef(0.68,0.65,0);
    glScalef(0.6,1,1);
    glColor3f(1.000, 1.000, 1.000);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.075;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_cloud_2, 0.0f, 0.0f);
    glTranslatef(0.63,0.66,0);
    glScalef(0.6,1,1);
    glColor3f(1.000, 1.000, 1.000);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.075;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(_move_cloud_2, 0.0f, 0.0f);
    glTranslatef(0.75,0.66,0);
    glScalef(0.6,1,1);
    glColor3f(1.000, 1.000, 1.000);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.06;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }
    glEnd();
    glPopMatrix();
}

void sky(int x,int y, int z)
{
    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(-1,1);
    glVertex2f(-1,-.1);
    glVertex2f(1,-.1);
    glVertex2f(1,1);
    glEnd();
}

void fgrass(int x,int y,int z)
{
    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(-1,-.1);
    glVertex2f(-1,-.5);
    glVertex2f(1,-.5);
    glVertex2f(1,-.1);
    glEnd();
}

void road()
{
    glBegin(GL_QUADS);
    glColor3ub(15, 15, 15);
    glVertex2f(-1,-.5);
    glVertex2f(-1,-.8);
    glVertex2f(1,-.8);
    glVertex2f(1,-.5);
    glEnd();
}

void wheels(float xx,float yy,float rr,int r,int g,int b)
{
    int i;

	GLfloat x=xx; GLfloat y=yy; GLfloat radius =rr;
	int triangleAmount = 20;                ///# of triangles used to draw circle

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(r,g,b);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++)
        {
            glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),
                       y + (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();
}

void movingtruck()
{
    glTranslatef(-.1,-.22,0);
    glScalef(.8,.65,0);

    glPushMatrix();
    glTranslatef(truck_move, 0.0f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(30, 113, 247);
    glVertex2f(-.8,-.42);
    glVertex2f(-.8,-.57);
    glVertex2f(-.6,-.57);
    glVertex2f(-.6,-.42);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(46, 105, 199);
    glVertex2f(-.6,-.45);
    glVertex2f(-.6,-.57);
    glVertex2f(-.45,-.57);
    glVertex2f(-.45,-.52);
    glVertex2f(-.55,-.45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(95, 103, 115);
    glVertex2f(-.589,-.46);
    glVertex2f(-.589,-.52);
    glVertex2f(-.47,-.52);
    glVertex2f(-.55,-.46);
    glEnd();

    ///last wheel of truck
    wheels(-.760,-.57,.03,100, 101, 102);
    wheels(-.760,-.57,.02,255, 255, 255);
    wheels(-.760,-.57,.01,8, 8, 8);

    ///first wheel of truck
    wheels(-.5,-.57,.03,100, 101, 102);
    wheels(-.5,-.57,.02,255, 255, 255);
    wheels(-.5,-.57,.01,8, 8, 8);
    glPopMatrix();
}

void car(int x, int y, int z)
{
    ///body
    glBegin(GL_POLYGON);
    glColor3ub(x,y,z);
    glVertex2f(.7,-.64);
    glVertex2f(.67,-.71);
    glVertex2f(.65,-.7);
    glVertex2f(.65,-.72);
    glVertex2f(.82,-.72);
    glVertex2f(.82,-.67);
    glVertex2f(.8,-.64);
    glEnd();

    ///first window
    glBegin(GL_QUADS);
    glColor3ub(120, 113, 114);
    glVertex2f(.7,-.65);
    glVertex2f(.67,-.69);
    glVertex2f(.72,-.69);
    glVertex2f(.72,-.65);
    glEnd();

    ///2nd window
     glBegin(GL_QUADS);
    glColor3ub(120, 113, 114);
    glVertex2f(.73,-.65);
    glVertex2f(.73,-.69);
    glVertex2f(.76,-.69);
    glVertex2f(.76,-.65);
    glEnd();

    ///3rd window
    glBegin(GL_QUADS);
    glColor3ub(120, 113, 114);
    glVertex2f(.77,-.65);
    glVertex2f(.77,-.69);
    glVertex2f(.81,-.69);
    glVertex2f(.79,-.65);
    glEnd();

    ///last wheel of car
    wheels(.68,-.72,.02,100, 101, 102);
    wheels(.68,-.72,.01,255, 255, 255);
    wheels(.68,-.72,.005,8, 8, 8);

    ///first wheel of car
    wheels(.79,-.72,.02,100, 101, 102);
    wheels(.79,-.72,.01,255, 255, 255);
    wheels(.79,-.72,.005,8, 8, 8);
}

void movingcar()
{
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(-car_move, 0.0f, 0.0f);

    ///body
    glBegin(GL_POLYGON);
    glColor3ub(252, 66, 97);
    glVertex2f(.7,-.64);
    glVertex2f(.67,-.71);
    glVertex2f(.65,-.7);
    glVertex2f(.65,-.72);
    glVertex2f(.82,-.72);
    glVertex2f(.82,-.67);
    glVertex2f(.8,-.64);
    glEnd();

    ///first window
    glBegin(GL_QUADS);
    glColor3ub(120, 113, 114);
    glVertex2f(.7,-.65);
    glVertex2f(.67,-.69);
    glVertex2f(.72,-.69);
    glVertex2f(.72,-.65);
    glEnd();

    ///2nd window
    glBegin(GL_QUADS);
    glColor3ub(120, 113, 114);
    glVertex2f(.73,-.65);
    glVertex2f(.73,-.69);
    glVertex2f(.76,-.69);
    glVertex2f(.76,-.65);
    glEnd();

    ///3rd window
    glBegin(GL_QUADS);
    glColor3ub(120, 113, 114);
    glVertex2f(.77,-.65);
    glVertex2f(.77,-.69);
    glVertex2f(.81,-.69);
    glVertex2f(.79,-.65);
    glEnd();

    ///last wheel of car
    wheels(.68,-.72,.02,100, 101, 102);
    wheels(.68,-.72,.01,255, 255, 255);
    wheels(.68,-.72,.005,8, 8, 8);

    ///first wheel of car
    wheels(.79,-.72,.02,100, 101, 102);
    wheels(.79,-.72,.01,255, 255, 255);
    wheels(.79,-.72,.005,8, 8, 8);
    glPopMatrix();
}

void lgrass(int x,int y, int z)
{
    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(-1,-.8);
    glVertex2f(-1,-1);
    glVertex2f(1,-1);
    glVertex2f(1,-.8);
    glEnd();
}

void sun()
{
    int i;

	GLfloat x=0.45f; GLfloat y=.85f; GLfloat radius =.1f;
	int triangleAmount = 20;            ///# of triangles used to draw circle
                                        ///GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 78);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++)
        {
            glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),
                       y + (radius * sin(i * twicePi / triangleAmount)));
        }
	glEnd();
}



/// ###############################################################################################################


void movingtrain()
{
    glLoadIdentity();

    glTranslatef(-.1,-.24,0);
    glScalef(.7,.5,0);
    glPushMatrix();

    glTranslatef(train_move, 0.0f, 0.0f);



    ///1st Compartment

    glBegin(GL_QUADS);
    glColor3ub(124, 131, 153);
    glVertex2f(-.8,-.225);
    glVertex2f(-.8,-.365);
    glVertex2f(-.5,-.365);
    glVertex2f(-.5,-.225);
    glEnd();





    ///1st window

    glBegin(GL_QUADS);
    glColor3ub(237, 239, 242);
    glVertex2f(-.775,-.245);
    glVertex2f(-.775,-.29);
    glVertex2f(-.725,-.29);
    glVertex2f(-.725,-.245);
    glEnd();

    ///2nd window

    glBegin(GL_QUADS);
    glColor3ub(237, 239, 242);
    glVertex2f(-.705,-.245);
    glVertex2f(-.705,-.29);
    glVertex2f(-.655,-.29);
    glVertex2f(-.655,-.245);
    glEnd();

    ///3rd window

    glBegin(GL_QUADS);
    glColor3ub(237, 239, 242);
    glVertex2f(-.635,-.245);
    glVertex2f(-.635,-.29);
    glVertex2f(-.585,-.29);
    glVertex2f(-.585,-.245);
    glEnd();


    ///4th window

    glBegin(GL_QUADS);
    glColor3ub(237, 239, 242);
    glVertex2f(-.565,-.245);
    glVertex2f(-.565,-.29);
    glVertex2f(-.515,-.29);
    glVertex2f(-.515,-.245);
    glEnd();


    ///midleline

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(1,0,0);
    glVertex2f(-.8,-.32);
    glVertex2f(-.5,-.32);
    glEnd();


    ///line

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.5,-.35);
    glVertex2f(-.48,-.35);
    glEnd();


    glPopMatrix();
    glPushMatrix();
    glTranslatef(train_move, 0.0f, 0.0f);



    ///2nd Compartment


    glBegin(GL_QUADS);
    glColor3ub(124, 131, 153);
    glVertex2f(-.48,-.225);
    glVertex2f(-.48,-.365);
    glVertex2f(-.18,-.365);
    glVertex2f(-.18,-.225);
    glEnd();






    ///midleline

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(1,0,0);
    glVertex2f(-.48,-.32);
    glVertex2f(-.18,-.32);
    glEnd();


    ///line

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.18,-.35);
    glVertex2f(-.16,-.35);
    glEnd();


     ///1stwindow


    glBegin(GL_QUADS);
    glColor3ub(237, 239, 242);
    glVertex2f(-.455,-.245);
    glVertex2f(-.455,-.29);
    glVertex2f(-.405,-.29);
    glVertex2f(-.405,-.245);
    glEnd();

    ///2ndwindow

    glBegin(GL_QUADS);
    glColor3ub(237, 239, 242);
    glVertex2f(-.385,-.245);
    glVertex2f(-.385,-.29);
    glVertex2f(-.335,-.29);
    glVertex2f(-.335,-.245);
    glEnd();

    ///3rdwindow

    glBegin(GL_QUADS);
    glColor3ub(237, 239, 242);
    glVertex2f(-.315,-.245);
    glVertex2f(-.315,-.29);
    glVertex2f(-.265,-.29);
    glVertex2f(-.265,-.245);
    glEnd();


    ///4thwindow

    glBegin(GL_QUADS);
    glColor3ub(237, 239, 242);
    glVertex2f(-.245,-.245);
    glVertex2f(-.245,-.29);
    glVertex2f(-.195,-.29);
    glVertex2f(-.195,-.245);
    glEnd();


    glPopMatrix();
    glPushMatrix();
    glTranslatef(train_move, 0.0f, 0.0f);


    ///3rd Compartment


    glBegin(GL_QUADS);
    glColor3ub(124, 131, 153);
    glVertex2f(-.16,-.225);
    glVertex2f(-.16,-.365);
    glVertex2f(.16,-.365);
    glVertex2f(.16,-.225);
    glEnd();






    ///midleline

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(1,0,0);
    glVertex2f(-.16,-.32);
    glVertex2f(.16,-.32);
    glEnd();

    ///line

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.16,-.35);
    glVertex2f(.18,-.35);
    glEnd();


    ///1stwindow

    glBegin(GL_QUADS);
    glColor3ub(237, 239, 242);
    glVertex2f(-.135,-.245);
    glVertex2f(-.135,-.29);
    glVertex2f(-.085,-.29);
    glVertex2f(-.085,-.245);
    glEnd();

    ///2ndwindow

    glBegin(GL_QUADS);
    glColor3ub(237, 239, 242);
    glVertex2f(-.065,-.245);
    glVertex2f(-.065,-.29);
    glVertex2f(-.015,-.29);
    glVertex2f(-.015,-.245);
    glEnd();

    ///3rdwindow

    glBegin(GL_QUADS);
    glColor3ub(237, 239, 242);
    glVertex2f(-.0005,-.245);
    glVertex2f(-.0005,-.29);
    glVertex2f(0.055,-.29);
    glVertex2f(0.055,-.245);
    glEnd();


    ///4thwindow

    glBegin(GL_QUADS);
    glColor3ub(237, 239, 242);
    glVertex2f(.075,-.245);
    glVertex2f(.075,-.29);
    glVertex2f(.128,-.29);
    glVertex2f(.128,-.245);
    glEnd();

    glPopMatrix();
    glPushMatrix();
    glTranslatef(train_move, 0.0f, 0.0f);


    ///Engine


    glBegin(GL_POLYGON);
    glColor3ub(47, 70, 138);
    glVertex2f(.18,-.225);
    glVertex2f(.18,-.365);
    glVertex2f(.48,-.365);
    glVertex2f(.48,-.29);
    glVertex2f(.4,-.225);
    glEnd();



    ///Engine Single window

    glBegin(GL_QUADS);
    glColor3ub(237, 239, 242);
    glVertex2f(.38,-.24);
    glVertex2f(.38,-.29);
    glVertex2f(.455,-.29);
    glVertex2f(.39,-.24);
    glEnd();


    ///midleline

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(1,0,0);
    glVertex2f(.18,-.32);
    glVertex2f(.48,-.32);
    glEnd();
    glPopMatrix();
}


void building(int x , int y , int z){

    //body

    glBegin(GL_QUADS);
    glColor3ub(0, 102, 102);
    glVertex2f(-.98,.8);
    glVertex2f(-.98,-.1);
    glVertex2f(-.8,-.1);
    glVertex2f(-.8,.8);
    glEnd();

   //topline

    glLineWidth(5.0);
    glBegin(GL_LINES);
    glColor3f(.2,.2,.2);
    glVertex2f(-.98,.45);
    glVertex2f(-.8,.45);
    glEnd();

   //window
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-.946,.720);
    glVertex2f(-.946,.520);
    glVertex2f(-.83,.520);
    glVertex2f(-.83,.720);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(224,224,224);
    glVertex2f(-.94,.710);
    glVertex2f(-.94,.530);
    glVertex2f(-.84,.530);
    glVertex2f(-.84,.710);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-.946,.400);
    glVertex2f(-.946,.200);
    glVertex2f(-.83,.200);
    glVertex2f(-.83,.400);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(224,224,224);
    glVertex2f(-.94,.390);
    glVertex2f(-.94,.210);
    glVertex2f(-.84,.210);
    glVertex2f(-.84,.390);
    glEnd();

    //door

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-.918,-.1);
    glVertex2f(-.918,.11);
    glVertex2f(-.860,.11);
    glVertex2f(-.860,-.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(150, 69, 19);
    glVertex2f(-.910,-.1);
    glVertex2f(-.910,.10);
    glVertex2f(-.867,.10);
    glVertex2f(-.867,-.1);
    glEnd();


}



void university(int x,int y,int z){


    //body

    glBegin(GL_QUADS);
    glColor3ub(180, 0, 0);
    glVertex2f(-.78,.5);
    glVertex2f(-.78,-.1);
    glVertex2f(0,-.1);
    glVertex2f(0,.5);
    glEnd();

   //midle body


    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-.461,-.1);
    glVertex2f(-.461,.26);
    glVertex2f(-.295,.26);
    glVertex2f(-.295,-.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(235, 226, 211);
    glVertex2f(-.455,-.1);
    glVertex2f(-.455,.25);
    glVertex2f(-.300,.25);
    glVertex2f(-.300,-.1);
    glEnd();


    //door

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-.411,-.1);
    glVertex2f(-.411,.11);
    glVertex2f(-.345,.11);
    glVertex2f(-.345,-.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(150, 69, 19);
    glVertex2f(-.405,-.1);
    glVertex2f(-.405,.10);
    glVertex2f(-.350,.10);
    glVertex2f(-.350,-.1);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(230, 230, 230);
    glVertex2f(-.470,-.10);
    glVertex2f(-.470,-.12);
    glVertex2f(-0.290,-.12);
    glVertex2f(-0.290,-.10);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(211, 211, 211);
    glVertex2f(-.480,-.12);
    glVertex2f(-.480,-.14);
    glVertex2f(-0.280,-.14);
    glVertex2f(-0.280,-.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(192, 192, 192);
    glVertex2f(-.490,-.14);
    glVertex2f(-.490,-.16);
    glVertex2f(-0.270,-.16);
    glVertex2f(-0.270,-.14);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(-.78,.5);
    glVertex2f(0,.5);
    glVertex2f(-.39,.7);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(172, 172, 172);
    glVertex2f(-.77,.5);
    glVertex2f(-0.01,.5);
    glVertex2f(-.39,.695);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(128, 128, 128);
    glVertex2f(-.60,.5);
    glVertex2f(-.18,.5);
    glVertex2f(-.39,.6);
    glEnd();


    //windowlefttop1
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-.746,.400);
    glVertex2f(-.746,.200);
    glVertex2f(-.63,.200);
    glVertex2f(-.63,.400);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(178,238,238);
    glVertex2f(-.74,.390);
    glVertex2f(-.74,.210);
    glVertex2f(-.64,.210);
    glVertex2f(-.64,.390);
    glEnd();

     //windowlefttop2
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-.596,.400);
    glVertex2f(-.596,.200);
    glVertex2f(-.48,.200);
    glVertex2f(-.48,.400);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(178,238,238);
    glVertex2f(-.59,.390);
    glVertex2f(-.59,.210);
    glVertex2f(-.49,.210);
    glVertex2f(-.49,.390);
    glEnd();

    //windowrighttop1
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-.276,.400);
    glVertex2f(-.276,.200);
    glVertex2f(-.160,.200);
    glVertex2f(-.160,.400);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(178,238,238);
    glVertex2f(-.270,.390);
    glVertex2f(-.270,.210);
    glVertex2f(-.170,.210);
    glVertex2f(-.170,.390);
    glEnd();

     //windowrighttop2
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-.136,.400);
    glVertex2f(-.136,.200);
    glVertex2f(-.028,.200);
    glVertex2f(-.028,.400);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(178,238,238);
    glVertex2f(-.130,.390);
    glVertex2f(-.130,.210);
    glVertex2f(-.038,.210);
    glVertex2f(-.038,.390);
    glEnd();

    //windowleftbottom1
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-.746,.180);
    glVertex2f(-.746, -.010);
    glVertex2f(-.63, -.010);
    glVertex2f(-.63,.180);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(178,238,238);
    glVertex2f(-.74,.170);
    glVertex2f(-.74,.00);
    glVertex2f(-.64,.00);
    glVertex2f(-.64,.170);
    glEnd();

    //windowleftbottom2
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-.596,.180);
    glVertex2f(-.596,-.010);
    glVertex2f(-.48,-.010);
    glVertex2f(-.48,.180);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(178,238,238);
    glVertex2f(-.59,.170);
    glVertex2f(-.59,.0);
    glVertex2f(-.49,.0);
    glVertex2f(-.49,.170);
    glEnd();

    //windowrightbottom1
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-.276,.180);
    glVertex2f(-.276,-.010);
    glVertex2f(-.160,-.010);
    glVertex2f(-.160,.180);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(178,238,238);
    glVertex2f(-.270,.170);
    glVertex2f(-.270,.0);
    glVertex2f(-.170,.0);
    glVertex2f(-.170,.170);
    glEnd();

    //windowrightbottom2
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-.136,.180);
    glVertex2f(-.136,-.010);
    glVertex2f(-.028,-.010);
    glVertex2f(-.028,.180);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(178,238,238);
    glVertex2f(-.130,.170);
    glVertex2f(-.130,.0);
    glVertex2f(-.038,.0);
    glVertex2f(-.038,.170);
    glEnd();
}


void metrotrack(){

    glLoadIdentity();
    glLineWidth(14.0);
    glBegin(GL_LINES);
    glColor3f(.76,.31,.23);
    glVertex2f(-1,-.44);
    glVertex2f(1,-.44);
    glEnd();

    glLoadIdentity();
    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.95,-.416);
    glVertex2f(-.95,-.466);

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.90,-.416);
    glVertex2f(-.90,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.85,-.416);
    glVertex2f(-.85,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.80,-.416);
    glVertex2f(-.80,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.75,-.416);
    glVertex2f(-.75,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.70,-.416);
    glVertex2f(-.70,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.65,-.416);
    glVertex2f(-.65,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.60,-.416);
    glVertex2f(-.60,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.55,-.416);
    glVertex2f(-.55,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.50,-.416);
    glVertex2f(-.50,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.45,-.416);
    glVertex2f(-.45,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.40,-.416);
    glVertex2f(-.40,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.35,-.416);
    glVertex2f(-.35,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.30,-.416);
    glVertex2f(-.30,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.25,-.416);
    glVertex2f(-.25,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.20,-.416);
    glVertex2f(-.20,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.15,-.416);
    glVertex2f(-.15,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.10,-.416);
    glVertex2f(-.10,-.466);
    glEnd();
    glLineWidth(4.0);

    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.05,-.416);
    glVertex2f(-.05,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.00,-.416);
    glVertex2f(.00,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.05,-.416);
    glVertex2f(.05,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.10,-.416);
    glVertex2f(.10,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.15,-.416);
    glVertex2f(.15,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.20,-.416);
    glVertex2f(.20,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.25,-.416);
    glVertex2f(.25,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.30,-.416);
    glVertex2f(.30,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.35,-.416);
    glVertex2f(.35,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.40,-.416);
    glVertex2f(.40,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.45,-.416);
    glVertex2f(.45,-.466);
    glEnd();


    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.50,-.416);
    glVertex2f(.50,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.55,-.416);
    glVertex2f(.55,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.60,-.416);
    glVertex2f(.60,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.65,-.416);
    glVertex2f(.65,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.70,-.416);
    glVertex2f(.70,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.75,-.416);
    glVertex2f(.75,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.80,-.416);
    glVertex2f(.80,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.85,-.416);
    glVertex2f(.85,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.90,-.416);
    glVertex2f(.90,-.466);
    glEnd();

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.95,-.416);
    glVertex2f(.95,-.466);
    glEnd();
}



void drawCircle(int a,int b,int c){

    int i;
    glScalef(0.9,1,1);

	GLfloat x=0.358f; GLfloat y=.5235f; GLfloat radius =.088f;
	int triangleAmount = 20;


	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(240,240,255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


void hospital(int x,int y ,int z,int a,int b,int c){

    //body
    glBegin(GL_QUADS);
    glColor3ub(240,240,255);
    glVertex2f(.02,.51);
    glVertex2f(.02,-.1);
    glVertex2f(.68,-.1);
    glVertex2f(.68,.51);
    glEnd();


    //leftbody


    glBegin(GL_QUADS);
    glColor3ub(240,240,255);
    glVertex2f(.02,.42);
    glVertex2f(.02,.565);
    glVertex2f(.1,.565);
    glVertex2f(.1,.42);
    glEnd();


    //rightbody
    glBegin(GL_QUADS);
    glColor3ub(240,240,255);
    glVertex2f(.6,.42);
    glVertex2f(.6,.564);
    glVertex2f(.68,.565);
    glVertex2f(.68,.42);
    glEnd();


    //+sign

    glLineWidth(9.0);
    glBegin(GL_LINES);
    glColor3f(204,0,0);
    glVertex2f(.358,.59);
    glVertex2f(.358,.5);
    glVertex2f(.308,.545);
    glVertex2f(.411,.545);
    glEnd();


    //leftredbody


    glBegin(GL_QUADS);
    glColor3ub(204, 0, 0);
    glVertex2f(.105,.50);
    glVertex2f(.105,-.1);
    glVertex2f(.265,-.1);
    glVertex2f(.265,.50);
    glEnd();

    //rightredbody


    glTranslatef(.34,0,0);


    glBegin(GL_QUADS);
    glColor3ub(204, 0, 0);
    glVertex2f(.105,.50);
    glVertex2f(.105,-.1);
    glVertex2f(.265,-.1);
    glVertex2f(.265,.50);
    glEnd();


    //first window

    glLoadIdentity();
    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.108,.45);
    glVertex2f(.108,.38);
    glVertex2f(.16,.38);
    glVertex2f(.16,.45);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.17,.45);
    glVertex2f(.17,.38);
    glVertex2f(.222,.38);
    glVertex2f(.222,.45);
    glEnd();



       //2nd window

    glLoadIdentity();
    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.108,.36);
    glVertex2f(.108,.29);
    glVertex2f(.16,.29);
    glVertex2f(.16,.36);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.17,.36);
    glVertex2f(.17,.29);
    glVertex2f(.222,.29);
    glVertex2f(.222,.36);
    glEnd();



       //first window
    glTranslatef(.0,-.176,0);

    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.108,.45);
    glVertex2f(.108,.38);
    glVertex2f(.16,.38);
    glVertex2f(.16,.45);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.17,.45);
    glVertex2f(.17,.38);
    glVertex2f(.222,.38);
    glVertex2f(.222,.45);
    glEnd();



    //2nd window


    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.108,.36);
    glVertex2f(.108,.29);
    glVertex2f(.16,.29);
    glVertex2f(.16,.36);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.17,.36);
    glVertex2f(.17,.29);
    glVertex2f(.222,.29);
    glVertex2f(.222,.36);
    glEnd();




    //first window
    glTranslatef(.0,-.175,0);

    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.108,.45);
    glVertex2f(.108,.38);
    glVertex2f(.16,.38);
    glVertex2f(.16,.45);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.17,.45);
    glVertex2f(.17,.38);
    glVertex2f(.222,.38);
    glVertex2f(.222,.45);
    glEnd();



       //2nd window


    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.108,.36);
    glVertex2f(.108,.29);
    glVertex2f(.16,.29);
    glVertex2f(.16,.36);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.17,.36);
    glVertex2f(.17,.29);
    glVertex2f(.222,.29);
    glVertex2f(.222,.36);
    glEnd();



//first window

    glTranslatef(.308,.345,0);
    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.108,.45);
    glVertex2f(.108,.38);
    glVertex2f(.16,.38);
    glVertex2f(.16,.45);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.17,.45);
    glVertex2f(.17,.38);
    glVertex2f(.222,.38);
    glVertex2f(.222,.45);
    glEnd();


    //2nd window


    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.108,.36);
    glVertex2f(.108,.29);
    glVertex2f(.16,.29);
    glVertex2f(.16,.36);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.17,.36);
    glVertex2f(.17,.29);
    glVertex2f(.222,.29);
    glVertex2f(.222,.36);
    glEnd();



       //first window
    glTranslatef(.0,-.176,0);

    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.108,.45);
    glVertex2f(.108,.38);
    glVertex2f(.16,.38);
    glVertex2f(.16,.45);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.17,.45);
    glVertex2f(.17,.38);
    glVertex2f(.222,.38);
    glVertex2f(.222,.45);
    glEnd();



    //2nd window


    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.108,.36);
    glVertex2f(.108,.29);
    glVertex2f(.16,.29);
    glVertex2f(.16,.36);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.17,.36);
    glVertex2f(.17,.29);
    glVertex2f(.222,.29);
    glVertex2f(.222,.36);
    glEnd();




    //first window
    glTranslatef(.0,-.175,0);

    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.108,.45);
    glVertex2f(.108,.38);
    glVertex2f(.16,.38);
    glVertex2f(.16,.45);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.17,.45);
    glVertex2f(.17,.38);
    glVertex2f(.222,.38);
    glVertex2f(.222,.45);
    glEnd();



       //2nd window


    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.108,.36);
    glVertex2f(.108,.29);
    glVertex2f(.16,.29);
    glVertex2f(.16,.36);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(205,229,255);
    glVertex2f(.17,.36);
    glVertex2f(.17,.29);
    glVertex2f(.222,.29);
    glVertex2f(.222,.36);
    glEnd();



    ///////////////midle/////////////////



    glTranslatef(-.13,.415,0);
    glScalef(.85,.85,0);


    glBegin(GL_QUADS);
    glColor3ub(192,192,192);
    glVertex2f(.1,.48);
    glVertex2f(.1,-.18);
    glVertex2f(.23,-.18);
    glVertex2f(.23,.48);
    glEnd();

       glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(.108,.45);
    glVertex2f(.108,.38);
    glVertex2f(.16,.38);
    glVertex2f(.16,.45);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(.17,.45);
    glVertex2f(.17,.38);
    glVertex2f(.222,.38);
    glVertex2f(.222,.45);
    glEnd();


       //2nd window


    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(.108,.36);
    glVertex2f(.108,.29);
    glVertex2f(.16,.29);
    glVertex2f(.16,.36);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(.17,.36);
    glVertex2f(.17,.29);
    glVertex2f(.222,.29);
    glVertex2f(.222,.36);
    glEnd();


       //first window
    glTranslatef(.0,-.176,0);

    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(.108,.45);
    glVertex2f(.108,.38);
    glVertex2f(.16,.38);
    glVertex2f(.16,.45);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(.17,.45);
    glVertex2f(.17,.38);
    glVertex2f(.222,.38);
    glVertex2f(.222,.45);
    glEnd();


       //2nd window


    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(.108,.36);
    glVertex2f(.108,.29);
    glVertex2f(.16,.29);
    glVertex2f(.16,.36);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(.17,.36);
    glVertex2f(.17,.29);
    glVertex2f(.222,.29);
    glVertex2f(.222,.36);
    glEnd();




    //first window
    glTranslatef(.0,-.175,0);

    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(.108,.45);
    glVertex2f(.108,.38);
    glVertex2f(.16,.38);
    glVertex2f(.16,.45);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(255,204,204);
    glVertex2f(.17,.45);
    glVertex2f(.17,.38);
    glVertex2f(.222,.38);
    glVertex2f(.222,.45);
    glEnd();


    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(.29,-.1);
    glVertex2f(.29,.07);
    glVertex2f(.35,.07);
    glVertex2f(.35,-.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(150, 69, 19);
    glVertex2f(.30,-.1);
    glVertex2f(.30,.06);
    glVertex2f(.34,.06);
    glVertex2f(.34,-.1);
    glEnd();

}




void drawCircle2(float xx,float yy,float r,int rr,int g,int b){

    int i;
    glScalef(0.9,1,1);

	GLfloat x=xx; GLfloat y=yy; GLfloat radius =r;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(rr,g,b);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}

void hotel(int x,int y,int z){

    //circles

    glLoadIdentity();


    //rightbody
    glBegin(GL_QUADS);
    glColor3ub(25, 51, 0);
    glVertex2f(.73,.4);
    glVertex2f(.73,-.02);
    glVertex2f(.997,-.02);
    glVertex2f(.997,.4);
    glEnd();

glLoadIdentity();
    //bluebody

    glLineWidth(15.0);

    glBegin(GL_LINES);
    glColor3f(0,0,1);
    glVertex2f(.73,.5);
    glVertex2f(.73,-.02);
    glEnd();

 glLoadIdentity();
    //greenbody

    glLineWidth(25.0);

    glBegin(GL_LINES);
    glColor3f(0,0.32, 0.60);
    glVertex2f(.69,.44);
    glVertex2f(.69,-.02);
    glEnd();


    //windowsss/////////


    glTranslatef(.65,-.1,0);


     glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.108,.45);
    glVertex2f(.108,.38);
    glVertex2f(.16,.38);
    glVertex2f(.16,.45);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.17,.45);
    glVertex2f(.17,.38);
    glVertex2f(.222,.38);
    glVertex2f(.222,.45);
    glEnd();



       //2nd window


    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.108,.36);
    glVertex2f(.108,.29);
    glVertex2f(.16,.29);
    glVertex2f(.16,.36);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.17,.36);
    glVertex2f(.17,.29);
    glVertex2f(.222,.29);
    glVertex2f(.222,.36);
    glEnd();



    /////again windowss

    glLoadIdentity();


    glTranslatef(.65,-.275,0);


     glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.108,.45);
    glVertex2f(.108,.38);
    glVertex2f(.16,.38);
    glVertex2f(.16,.45);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.17,.45);
    glVertex2f(.17,.38);
    glVertex2f(.222,.38);
    glVertex2f(.222,.45);
    glEnd();



       //2nd window


    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.108,.36);
    glVertex2f(.108,.29);
    glVertex2f(.16,.29);
    glVertex2f(.16,.36);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.17,.36);
    glVertex2f(.17,.29);
    glVertex2f(.222,.29);
    glVertex2f(.222,.36);
    glEnd();



    //windows endsss/////////




    //windows////////////////
    glLoadIdentity();

    glTranslatef(.773,-.1,0);


     //glTranslatef(.65,-.1,0);


     glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.108,.45);
    glVertex2f(.108,.38);
    glVertex2f(.16,.38);
    glVertex2f(.16,.45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.17,.45);
    glVertex2f(.17,.38);
    glVertex2f(.222,.38);
    glVertex2f(.222,.45);
    glEnd();

       //2nd window

    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.108,.36);
    glVertex2f(.108,.29);
    glVertex2f(.16,.29);
    glVertex2f(.16,.36);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.17,.36);
    glVertex2f(.17,.29);
    glVertex2f(.222,.29);
    glVertex2f(.222,.36);
    glEnd();



    /////again windowss

    glLoadIdentity();


    glTranslatef(.773,-.274,0);


     glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.108,.45);
    glVertex2f(.108,.38);
    glVertex2f(.16,.38);
    glVertex2f(.16,.45);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.17,.45);
    glVertex2f(.17,.38);
    glVertex2f(.222,.38);
    glVertex2f(.222,.45);
    glEnd();



       //2nd window


    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.108,.36);
    glVertex2f(.108,.29);
    glVertex2f(.16,.29);
    glVertex2f(.16,.36);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.17,.36);
    glVertex2f(.17,.29);
    glVertex2f(.222,.29);
    glVertex2f(.222,.36);
    glEnd();
/////////////windows ends

    //midcircle

    glLoadIdentity();

    drawCircle2(.888,-.014,.06,48, 48, 48);

    glLoadIdentity();

//downbody
    glBegin(GL_QUADS);
    glColor3ub(48, 48, 48);
    glVertex2f(.618,-.02);
    glVertex2f(.618,-.1);
    glVertex2f(.997,-.1);
    glVertex2f(.997,-.02);
    glEnd();



    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.8635,-.03);
    glVertex2f(.8635,-.075);
    glVertex2f(.922,-.075);
    glVertex2f(.922,-.03);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.928,-.03);
    glVertex2f(.928,-.075);
    glVertex2f(.9865,-.075);
    glVertex2f(.9865,-.03);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.68,-.03);
    glVertex2f(.68,-.075);
    glVertex2f(.7385,-.075);
    glVertex2f(.7385,-.03);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.625,-.03);
    glVertex2f(.625,-.075);
    glVertex2f(.677,-.075);
    glVertex2f(.677,-.03);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(163, 73, 67);
    glVertex2f(.74,-.03);
    glVertex2f(.74,-.1);
    glVertex2f(.8618,-.1);
    glVertex2f(.8618,-.03);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(x,y,z);
    glVertex2f(.76,-.03);
    glVertex2f(.76,-.1);
    glVertex2f(.84,-.1);
    glVertex2f(.84,-.03);
    glEnd();

    glLineWidth(1.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.8,-.03);
    glVertex2f(.8,-.1);
    glEnd();


}


void tree(){

/////////1st tree/////////

glLoadIdentity();
    glLineWidth(19.0);
    glBegin(GL_LINES);
    glColor3f(.5,.19,.13);
    glVertex2f(-.895,-.9);
    glVertex2f(-.895,-1);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.9,-.86);
    glVertex2f(-.97,-.9);
    glVertex2f(-.82,-.9);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.9,-.8);
    glVertex2f(-.97,-.885);
    glVertex2f(-.82,-.885);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.9,-.75);
    glVertex2f(-.97,-.865);
    glVertex2f(-.82,-.865);
    glEnd();


    ///////////////////1st tree end////////////



    ///////////////2nd tree////////////////////





    glLoadIdentity();

    glLineWidth(19.0);
    glBegin(GL_LINES);
    glColor3f(.5,.19,.13);
    glVertex2f(-.48,-.9);
    glVertex2f(-.48,-1);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.48,-.86);
    glVertex2f(-.55,-.9);
    glVertex2f(-.41,-.9);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.48,-.8);
    glVertex2f(-.55,-.885);
    glVertex2f(-.41,-.885);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.48,-.75);
    glVertex2f(-.55,-.865);
    glVertex2f(-.41,-.865);
    glEnd();


    ///////2nd treee end/////////


    ///////3rd treeee//////


    glLoadIdentity();

    glLineWidth(19.0);
    glBegin(GL_LINES);
    glColor3f(.5,.19,.13);
    glVertex2f(-.065,-.9);
    glVertex2f(-.065,-1);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.065,-.86);
    glVertex2f(-.135,-.9);
    glVertex2f(-.0005,-.9);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.065,-.8);
    glVertex2f(-.135,-.885);
    glVertex2f(-.0005,-.885);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.065,-.75);
    glVertex2f(-.135,-.865);
    glVertex2f(-.0005,-.865);
    glEnd();


    /////////3rd tree ends//////////

    /////4th tree starts////////////




    glLoadIdentity();

    glLineWidth(19.0);
    glBegin(GL_LINES);
    glColor3f(.5,.19,.13);
    glVertex2f(.35,-.9);
    glVertex2f(.35,-1);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(.35,-.86);
    glVertex2f(.28,-.9);
    glVertex2f(.42,-.9);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(.35,-.8);
    glVertex2f(.28,-.885);
    glVertex2f(.42,-.885);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(.35,-.75);
    glVertex2f(.28,-.865);
    glVertex2f(.42,-.865);
    glEnd();



    ///////4th tree endss///////


    ///////5th tree starts/////////////



    glLoadIdentity();

    glLineWidth(19.0);
    glBegin(GL_LINES);
    glColor3f(.5,.19,.13);
    glVertex2f(.765,-.9);
    glVertex2f(.765,-1);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(.765,-.86);
    glVertex2f(.695,-.9);
    glVertex2f(.835,-.9);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(.765,-.8);
    glVertex2f(.695,-.885);
    glVertex2f(.835,-.885);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(.765,-.75);
    glVertex2f(.695,-.865);
    glVertex2f(.835,-.865);
    glEnd();


}




void lamp(int x,int y,int z){

    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glLineWidth(6.0);

    glBegin(GL_LINES);

    glColor3f(.42,.47,.43);
    glVertex2f(-.85,-.57);
    glVertex2f(-.85,-.65);
    glEnd();


    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.865,-.65);
    glVertex2f(-.835,-.65);
    glEnd();


    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(.42,.47,.43);
    glVertex2f(-.895,-.56);
    glVertex2f(-.805,-.56);
    glEnd();

glLoadIdentity();
    drawCircle2(-.99,-.58,.017,x,y,z);
    drawCircle2(-.995,-.58,.017,x,y,z);





   glLineWidth(6.0);

    glBegin(GL_LINES);

    glColor3f(.42,.47,.43);
    glVertex2f(-.79,-.57);
    glVertex2f(-.79,-.65);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.805,-.65);
    glVertex2f(-.775,-.65);
    glEnd();


    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(.42,.47,.43);
    glVertex2f(-.835,-.56);
    glVertex2f(-.745,-.56);
    glEnd();

glLoadIdentity();
    drawCircle2(-.75,-.58,.017,x,y,z);
    drawCircle2(-.739,-.58,.017,x,y,z);



    /////next////////


    glLineWidth(6.0);

    glBegin(GL_LINES);

    glColor3f(.42,.47,.43);
    glVertex2f(-.554,-.57);
    glVertex2f(-.554,-.65);
    glEnd();



    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.569,-.65);
    glVertex2f(-.539,-.65);
    glEnd();


    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(.42,.47,.43);
    glVertex2f(-.599,-.56);
    glVertex2f(-.509,-.56);
    glEnd();

    glLoadIdentity();
    drawCircle2(-.535,-.58,.017,x,y,z);
    drawCircle2(-.51,-.58,.017,x,y,z);



    ////next///////


      glLineWidth(6.0);

    glBegin(GL_LINES);

    glColor3f(.42,.47,.43);
    glVertex2f(-.309,-.57);
    glVertex2f(-.309,-.65);
    glEnd();

 //glLoadIdentity();
 //glLoadMatrixd();
    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.324,-.65);
    glVertex2f(-.294,-.65);
    glEnd();

//glLoadIdentity();
    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(.42,.47,.43);
    glVertex2f(-.354,-.56);
    glVertex2f(-.264,-.56);
    glEnd();

glLoadIdentity();
    drawCircle2(-.315,-.58,.017,x,y,z);
    drawCircle2(-.26,-.58,.017,x,y,z);




     ////next///////


    glLineWidth(6.0);
    glBegin(GL_LINES);

    glColor3f(.42,.47,.43);
    glVertex2f(-.061,-.57);
    glVertex2f(-.061,-.65);
    glEnd();


    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.076,-.65);
    glVertex2f(-.046,-.65);
    glEnd();


    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(.42,.47,.43);
    glVertex2f(-.106,-.56);
    glVertex2f(-.016,-.56);
    glEnd();

glLoadIdentity();
    drawCircle2(-.095,-.58,.017,x,y,z);
    drawCircle2(-.01,-.58,.017,x,y,z);



    ////next///////


    glLineWidth(6.0);

    glBegin(GL_LINES);

    glColor3f(.42,.47,.43);
    glVertex2f(.187,-.57);
    glVertex2f(.187,-.65);
    glEnd();


    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.172,-.65);
    glVertex2f(.202,-.65);
    glEnd();


    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(.42,.47,.43);
    glVertex2f(.142,-.56);
    glVertex2f(.232,-.56);
    glEnd();

glLoadIdentity();
    drawCircle2(.128,-.58,.017,x,y,z);
    drawCircle2(.23,-.58,.017,x,y,z);




     ////next///////


      glLineWidth(6.0);

    glBegin(GL_LINES);

    glColor3f(.42,.47,.43);
    glVertex2f(.434,-.57);
    glVertex2f(.434,-.65);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.419,-.65);
    glVertex2f(.449,-.65);
    glEnd();

    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(.42,.47,.43);
    glVertex2f(.389,-.56);
    glVertex2f(.479,-.56);
    glEnd();

glLoadIdentity();
    drawCircle2(.35,-.58,.017,x,y,z);
    drawCircle2(.48,-.58,.017,x,y,z);



    ////next///////


      glLineWidth(6.0);

    glBegin(GL_LINES);

    glColor3f(.42,.47,.43);
    glVertex2f(.68,-.57);
    glVertex2f(.68,-.65);
    glEnd();


    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.665,-.65);
    glVertex2f(.695,-.65);
    glEnd();


    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(.42,.47,.43);
    glVertex2f(.635,-.56);
    glVertex2f(.725,-.56);
    glEnd();

glLoadIdentity();
    drawCircle2(.57,-.58,.017,x,y,z);
    drawCircle2(.725,-.58,.017,x,y,z);



    ////next///////


      glLineWidth(6.0);

    glBegin(GL_LINES);

    glColor3f(.42,.47,.43);
    glVertex2f(.929,-.57);
    glVertex2f(.929,-.65);
    glEnd();


    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(.914,-.65);
    glVertex2f(.944,-.65);
    glEnd();


    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(.42,.47,.43);
    glVertex2f(.884,-.56);
    glVertex2f(.974,-.56);
    glEnd();

glLoadIdentity();
    drawCircle2(.797,-.58,.017,x,y,z);
    drawCircle2(.975,-.58,.017,x,y,z);

glLoadIdentity();
    glLineWidth(6.0);
    glBegin(GL_LINES);
    glColor3f(.42,.47,.43);
    glVertex2f(.955,-.56);
    glVertex2f(1,-.56);
    glEnd();
glLoadIdentity();
    drawCircle2(1.06,-.58,.017,x,y,z);
}




void parkingleft(){
glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(18, 17, 17);
    glVertex2f(-1,-.12);
    glVertex2f(-1,-.4);
    glVertex2f(-.8,-.4);
    glVertex2f(-.8,-.12);
    glEnd();
glLineWidth(5.0);
    glEnable(GL_LINE_STIPPLE);
glLineStipple(12, 0xAAAA);
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,1);
    glVertex2f(-1,-.13);
    glVertex2f(-.8,-.13);
    glEnd();



    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,1);
    glVertex2f(-1,-.39);
    glVertex2f(-.8,-.39);
    glEnd();



    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,1);
    glVertex2f(-.807,-.12);
    glVertex2f(-.807,-.39);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,1);
    glVertex2f(-1,-.255);
    glVertex2f(-.8,-.255);
    glEnd();

    glDisable(GL_LINE_STIPPLE);

 glLoadIdentity();
glTranslatef(-1.56,.517,0);
glScalef(.9,1,0);
car(109, 154, 166);

 glLoadIdentity();
glTranslatef(-1.57,.38,0);
glScalef(.9,1,0);
car(58, 153, 112);

}


void parkingright(){

glLoadIdentity();
    glBegin(GL_QUADS);
    glColor3ub(18, 17, 17);
    glVertex2f(1,-.12);
    glVertex2f(1,-.4);
    glVertex2f(.8,-.4);
    glVertex2f(.8,-.12);
    glEnd();

    glLineWidth(5.0);
    glEnable(GL_LINE_STIPPLE);
glLineStipple(12, 0xAAAA);
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,1);
    glVertex2f(1,-.13);
    glVertex2f(.8,-.13);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,1);
    glVertex2f(1,-.39);
    glVertex2f(.8,-.39);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,1);
    glVertex2f(.807,-.12);
    glVertex2f(.807,-.39);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,1);
    glVertex2f(1,-.255);
    glVertex2f(.8,-.255);
    glEnd();

    glDisable(GL_LINE_STIPPLE);

 glLoadIdentity();
glTranslatef(.25,.517,0);
glScalef(.9,1,0);
car(109, 154, 166);

 glLoadIdentity();   //glLIne
glTranslatef(.25,.38,0);
glScalef(.9,1,0);
car(58, 153, 112);

}


void middletrees(){



    glTranslatef(.4,.6,0);
    glScalef(.6,.7,0);
    glLineWidth(19.0);
    glBegin(GL_LINES);
    glColor3f(.5,.19,.13);
    glVertex2f(-.895,-.9);
    glVertex2f(-.895,-1);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.9,-.86);
    glVertex2f(-.97,-.9);
    glVertex2f(-.82,-.9);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.9,-.8);
    glVertex2f(-.97,-.885);
    glVertex2f(-.82,-.885);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.9,-.75);
    glVertex2f(-.97,-.865);
    glVertex2f(-.82,-.865);
    glEnd();



glLoadIdentity();

    ///trreee/////



    glTranslatef(-.1,.6,0);
    glScalef(.6,.7,0);
    glLineWidth(19.0);
    glBegin(GL_LINES);
    glColor3f(.5,.19,.13);
    glVertex2f(-.895,-.9);
    glVertex2f(-.895,-1);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.9,-.86);
    glVertex2f(-.97,-.9);
    glVertex2f(-.82,-.9);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.9,-.8);
    glVertex2f(-.97,-.885);
    glVertex2f(-.82,-.885);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.9,-.75);
    glVertex2f(-.97,-.865);
    glVertex2f(-.82,-.865);
    glEnd();


    /////////treee/////

    glLoadIdentity();
    glTranslatef(.7,.6,0);
    glScalef(.6,.7,0);
    glLineWidth(19.0);
    glBegin(GL_LINES);
    glColor3f(.5,.19,.13);
    glVertex2f(-.895,-.9);
    glVertex2f(-.895,-1);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.9,-.86);
    glVertex2f(-.97,-.9);
    glVertex2f(-.82,-.9);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.9,-.8);
    glVertex2f(-.97,-.885);
    glVertex2f(-.82,-.885);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.9,-.75);
    glVertex2f(-.97,-.865);
    glVertex2f(-.82,-.865);
    glEnd();



    ///treee/////


    glLoadIdentity();
    glTranslatef(1.1,.6,0);
    glScalef(.6,.7,0);
    glLineWidth(19.0);
    glBegin(GL_LINES);
    glColor3f(.5,.19,.13);
    glVertex2f(-.895,-.9);
    glVertex2f(-.895,-1);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.9,-.86);
    glVertex2f(-.97,-.9);
    glVertex2f(-.82,-.9);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.9,-.8);
    glVertex2f(-.97,-.885);
    glVertex2f(-.82,-.885);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(19, 64, 26);
    glVertex2f(-.9,-.75);
    glVertex2f(-.97,-.865);
    glVertex2f(-.82,-.865);
    glEnd();



}

void leftbench(int x,int y,int z){


    glLoadIdentity();

    glLineWidth(10.0);

    glBegin(GL_LINES);
    glColor3f(.76,.56,.16);
    glVertex2f(-.3,-.2);
    glVertex2f(-.45,-.2);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(194, 143, 41);
    glVertex2f(-.45,-.223);
    glVertex2f(-.47,-.237);
    glVertex2f(-.28,-.237);
    glVertex2f(-.3,-.223);
    glEnd();


    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.435,-.21);
    glVertex2f(-.435,-.223);
    glEnd();



    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.315,-.21);
    glVertex2f(-.315,-.223);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.375,-.21);
    glVertex2f(-.375,-.223);
    glEnd();
glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.457,-.26);
    glVertex2f(-.457,-.235);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.375,-.26);
    glVertex2f(-.375,-.235);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.293,-.26);
    glVertex2f(-.293,-.235);
    glEnd();


    ////

    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.435,-.248);
    glVertex2f(-.435,-.235);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.315,-.248);
    glVertex2f(-.315,-.235);
    glEnd();


    // lamp

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.24,-.26);
    glVertex2f(-.24,-.16);
    glEnd();

    glLineWidth(2.3);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.233,-.16);
    glVertex2f(-.246,-.16);
    glEnd();


    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.234,-.26);
    glVertex2f(-.245,-.26);
    glEnd();

    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.229,-.264);
    glVertex2f(-.249,-.264);
    glEnd();


    drawCircle2(-.266,-.1395,.018,x,y,z);


    //dustbin//



    glLineWidth(8.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.59,-.26);
    glVertex2f(-.59,-.22);
    glEnd();



    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(.63,.61,.57);
    glVertex2f(-.57,-.218);
    glVertex2f(-.61,-.218);
    glEnd();



    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.58,-.262);
    glVertex2f(-.602,-.262);
    glEnd();


}


void rightbench(int x,int y,int z){


glLoadIdentity();

    glTranslatef(.7,-.005,0);

     glLineWidth(10.0);

    glBegin(GL_LINES);
    glColor3f(.76,.56,.16);
    glVertex2f(-.3,-.2);
    glVertex2f(-.45,-.2);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(194, 143, 41);
    glVertex2f(-.45,-.223);
    glVertex2f(-.47,-.237);
    glVertex2f(-.28,-.237);
    glVertex2f(-.3,-.223);
    glEnd();


    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.435,-.21);
    glVertex2f(-.435,-.223);
    glEnd();



    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.315,-.21);
    glVertex2f(-.315,-.223);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.375,-.21);
    glVertex2f(-.375,-.223);
    glEnd();
glLineWidth(3.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.457,-.26);
    glVertex2f(-.457,-.235);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.375,-.26);
    glVertex2f(-.375,-.235);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.293,-.26);
    glVertex2f(-.293,-.235);
    glEnd();


    ////

    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.435,-.248);
    glVertex2f(-.435,-.235);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.315,-.248);
    glVertex2f(-.315,-.235);
    glEnd();


    // lamp

    glLineWidth(4.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.24,-.26);
    glVertex2f(-.24,-.16);
    glEnd();

    glLineWidth(2.3);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.233,-.16);
    glVertex2f(-.246,-.16);
    glEnd();


    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.234,-.26);
    glVertex2f(-.245,-.26);
    glEnd();

    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.229,-.264);
    glVertex2f(-.249,-.264);
    glEnd();


    drawCircle2(-.266,-.1395,.018,x,y,z);


    //dustbin//



    glLineWidth(8.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.59,-.26);
    glVertex2f(-.59,-.22);
    glEnd();



    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(.63,.61,.57);
    glVertex2f(-.57,-.218);
    glVertex2f(-.61,-.218);
    glEnd();



    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2f(-.58,-.262);
    glVertex2f(-.602,-.262);
    glEnd();



}


void plane(){
    glLoadIdentity();

    glPushMatrix();

    glTranslatef(plane_move, 0.0f, 0.0f);



glLineWidth(11.0);

glBegin(GL_LINES);
    glColor3f(.67,.05,.02);
    glVertex2f(-.37,.792);
    glVertex2f(-.4,.83);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(206, 209, 205);
    glVertex2f(-.54,.8);
    glVertex2f(-.54,.76);
    glVertex2f(-.3,.76);
    glVertex2f(-.3,.8);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3ub(206, 209, 205);
    glVertex2f(-.3,.8);
    glVertex2f(-.3,.76);
    glVertex2f(-.25,.78);

    glEnd();


    //left wing

    glBegin(GL_QUADS);
    glColor3ub(171, 15, 7);
    glVertex2f(-.54,.84);
    glVertex2f(-.54,.8);
    glVertex2f(-.5,.8);
    glVertex2f(-.53,.84);
    glEnd();


    //2nd wing

    glLineWidth(12.0);
    glBegin(GL_LINES);
    glColor3f(.67,.05,.02);
    glVertex2f(-.37,.776);
    glVertex2f(-.4,.72);
    glEnd();


//windows


glLineWidth(6.0);
    glEnable(GL_LINE_STIPPLE);
glLineStipple(12, 0xAAAA);
    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex2f(-.52,.787);
    glVertex2f(-.32,.787);
    glEnd();

    glDisable(GL_LINE_STIPPLE);

    glPopMatrix();










}

void downlighteffects(){

glLoadIdentity();
    glBegin(GL_TRIANGLES);
    glColor4f(.84,.90,.09,.68);
    glVertex2f(-.89,-.57);
    glVertex2f(-.92,-.65);
    glVertex2f(-.86,-.65);
    glEnd();



    glLoadIdentity();
    glBegin(GL_TRIANGLES);

    glVertex2f(-.805,-.57);
    glVertex2f(-.835,-.65);
    glVertex2f(-.775,-.65);
    glEnd();


    ///next///



    glBegin(GL_TRIANGLES);

    glVertex2f(-.676,-.57);
    glVertex2f(-.706,-.65);
    glVertex2f(-.646,-.65);
    glEnd();



    glBegin(GL_TRIANGLES);

    glVertex2f(-.597,-.57);
    glVertex2f(-.627,-.65);
    glVertex2f(-.567,-.65);
    glEnd();



    glBegin(GL_TRIANGLES);

    glVertex2f(-.482,-.57);
    glVertex2f(-.512,-.65);
    glVertex2f(-.452,-.65);
    glEnd();



    glBegin(GL_TRIANGLES);

    glVertex2f(-.412,-.57);
    glVertex2f(-.442,-.65);
    glVertex2f(-.382,-.65);
    glEnd();



    glBegin(GL_TRIANGLES);

    glVertex2f(-.283,-.57);
    glVertex2f(-.313,-.65);
    glVertex2f(-.253,-.65);
    glEnd();



    glBegin(GL_TRIANGLES);

    glVertex2f(-.21,-.57);
    glVertex2f(-.24,-.65);
    glVertex2f(-.18,-.65);
    glEnd();



    glBegin(GL_TRIANGLES);

    glVertex2f(-.087,-.57);
    glVertex2f(-.117,-.65);
    glVertex2f(-.057,-.65);
    glEnd();


glBegin(GL_TRIANGLES);

    glVertex2f(-.004,-.57);
    glVertex2f(-.034,-.65);
    glVertex2f(.024,-.65);
    glEnd();


    glBegin(GL_TRIANGLES);

    glVertex2f(.117,-.57);
    glVertex2f(.087,-.65);
    glVertex2f(.147,-.65);
    glEnd();


    glBegin(GL_TRIANGLES);

    glVertex2f(.192,-.57);
    glVertex2f(.162,-.65);
    glVertex2f(.222,-.65);
    glEnd();



    glBegin(GL_TRIANGLES);

    glVertex2f(.316,-.57);
    glVertex2f(.286,-.65);
    glVertex2f(.346,-.65);
    glEnd();



    glBegin(GL_TRIANGLES);

    glVertex2f(.395,-.57);
    glVertex2f(.365,-.65);
    glVertex2f(.425,-.65);
    glEnd();



    glBegin(GL_TRIANGLES);

    glVertex2f(.515,-.57);
    glVertex2f(.485,-.65);
    glVertex2f(.545,-.65);
    glEnd();



    glBegin(GL_TRIANGLES);

    glVertex2f(.59,-.57);
    glVertex2f(.56,-.65);
    glVertex2f(.62,-.65);
    glEnd();



    glBegin(GL_TRIANGLES);

    glVertex2f(.719,-.57);
    glVertex2f(.689,-.65);
    glVertex2f(.749,-.65);
    glEnd();


    glBegin(GL_TRIANGLES);

    glVertex2f(.796,-.57);
    glVertex2f(.766,-.65);
    glVertex2f(.826,-.65);
    glEnd();


    glBegin(GL_TRIANGLES);

    glVertex2f(.948,-.57);
    glVertex2f(.919,-.65);
    glVertex2f(.979,-.65);
    glEnd();

    //lamps upper//


    glBegin(GL_TRIANGLES);

    glVertex2f(-.238,-.1395);
    glVertex2f(-.268,-.266);
    glVertex2f(-.208,-.266);
    glEnd();



    glBegin(GL_TRIANGLES);

    glVertex2f(.46,-.1395);
    glVertex2f(.43,-.27);
    glVertex2f(.49,-.27);
    glEnd();

}


void star(){

glTranslatef(-.7,.8,0);
glScalef(.09,.06,0);


    glBegin(GL_TRIANGLES);

    glColor3f(1, 1, 1);
    glVertex3f(-0.60, 0.77, 0);


    glVertex3f(-0.42, 0.77, 0);


    glVertex3f(-0.58, 0.68, 0);

    //second triangle top triangle


    glVertex3f(-0.64, 1, 0);


    glVertex3f(-0.68, 0.77, 0);


    glVertex3f(-0.60, 0.77, 0);

    //3rd Triangle

    glVertex3f(-0.68, 0.77, 0);


    glVertex3f(-0.7, 0.68, 0);


    glVertex3f(-0.86, 0.77, 0);

    //4th Triangle

    glVertex3f(-0.64, 0.63, 0);


    glVertex3f(-0.7, 0.68, 0);


    glVertex3f(-0.82, 0.43, 0);

    //5th Triangle

    glVertex3f(-0.64, 0.63, 0);


    glVertex3f(-0.58, 0.68, 0);


    glVertex3f(-0.51, 0.43, 0);

    glEnd();

    glBegin(GL_POLYGON);            ///code for the Polygon within the stars
    glColor3f(1, 1,1);              ///sets color of Polygon

    glVertex3f(-0.68, 0.77, 0);     ///set the 5 vetices of polygon


    glVertex3f(-0.60, 0.77, 0);


    glVertex3f(-0.7, 0.68, 0);


    glVertex3f(-0.64, 0.63, 0);


    glVertex3f(-0.58, 0.68, 0);




    glEnd();


    glColor3f(1, 1,1);
glBegin(GL_POLYGON);

glVertex3f(-0.60, 0.77, 0);
glVertex3f(-0.68, 0.77, 0);
glVertex3f(-0.7, 0.68, 0);
glVertex3f(-0.64, 0.63, 0);
glVertex3f(-0.58, 0.68, 0);

glEnd();


////////2nd star///////

glLoadIdentity();

glTranslatef(-.4,.89,0);
glScalef(.09,.06,0);


    glBegin(GL_TRIANGLES);

    glColor3f(1, 1, 1);
    glVertex3f(-0.60, 0.77, 0);


    glVertex3f(-0.42, 0.77, 0);


    glVertex3f(-0.58, 0.68, 0);

    //second triangle top triangle


    glVertex3f(-0.64, 1, 0);


    glVertex3f(-0.68, 0.77, 0);


    glVertex3f(-0.60, 0.77, 0);

    //3rd Triangle

    glVertex3f(-0.68, 0.77, 0);


    glVertex3f(-0.7, 0.68, 0);


    glVertex3f(-0.86, 0.77, 0);

    //4th Triangle

    glVertex3f(-0.64, 0.63, 0);


    glVertex3f(-0.7, 0.68, 0);


    glVertex3f(-0.82, 0.43, 0);

    //5th Triangle

    glVertex3f(-0.64, 0.63, 0);


    glVertex3f(-0.58, 0.68, 0);


    glVertex3f(-0.51, 0.43, 0);

    glEnd();

    glBegin(GL_POLYGON);        ///code for the Polygon within the stars
    glColor3f(1, 1,1);          ///sets color of Polygon

    glVertex3f(-0.68, 0.77, 0); ///set the 5 vetices of polygon


    glVertex3f(-0.60, 0.77, 0);


    glVertex3f(-0.7, 0.68, 0);


    glVertex3f(-0.64, 0.63, 0);


    glVertex3f(-0.58, 0.68, 0);




    glEnd();


    glColor3f(1, 1,1);
glBegin(GL_POLYGON);

glVertex3f(-0.60, 0.77, 0); // <--- -0.60 instead of -0.68
glVertex3f(-0.68, 0.77, 0); // <--- -0.68 instead of -0.60
glVertex3f(-0.7, 0.68, 0);
glVertex3f(-0.64, 0.63, 0);
glVertex3f(-0.58, 0.68, 0);

glEnd();


//3rd star///




glLoadIdentity();

glTranslatef(.1,.78,0);
glScalef(.09,.06,0);


    glBegin(GL_TRIANGLES);

    glColor3f(1, 1, 1);
    glVertex3f(-0.60, 0.77, 0);


    glVertex3f(-0.42, 0.77, 0);


    glVertex3f(-0.58, 0.68, 0);

    //second triangle top triangle


    glVertex3f(-0.64, 1, 0);


    glVertex3f(-0.68, 0.77, 0);


    glVertex3f(-0.60, 0.77, 0);

    //3rd Triangle

    glVertex3f(-0.68, 0.77, 0);


    glVertex3f(-0.7, 0.68, 0);


    glVertex3f(-0.86, 0.77, 0);

    //4th Triangle

    glVertex3f(-0.64, 0.63, 0);


    glVertex3f(-0.7, 0.68, 0);


    glVertex3f(-0.82, 0.43, 0);

    //5th Triangle

    glVertex3f(-0.64, 0.63, 0);


    glVertex3f(-0.58, 0.68, 0);


    glVertex3f(-0.51, 0.43, 0);

    glEnd();

    glBegin(GL_POLYGON);//code for the Polygon within the stars
    glColor3f(1, 1,1);//sets color of Polygon

    glVertex3f(-0.68, 0.77, 0); //set the 5 vetices of polygon


    glVertex3f(-0.60, 0.77, 0);


    glVertex3f(-0.7, 0.68, 0);


    glVertex3f(-0.64, 0.63, 0);


    glVertex3f(-0.58, 0.68, 0);




    glEnd();


    glColor3f(1, 1,1);
glBegin(GL_POLYGON);

glVertex3f(-0.60, 0.77, 0); // <--- -0.60 instead of -0.68
glVertex3f(-0.68, 0.77, 0); // <--- -0.68 instead of -0.60
glVertex3f(-0.7, 0.68, 0);
glVertex3f(-0.64, 0.63, 0);
glVertex3f(-0.58, 0.68, 0);

glEnd();


////4thstar/



glLoadIdentity();

glTranslatef(.5,.83,0);
glScalef(.09,.06,0);


    glBegin(GL_TRIANGLES);

    glColor3f(1, 1, 1);
    glVertex3f(-0.60, 0.77, 0);


    glVertex3f(-0.42, 0.77, 0);


    glVertex3f(-0.58, 0.68, 0);

    //second triangle top triangle


    glVertex3f(-0.64, 1, 0);


    glVertex3f(-0.68, 0.77, 0);


    glVertex3f(-0.60, 0.77, 0);

    //3rd Triangle

    glVertex3f(-0.68, 0.77, 0);


    glVertex3f(-0.7, 0.68, 0);


    glVertex3f(-0.86, 0.77, 0);

    //4th Triangle

    glVertex3f(-0.64, 0.63, 0);


    glVertex3f(-0.7, 0.68, 0);


    glVertex3f(-0.82, 0.43, 0);

    //5th Triangle

    glVertex3f(-0.64, 0.63, 0);


    glVertex3f(-0.58, 0.68, 0);


    glVertex3f(-0.51, 0.43, 0);

    glEnd();

    glBegin(GL_POLYGON);//code for the Polygon within the stars
    glColor3f(1, 1,1);//sets color of Polygon

    glVertex3f(-0.68, 0.77, 0); //set the 5 vetices of polygon


    glVertex3f(-0.60, 0.77, 0);


    glVertex3f(-0.7, 0.68, 0);


    glVertex3f(-0.64, 0.63, 0);


    glVertex3f(-0.58, 0.68, 0);




    glEnd();


    glColor3f(1, 1,1);
glBegin(GL_POLYGON);

glVertex3f(-0.60, 0.77, 0); // <--- -0.60 instead of -0.68
glVertex3f(-0.68, 0.77, 0); // <--- -0.68 instead of -0.60
glVertex3f(-0.7, 0.68, 0);
glVertex3f(-0.64, 0.63, 0);
glVertex3f(-0.58, 0.68, 0);

glEnd();


///5th star
glLoadIdentity();

glTranslatef(.7,.76,0);
glScalef(.09,.06,0);


    glBegin(GL_TRIANGLES);

    glColor3f(1, 1, 1);
    glVertex3f(-0.60, 0.77, 0);


    glVertex3f(-0.42, 0.77, 0);


    glVertex3f(-0.58, 0.68, 0);

    //second triangle top triangle


    glVertex3f(-0.64, 1, 0);


    glVertex3f(-0.68, 0.77, 0);


    glVertex3f(-0.60, 0.77, 0);

    //3rd Triangle

    glVertex3f(-0.68, 0.77, 0);


    glVertex3f(-0.7, 0.68, 0);


    glVertex3f(-0.86, 0.77, 0);

    //4th Triangle

    glVertex3f(-0.64, 0.63, 0);


    glVertex3f(-0.7, 0.68, 0);


    glVertex3f(-0.82, 0.43, 0);

    //5th Triangle

    glVertex3f(-0.64, 0.63, 0);


    glVertex3f(-0.58, 0.68, 0);


    glVertex3f(-0.51, 0.43, 0);

    glEnd();

    glBegin(GL_POLYGON);//code for the Polygon within the stars
    glColor3f(1, 1,1);//sets color of Polygon

    glVertex3f(-0.68, 0.77, 0); //set the 5 vetices of polygon


    glVertex3f(-0.60, 0.77, 0);


    glVertex3f(-0.7, 0.68, 0);


    glVertex3f(-0.64, 0.63, 0);


    glVertex3f(-0.58, 0.68, 0);




    glEnd();


    glColor3f(1, 1,1);
glBegin(GL_POLYGON);

glVertex3f(-0.60, 0.77, 0); // <--- -0.60 instead of -0.68
glVertex3f(-0.68, 0.77, 0); // <--- -0.68 instead of -0.60
glVertex3f(-0.7, 0.68, 0);
glVertex3f(-0.64, 0.63, 0);
glVertex3f(-0.58, 0.68, 0);

glEnd();



/////6th star//


glLoadIdentity();

glTranslatef(.85,.835,0);
glScalef(.09,.06,0);


    glBegin(GL_TRIANGLES);

    glColor3f(1, 1, 1);
    glVertex3f(-0.60, 0.77, 0);


    glVertex3f(-0.42, 0.77, 0);


    glVertex3f(-0.58, 0.68, 0);

    //second triangle top triangle


    glVertex3f(-0.64, 1, 0);


    glVertex3f(-0.68, 0.77, 0);


    glVertex3f(-0.60, 0.77, 0);

    //3rd Triangle

    glVertex3f(-0.68, 0.77, 0);


    glVertex3f(-0.7, 0.68, 0);


    glVertex3f(-0.86, 0.77, 0);

    //4th Triangle

    glVertex3f(-0.64, 0.63, 0);


    glVertex3f(-0.7, 0.68, 0);


    glVertex3f(-0.82, 0.43, 0);

    //5th Triangle

    glVertex3f(-0.64, 0.63, 0);


    glVertex3f(-0.58, 0.68, 0);


    glVertex3f(-0.51, 0.43, 0);

    glEnd();

    glBegin(GL_POLYGON);//code for the Polygon within the stars
    glColor3f(1, 1,1);//sets color of Polygon

    glVertex3f(-0.68, 0.77, 0); //set the 5 vetices of polygon


    glVertex3f(-0.60, 0.77, 0);


    glVertex3f(-0.7, 0.68, 0);


    glVertex3f(-0.64, 0.63, 0);


    glVertex3f(-0.58, 0.68, 0);




    glEnd();


    glColor3f(1, 1,1);
glBegin(GL_POLYGON);

glVertex3f(-0.60, 0.77, 0); // <--- -0.60 instead of -0.68
glVertex3f(-0.68, 0.77, 0); // <--- -0.68 instead of -0.60
glVertex3f(-0.7, 0.68, 0);
glVertex3f(-0.64, 0.63, 0);
glVertex3f(-0.58, 0.68, 0);

glEnd();
}


void drawCircle4(GLfloat xx, GLfloat yy, GLfloat r,int rr,int g,int b)
{
      int i;
     glScalef(0.72,1,1);

	GLfloat x=xx; GLfloat y=yy; GLfloat radius =r;
	int triangleAmount = 40; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(rr,g,b);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}

void drawCircle5(GLfloat xx, GLfloat yy, GLfloat r,int rr,int g,int b){

    int i;

    //glScalef(0.72,1,1);

	GLfloat x=-xx; GLfloat y=yy; GLfloat radius =r;
	int triangleAmount = 40; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(rr,g,b);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}


void moon()
{

    glLoadIdentity();

    drawCircle5(-.7,.8,.1,255,255,255);

    drawCircle5(-.72,.84,.1,5, 54, 64);

}




void update_rain(int value)
{
    rain_translate -= 0.0025f;
    if(rain_translate < -2.0)
        {
            rain_translate = 0.0;
        }
	glutPostRedisplay();    ///Notify GLUT that the display has changed
	glutTimerFunc(10, update_rain, 0);   ///Notify GLUT to call update again in 20 milliseconds
}


void rain_drawing()
{
    glLineWidth(0.05);

    glPushMatrix();
    glTranslatef(0.0, rain_translate , 0.0);

    for(float i=-2.0; i <= 4.0; i += 0.04)
    {
       glPushMatrix();
       glTranslatef(0.0, -i , 0.0);

    glBegin(GL_LINES);
    glColor3ub(192,192,192);

    glVertex2f(-.85,1.9);glVertex2f(-.8,1.8);
    glVertex2f(-.55,1.9);glVertex2f(-.5,1.8);
    glVertex2f(-.25,1.9);glVertex2f(-.2,1.8);
            glVertex2f(.05,1.9);glVertex2f(.1,1.8);
            glVertex2f(.35,1.9);glVertex2f(.4,1.8);
            glVertex2f(.65,1.9);glVertex2f(.7,1.8);
            glVertex2f(.95,1.9);glVertex2f(1.0,1.8);

     glVertex2f(-1.0,1.6);glVertex2f(-.95,1.5);
    glVertex2f(-.7,1.6);glVertex2f(-.65,1.5);
    glVertex2f(-.4,1.6);glVertex2f(-.35,1.5);
    glVertex2f(-.1,1.6);glVertex2f(-.05,1.5);
            glVertex2f(.2,1.6);glVertex2f(.25,1.5);
            glVertex2f(.5,1.6);glVertex2f(.55,1.5);
            glVertex2f(.8,1.6);glVertex2f(.85,1.5);


    glVertex2f(-.85,1.3);glVertex2f(-.8,1.2);
    glVertex2f(-.55,1.3);glVertex2f(-.5,1.2);
    glVertex2f(-.25,1.3);glVertex2f(-.2,1.2);
             glVertex2f(.05,1.3);glVertex2f(.1,1.2);
            glVertex2f(.35,1.3);glVertex2f(.4,1.2);
            glVertex2f(.65,1.3);glVertex2f(.7,1.2);
            glVertex2f(.95,1.3);glVertex2f(1.0,1.2);

    glVertex2f(-1.0,1.0);glVertex2f(-.95,.9);
    glVertex2f(-.7,1.0);glVertex2f(-.65,0.9);
    glVertex2f(-.4,1.0);glVertex2f(-.35,0.9);
    glVertex2f(-.1,1.0);glVertex2f(-.05,0.9);
                 glVertex2f(.2,1.0);glVertex2f(.25,.9);
                 glVertex2f(.5,1.0);glVertex2f(.55,0.9);
                 glVertex2f(.8,1.0);glVertex2f(.85,0.9);



    glVertex2f(-.85,.7);glVertex2f(-.8,.6);
    glVertex2f(-.55,.7);glVertex2f(-.5,0.6);
    glVertex2f(-.25,.7);glVertex2f(-.2,0.6);
              glVertex2f(.05,.7);glVertex2f(.1,.6);
            glVertex2f(.35,.7);glVertex2f(.4,.6);
            glVertex2f(.65,.7);glVertex2f(.7,.6);
            glVertex2f(.95,.7);glVertex2f(1.0,.6);

    glVertex2f(-1.0,.4);glVertex2f(-.95,.3);
    glVertex2f(-.7,.4);glVertex2f(-.65,0.3);
    glVertex2f(-.4,.4);glVertex2f(-.35,0.3);
    glVertex2f(-.1,.4);glVertex2f(-.05,0.3);
                 glVertex2f(.2,.4);glVertex2f(.25,.3);
                 glVertex2f(.5,.4);glVertex2f(.55,0.3);
                 glVertex2f(.8,.40);glVertex2f(.85,0.3);

    glVertex2f(-.85,.1);glVertex2f(-.8,0.0);
    glVertex2f(-.55,.1);glVertex2f(-.5,0.0);
    glVertex2f(-.25,.1);glVertex2f(-.2,0.0);
              glVertex2f(.05,.1);glVertex2f(.1,.0);
            glVertex2f(.35,.1);glVertex2f(.4,.0);
            glVertex2f(.65,.1);glVertex2f(.7,.0);
            glVertex2f(.95,.1);glVertex2f(1.0,.0);


    glVertex2f(-1.0,-.2);glVertex2f(-.95,-.3);
    glVertex2f(-.7,-.2);glVertex2f(-.65,-0.3);
    glVertex2f(-.4,-.2);glVertex2f(-.35,-0.3);
    glVertex2f(-.1,-.2);glVertex2f(-.05,-0.3);
                 glVertex2f(.2,-.2);glVertex2f(.25,-.3);
                 glVertex2f(.5,-.2);glVertex2f(.55,-.3);
                 glVertex2f(.8,-.2);glVertex2f(.85,-.3);

    glVertex2f(-.85,-.5);glVertex2f(-.8,-.6);
    glVertex2f(-.55,-.5);glVertex2f(-.5,-.6);
    glVertex2f(-.25,-.5);glVertex2f(-.2,-.6);
              glVertex2f(.05,-.5);glVertex2f(.1,-.6);
            glVertex2f(.35,-.5);glVertex2f(.4,-.6);
            glVertex2f(.65,-.5);glVertex2f(.7,-.6);
            glVertex2f(.95,-.5);glVertex2f(1.0,-.6);

    glVertex2f(-1.0,-.8);glVertex2f(-.95,-.9);
    glVertex2f(-.7,-.8);glVertex2f(-.65,-0.9);
    glVertex2f(-.4,-.8);glVertex2f(-.35,-0.9);
    glVertex2f(-.1,-.8);glVertex2f(-.05,-0.9);
                 glVertex2f(.2,-.8);glVertex2f(.25,-.9);
                 glVertex2f(.5,-.8);glVertex2f(.55,-.9);
                 glVertex2f(.8,-.8);glVertex2f(.85,-.9);

    glVertex2f(-.85,-1.1);glVertex2f(-.8,-1.2);
    glVertex2f(-.55,-1.1);glVertex2f(-.5,-1.2);
    glVertex2f(-.25,-1.1);glVertex2f(-.2,-1.2);
              glVertex2f(.05,-1.1);glVertex2f(.1,-1.2);
            glVertex2f(.35,-1.1);glVertex2f(.4,-1.2);
            glVertex2f(.65,-1.1);glVertex2f(.7,-1.2);
            glVertex2f(.95,-1.1);glVertex2f(1.0,-1.2);

    glVertex2f(-1.0,-1.4);glVertex2f(-.95,-1.5);
    glVertex2f(-.7,-1.4);glVertex2f(-.65,-1.5);
    glVertex2f(-.4,-1.4);glVertex2f(-.35,-1.5);
    glVertex2f(-.1,-1.4);glVertex2f(-.05,-1.5);
                 glVertex2f(.2,-1.4);glVertex2f(.25,-1.5);
                 glVertex2f(.5,-1.4);glVertex2f(.55,-1.5);
                 glVertex2f(.8,-1.4);glVertex2f(.85,-1.5);


        glEnd();
        }
    glPopMatrix();
}

void night_rain_drawing()
{
    glLineWidth(0.05);



    glPushMatrix();
    glTranslatef(0.0, rain_translate , 0.0);



    for(float i=-2.0; i <= 4.0; i += 0.04)
    {
       glPushMatrix();
       glTranslatef(0.0, -i , 0.0);



    glBegin(GL_LINES);
    glColor3ub(192,192,192);



    glVertex2f(-.85,1.9);glVertex2f(-.83,1.8);
    glVertex2f(-.55,1.9);glVertex2f(-.53,1.8);
    glVertex2f(-.25,1.9);glVertex2f(-.23,1.8);
            glVertex2f(.05,1.9);glVertex2f(.07,1.8);
            glVertex2f(.35,1.9);glVertex2f(.37,1.8);
            glVertex2f(.65,1.9);glVertex2f(.67,1.8);
            glVertex2f(.95,1.9);glVertex2f(97.0,1.8);



     glVertex2f(-1.0,1.6);glVertex2f(-.98,1.5);
    glVertex2f(-.7,1.6);glVertex2f(-.68,1.5);
    glVertex2f(-.4,1.6);glVertex2f(-.38,1.5);
    glVertex2f(-.1,1.6);glVertex2f(-.08,1.5);
            glVertex2f(.2,1.6);glVertex2f(.22,1.5);
            glVertex2f(.5,1.6);glVertex2f(.52,1.5);
            glVertex2f(.8,1.6);glVertex2f(.82,1.5);



    glVertex2f(-.85,1.3);glVertex2f(-.83,1.2);
    glVertex2f(-.55,1.3);glVertex2f(-.53,1.2);
    glVertex2f(-.25,1.3);glVertex2f(-.23,1.2);
             glVertex2f(.05,1.3);glVertex2f(.07,1.2);
            glVertex2f(.35,1.3);glVertex2f(.37,1.2);
            glVertex2f(.65,1.3);glVertex2f(.67,1.2);
            glVertex2f(.95,1.3);glVertex2f(.97,1.2);



    glVertex2f(-1.0,1.0);glVertex2f(-.98,.9);
    glVertex2f(-.7,1.0);glVertex2f(-.68,0.9);
    glVertex2f(-.4,1.0);glVertex2f(-.38,0.9);
    glVertex2f(-.1,1.0);glVertex2f(-.08,0.9);
                 glVertex2f(.2,1.0);glVertex2f(.22,.9);
                 glVertex2f(.5,1.0);glVertex2f(.52,0.9);
                 glVertex2f(.8,1.0);glVertex2f(.82,0.9);





    glVertex2f(-.85,.7);glVertex2f(-.83,.6);
    glVertex2f(-.55,.7);glVertex2f(-.53,0.6);
    glVertex2f(-.25,.7);glVertex2f(-.23,0.6);
              glVertex2f(.05,.7);glVertex2f(.07,.6);
            glVertex2f(.35,.7);glVertex2f(.37,.6);
            glVertex2f(.65,.7);glVertex2f(.67,.6);
            glVertex2f(.95,.7);glVertex2f(.97,.6);



    glVertex2f(-1.0,.4);glVertex2f(-.98,.3);
    glVertex2f(-.7,.4);glVertex2f(-.68,0.3);
    glVertex2f(-.4,.4);glVertex2f(-.38,0.3);
    glVertex2f(-.1,.4);glVertex2f(-.08,0.3);
                 glVertex2f(.2,.4);glVertex2f(.22,.3);
                 glVertex2f(.5,.4);glVertex2f(.52,0.3);
                 glVertex2f(.8,.40);glVertex2f(.82,0.3);



    glVertex2f(-.85,.1);glVertex2f(-.83,0.0);
    glVertex2f(-.55,.1);glVertex2f(-.53,0.0);
    glVertex2f(-.25,.1);glVertex2f(-.23,0.0);
              glVertex2f(.05,.1);glVertex2f(.07,.0);
            glVertex2f(.35,.1);glVertex2f(.37,.0);
            glVertex2f(.65,.1);glVertex2f(.67,.0);
            glVertex2f(.95,.1);glVertex2f(.97,.0);



    glVertex2f(-1.0,-.2);glVertex2f(-.98,-.3);
    glVertex2f(-.7,-.2);glVertex2f(-.68,-0.3);
    glVertex2f(-.4,-.2);glVertex2f(-.38,-0.3);
    glVertex2f(-.1,-.2);glVertex2f(-.08,-0.3);
                 glVertex2f(.2,-.2);glVertex2f(.22,-.3);
                 glVertex2f(.5,-.2);glVertex2f(.52,-.3);
                 glVertex2f(.8,-.2);glVertex2f(.82,-.3);



    glVertex2f(-.85,-.5);glVertex2f(-.83,-.6);
    glVertex2f(-.55,-.5);glVertex2f(-.53,-.6);
    glVertex2f(-.25,-.5);glVertex2f(-.23,-.6);
              glVertex2f(.05,-.5);glVertex2f(.07,-.6);
            glVertex2f(.35,-.5);glVertex2f(.37,-.6);
            glVertex2f(.65,-.5);glVertex2f(.67,-.6);
            glVertex2f(.95,-.5);glVertex2f(.97,-.6);



    glVertex2f(-1.0,-.8);glVertex2f(-.98,-.9);
    glVertex2f(-.7,-.8);glVertex2f(-.68,-0.9);
    glVertex2f(-.4,-.8);glVertex2f(-.38,-0.9);
    glVertex2f(-.1,-.8);glVertex2f(-.08,-0.9);
                 glVertex2f(.2,-.8);glVertex2f(.22,-.9);
                 glVertex2f(.5,-.8);glVertex2f(.52,-.9);
                 glVertex2f(.8,-.8);glVertex2f(.82,-.9);



    glVertex2f(-.85,-1.1);glVertex2f(-.83,-1.2);
    glVertex2f(-.55,-1.1);glVertex2f(-.53,-1.2);
    glVertex2f(-.25,-1.1);glVertex2f(-.23,-1.2);
              glVertex2f(.05,-1.1);glVertex2f(.07,-1.2);
            glVertex2f(.35,-1.1);glVertex2f(.37,-1.2);
            glVertex2f(.65,-1.1);glVertex2f(.67,-1.2);
            glVertex2f(.95,-1.1);glVertex2f(.97,-1.2);



    glVertex2f(-1.0,-1.4);glVertex2f(-.98,-1.5);
    glVertex2f(-.7,-1.4);glVertex2f(-.68,-1.5);
    glVertex2f(-.4,-1.4);glVertex2f(-.38,-1.5);
    glVertex2f(-.1,-1.4);glVertex2f(-.08,-1.5);
                 glVertex2f(.2,-1.4);glVertex2f(.22,-1.5);
                 glVertex2f(.5,-1.4);glVertex2f(.52,-1.5);
                 glVertex2f(.8,-1.4);glVertex2f(.82,-1.5);



        glEnd();
        }
    glPopMatrix();
}

void rain_night_display(){

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
              glClear(GL_COLOR_BUFFER_BIT);

    sky(5, 54, 64);


    fgrass(0, 51, 0);
        road();


    WalkWay();
    movingtruck();




    lgrass(0, 51, 0);
    building(161, 255, 54);
    university(107, 194, 8);
    //tr();
    metrotrack();

    drawCircle(173, 123, 36);
    hospital(228, 255, 196,173, 123, 36);
    hotel(116, 214, 204);
    lamp(216, 230, 23);
    leftbench(216, 230, 23);
    rightbench(216, 230, 23);
    downlighteffects();
     movingcar();
     parkingleft();
     parkingright();

    movingtrain();


    tree();

    middletrees();



   plane();
    ///Rain();
   night_rain_drawing();

    glFlush();

    glutSwapBuffers();
}


void night_display(){



    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
              glClear(GL_COLOR_BUFFER_BIT);

    sky(5, 54, 64);


    fgrass(15, 71, 30);

        road();



    WalkWay();
    movingtruck();




    lgrass(15, 71, 30);
    building(161, 255, 54);
    university(107, 194, 8);

    metrotrack();

    drawCircle(173, 123, 36);
    hospital(228, 255, 196,173, 123, 36);
    hotel(116, 214, 204);
    lamp(216, 230, 23);
    leftbench(216, 230, 23);
    rightbench(216, 230, 23);
    downlighteffects();
     movingcar();
     parkingleft();
     parkingright();

    movingtrain();


    tree();

    middletrees();



    star();

    moon();

    plane();


    glFlush();
}

void day_display(){

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    sky(18, 172, 255);
    sun();
    cloud_left();
    cloud_right();

    fgrass(79, 179, 64);

    road();

    WalkWay();
    movingtruck();

    lgrass(79, 179, 64);
    building(87, 86, 86);
    university(94, 94, 94);

    metrotrack();



    drawCircle(230, 230, 34);
    hospital(0, 0, 0,230, 230, 34);
    hotel(116, 214, 204);
    lamp(255,255,255);
    movingcar();
    parkingleft();
    parkingright();

    movingtrain();
    tree();

    middletrees();
    leftbench(255,255,255);
    rightbench(255,255,255);
    plane();




    glFlush();
    glutSwapBuffers();
}


void rain_display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


    sky(49, 69, 117);


    fgrass(0, 51, 0);

    road();
    thunder();
    WalkWay();
    movingtruck();

    lgrass(0, 51, 0);
    building(87, 86, 86);
    university(94, 94, 94);

    metrotrack();

    drawCircle(230, 230, 34);
    hospital(0, 0, 0,230, 230, 34);
    hotel(116, 214, 204);
    lamp(255,255,255);
    movingcar();
    parkingleft();
    parkingright();

    movingtrain();
    tree();

    middletrees();
    leftbench(255,255,255);
    rightbench(255,255,255);
    plane();

    rain_drawing();



    glFlush();
    glutSwapBuffers();
}


void winter_display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


    sky(164, 167, 176);

    cloud_left();
    cloud_right();

    fgrass(79, 179, 64);

    road();

    WalkWay();
    movingtruck();

    lgrass(79, 179, 64);
    building(87, 86, 86);
    university(94, 94, 94);

    metrotrack();

    drawCircle(230, 230, 34);
    hospital(0, 0, 0,230, 230, 34);
    hotel(116, 214, 204);
    lamp(255,255,255);
    movingcar();
    parkingleft();
    parkingright();

    movingtrain();
    tree();

    middletrees();
    leftbench(255,255,255);
    rightbench(255,255,255);
    plane();

    glFlush();
    glutSwapBuffers();
}


void snow_display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


    sky(0, 204, 204);

    cloud_left();
    cloud_right();

    fgrass(0, 102, 51);

    road();

    WalkWay();
    movingtruck();

    lgrass(0, 102, 51);
    building(87, 86, 86);
    university(94, 94, 94);

    metrotrack();

    drawCircle(230, 230, 34);
    hospital(0, 0, 0,230, 230, 34);
    hotel(116, 214, 204);
    lamp(255,255,255);
    movingcar();
    parkingleft();
    parkingright();

    movingtrain();
    tree();

    middletrees();
    leftbench(255,255,255);
    rightbench(255,255,255);
    plane();

    snow();


    glFlush();
    glutSwapBuffers();
}


void snow_night_display(){


    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
              glClear(GL_COLOR_BUFFER_BIT);

    sky(5, 54, 64);

    fgrass(161, 161, 161);

        road();



    WalkWay();


    lgrass(161, 161, 161);
    building(161, 255, 54);
    university(107, 194, 8);

    metrotrack();

    drawCircle(173, 123, 36);
    hospital(228, 255, 196,173, 123, 36);
    hotel(116, 214, 204);
    lamp(216, 230, 23);
    leftbench(216, 230, 23);
    rightbench(216, 230, 23);
    downlighteffects();

    parkingleft();
    parkingright();


    tree();

    middletrees();

    star();

    moon();

    snow();

    glFlush();

}

    void default_display(){

    glClearColor(.90f, .90f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    topprint(-.48,.9,Top);

    titleprint(-.27,.75 ,Title);

    topprint(-.80,.33,Instructions);
    print(-.80, .20,Instructions1);
    print(-.80, .10,Instructions2);
    print(-.80, .00,Instructions3);
    print(-.80,-.10,Instructions4);
    print(-.80,-.20,Instructions5);
    print(-.80,-.30,Instructions6);
    print(-.80,-.40,Instructions7);
    print(-.80,-.50,Instructions8);

    glFlush();
    glutSwapBuffers();



}


void handleKeypress(unsigned char key, int x, int y)
{
switch (key) {

        case 'n':


            glutDisplayFunc(night_display);


        break;

        case 'd':



            glutDisplayFunc(day_display);


        break;

        case 'r':

            glutDisplayFunc(rain_display);


        break;

        case 'w':
            glutDisplayFunc(winter_display);

        break;

        case 's':
            glutDisplayFunc(snow_display);


        break;

        case 'q':
            glutDisplayFunc(snow_night_display);



        break;

         case 'h':
            glutDisplayFunc(default_display);

        break;

        case 'p':
            glutDisplayFunc(rain_night_display);

        break;

        glutPostRedisplay();
	}
}

int main(int argc, char** argv) {

    cout<<"\nDowntown View";
    cout<<"\n\n";
    cout<<"\nPress D for Day View";
    cout<<"\n";
    cout<<"\nPress N for Night View";
    cout<<"\n";
    cout<<"\nPress W for Winter View";
    cout<<"\n";
    cout<<"\nPress S for Snow View";
    cout<<"\n";
    cout<<"\nPress R for Rain View";
    cout<<"\n";
    cout<<"\nPress Q for Snow-Night View";
    cout<<"\n";
    cout<<"\nPress P for Rain_night View";
    cout<<"\n";
    cout<<"\nPress H for Default View";

    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (640,500);
    glutInitWindowPosition (200, 150);
	glutCreateWindow("Downtown View");
	glBlendFunc(GL_SRC_ALPHA,GL_ONE_MINUS_SRC_ALPHA);
	glEnable( GL_BLEND );
	glClearColor(0.0,0.0,0.0,0.0);

	glutDisplayFunc(default_display);


	glutKeyboardFunc(handleKeypress);


    glutTimerFunc(100, update_car, 0);
    glutTimerFunc(100, update_truck, 0);
    glutTimerFunc(100, update_train, 0);
    glutTimerFunc(100, update_plane, 0);
	glutTimerFunc(10, update_rain, 0);
	glutTimerFunc(100, update_snow_10, 0);
    glutTimerFunc(30, update_snow_2, 0);
    glutTimerFunc(40, update_snow_3, 0);
    glutTimerFunc(20, update_snow_4, 0);
    glutTimerFunc(90, update_snow_5, 0);
    glutTimerFunc(50, update_snow_6, 0);
    glutTimerFunc(80, update_snow_7, 0);
    glutTimerFunc(3, update_snow_8, 0);
    glutTimerFunc(4, update_snow_9, 0);
    glutTimerFunc(10, update_snow_1, 0);


	glutKeyboardFunc(handleKeypress);

    glutIdleFunc(Idle);

	glutMainLoop();
	myInit();
	return 0;
}
