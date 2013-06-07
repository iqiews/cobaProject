#include <stdio.h>
#include <GL/glut.h>



void buat_kotak1()
{
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(0.25,0.25);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(0.25,0.50);    
    glVertex2f(0.50, 0.50);
    glColor3f(0.0,1.0,0.0);
    glVertex2f(0.50, 0.25);
    glEnd();
}

void buat_kotak2()
{
    glBegin(GL_POLYGON);
    glVertex2f(0.25,0.25);
    glColor3f(0.0,0.0,1.0);
    glVertex2f(0.25,0.50);    
    //glVertex2f(0.50, 0.50);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(0.10, 0.25);
    //glVertex2f(0.50, 0.50);
    glEnd();
}

void persegi_panjang()
{
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(0.25,0.35);
    glColor3f(0.0,1.0,0.0);
    glVertex2f(0.25,0.50);    
    glVertex2f(0.50, 0.50);
    glColor3f(0.0,1.0,0.0);
    glVertex2f(0.50, 0.35);
    glEnd();
}

void ketupat()
{
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(0.25,0.25);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(0.25,0.50);    
    glVertex2f(0.50, 0.50);
    glColor3f(0.0,1.0,0.0);
    glVertex2f(0.50, 0.25);
    glEnd();
}

void buat_segitiga()
{
    glBegin(GL_TRIANGLES);
    glVertex2f(0.13,0.5);
    glVertex2f(0.25,0.25);    
    glVertex2f(0.0, 0.25);
    //glVertex2f(0.50, 0.25);
    glEnd();
}

void buat_trapesium()
{
    glBegin(GL_POLYGON);
    glVertex2f(-0.6, -0.6); 
    glVertex2f(0.6, -0.6);
    glVertex2f(0.4, 0.3);
    glVertex2f(-0.4, 0.3);
    glEnd();
}

void segi_enam()
{
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(0.2,0.4);
    glVertex2f(0.4,0.2);
    glVertex2f(0.4,-0.2);
    glVertex2f(0.2,-0.4);
    glVertex2f(-0.2,-0.4);
    glVertex2f(-0.4,-0.2);
    glVertex2f(-0.4,0.2);
    glVertex2f(-0.2,0.4);
    glEnd();
}

void plusA()
{
    glBegin(GL_QUADS);
    //glColor3f(0.0,0.0,0.0);
    glVertex2f(0.25,0.35);
    glColor3f(0.0,1.0,0.0);
    glVertex2f(0.25,0.50);    
    glVertex2f(0.50, 0.50);
    glColor3f(0.0,1.0,0.0);
    glVertex2f(0.50, 0.35);
    glEnd();
}

void plusB()
{
    glBegin(GL_QUADS);
    //glColor3f(0.0,0.0,0.0);
    glVertex2f(0.45,0.35);
    glColor3f(0.0,1.0,0.0);
    glVertex2f(0.45,0.80);    
    glVertex2f(0.50, 0.80);
    glColor3f(0.0,1.0,0.0);
    glVertex2f(0.50, 0.35);
    glEnd();
}

void diamond()
{
     glBegin(GL_POLYGON);                        
     glVertex2f(0.90, 0.50);
     glVertex2f(0.50, 0.90);
     glVertex2f(0.10, 0.50);
     glVertex2f(0.50, 0.10);
     glEnd();
}

void kotak_bolong()
{
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,1.0);
    glVertex2f(0.25,0.25);
    glColor3f(0.0,1.0,0.0);
    glVertex2f(0.25,0.50);    
    glVertex2f(0.50, 0.50);
    glColor3f(0.0,1.0,0.0);
    glVertex2f(0.50, 0.25);
    glEnd();
    
}

void bolong()
{
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(0.25,0.25);
    glVertex2f(0.25,0.50);    
    glVertex2f(0.50, 0.50);
    glVertex2f(0.50, 0.25);
    glEnd();
    
}

 
void display(void)
{
     glClear (GL_COLOR_BUFFER_BIT);
     
     glPushMatrix();
     glTranslatef(-0.2,0.4,0);
     
     buat_kotak1();
     glPopMatrix();
     
     glPushMatrix();
     glTranslatef(0.3,0.4,0);
     glColor3f(1.0,1.0,0.0);
     buat_kotak2();
     glPopMatrix();
     
     glPushMatrix();
     glTranslatef(0.7,0.4,0);
     glColor3f(0.0,0.0,1.0);
     buat_segitiga();
     glPopMatrix();
          
     glPushMatrix();
     glTranslatef(0.17,0.5,0);
     glScalef(0.25, 0.25, 0.0);
     glColor3f(0.0,1.0,1.0);
     buat_trapesium();
     glPopMatrix();
     
     glPushMatrix();
     glTranslatef(0.5,0.45,0);
     glScalef(0.3, 0.3, 0.0);
     segi_enam();
     glPopMatrix();
     
     glPushMatrix();
     glTranslatef(0.45,0.03,0);
     persegi_panjang();
     glPopMatrix();
     
     glPushMatrix();
     glScalef(0.8, 0.3, 0.0);
     glTranslatef(-0.15,0.2,0);
     //glColor3f(1.0,0.0,0.0);
     plusA();
     glPopMatrix();
     
     glPushMatrix();
     glScalef(0.8, 0.5, 0.0);
     glTranslatef(-0.25,-0.2,0);
     plusB();
     glPopMatrix();
     
     glPushMatrix();
     glScalef(0.3, 0.3, 0.0);
     glTranslatef(1.2,0.1,0);
     glColor3f(0.1,0.0,0.0);
     diamond();
     glPopMatrix();
     
     glPushMatrix();
     //glColor3f(0.1,0.0,0.0);
     glScalef(1, 1, 0.0);
     glTranslatef(0.45,-0.2,0);
     kotak_bolong();
     glPopMatrix();
     
     glPushMatrix();
     //glColor3f(0.1,0.0,0.0);
     glScalef(0.5, 0.5, 0.0);
     glTranslatef(1.28,0.0,0);
     bolong();
     glPopMatrix();
     
     
     glFlush ();
}

void init (void)
{
    glClearColor (1.0, 1.0, 1.0, 0.0);
    /*  initialize viewing values  */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (800, 600);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Tugas OpenGL");
    init ();
    glutDisplayFunc(display);
        glutMainLoop();
    return 0;  
}
