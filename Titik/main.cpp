#include <gl/glut.h>


void Draww() {
glClear(GL_COLOR_BUFFER_BIT);
glPointSize(2.5);
glBegin(GL_POINTS);         // awal kode untuk menggambar
glColor3f(1.0,0.0,0.0);        // MERAH
glVertex3f(0.5, 0.1, 0.1);       // posisi titik yang akan digambar
glColor3f(1.1,1.1,1.1); //PUTIH
glVertex3f(0.5, 0.3, 0.0);
glColor3f(0.0,0.0,1.0); // BIRU
glVertex3f(0.4, 0.5, 0.0);
glColor3f(1.0,1.0,0.0);// KUNING
glVertex3f(0.6, 0.5, 0.0);
glColor3f(1.0,0.0,1.0); // MAGENTA
glVertex3f(0.3, 0.7, 0.0);
glColor3f(0.0,1.0,1.0); //CYAN
glVertex3f(0.7, 0.7, 0.0);
glEnd();                               // akhir kode untuk menggambar
glFlush();                             // memastikan bahwa kode dieksekusi
}



void Initializes() {
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}



int main(int iArgc, char** cppArgv) {
glutInit(&iArgc, cppArgv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(550, 350);
glutInitWindowPosition(200, 200);
glutCreateWindow("Titik");
Initializes();
glutDisplayFunc(Draww);
glutMainLoop();
return 0;
}
