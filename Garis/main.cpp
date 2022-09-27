#include <gl/glut.h>


void Draw() {
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1.0,0.0,0.0);
glLineWidth(15);
glBegin(GL_LINES);
glVertex2f(0.8, 0.0);
glVertex2f(-0.8, 0.0);
glColor3f(1.0,0.0,0.0);
glEnd();                               // akhir kode untuk menggambar
glFlush();                             // memastikan bahwa kode dieksekusi
}



void Initialize() {
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
}



int main(int iArgc, char** cppArgv) {
glutInit(&iArgc, cppArgv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(550, 250);
glutInitWindowPosition(200, 200);
glutCreateWindow("Garis");
Initialize();
glutDisplayFunc(Draw);
glutMainLoop();
return 0;
}

