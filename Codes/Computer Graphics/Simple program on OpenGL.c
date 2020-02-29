//Open GL
#include <math.h>
#include <GL/glut.h>
//#include <GLUT/glut.h>
//#include <OpenGL/OpenGL.h>
//Initialize OpenGL
void init(void)
{
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0,300.0,0.0,300.0);
}
void draw(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POINTS);
    glVertex2d(150,150);
    glVertex2d(125,150);
    glVertex2d(10,350);
//	glVertex2d(10,150);
    glVertex2d(10,50);
    glEnd();
    glColor3f(0.0,0.4,0.2);
    glPointSize(3.0);
    glBegin(GL_LINES);
    glVertex2d(180, 15);
    glVertex2d(10, 145);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2d(75,75);
    glVertex2d(100,125);
    glVertex2d(125,75);
    glEnd();
    glBegin(GL_QUADS);
    glVertex2d(50,280);
    glVertex2d(100,280);
    glVertex2d(100,200);
    glVertex2d(50,200);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(170,280);
    glVertex2d(250,280);
    glVertex2d(280,250);
    glVertex2d(250,180);
    glVertex2d(170,180);
    glVertex2d(140,250);
    glEnd();
    glFlush();
}

int main(int argc, char**argv)
{
    glutInit(&argc, argv);
    glutInitWindowPosition(10,10);
    glutInitWindowSize(500,500);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("Example");
    init();
    glutDisplayFunc(draw);
    glutMainLoop();
    return 0;
}
