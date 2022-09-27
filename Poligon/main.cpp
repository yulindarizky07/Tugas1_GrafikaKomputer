#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <GL/glut.h>

void mydisplay(){
    glClear(GL_COLOR_BUFFER_BIT);

 glBegin(GL_POLYGON);
  glColor3f(1, 0, 0);
  glVertex2f(-0.5, -0.5); // bawah kiri
  glVertex2f(-0.75, 0); // tengah kiri
  glVertex2f(-0.5, 0.5); // atas kiri
  glVertex2f(0.2, -0.15); // puncak
  glVertex2f(0.5, 0.5); //atas kanan
  glVertex2f(0.75, 0); // tengah kanan
  glVertex2f(0.5, -0.5); // bawah kanan
  glVertex2f(0,-0.95); // bawah
 glEnd();
 glFlush();
}
void Initialize()
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
}

int main(int iArgc, char** cppArgv){
    glutInit(&iArgc, cppArgv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(250, 200);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("Poligon");
    Initialize();
    glutDisplayFunc(mydisplay);
    glutMainLoop();
    return 0;
}
