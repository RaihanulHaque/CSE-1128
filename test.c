#include <GL/freeglut.h>
// #include <string>

void drawText(float x, float y, char text[])
{
    glRasterPos2f(x, y);
    glutBitmapString(GLUT_BITMAP_8_BY_13, (const unsigned char *)text);
}

void draw()
{
    glClear(GL_COLOR_BUFFER_BIT);
    // drawText(0, 0, "Hello, World!");
    glRasterPos2f(0, 0);
    char text[] = "Rahi senpai";
    glutBitmapString(GLUT_BITMAP_8_BY_13, (const unsigned char *)text);
    glutSwapBuffers();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(256, 256);
    glutCreateWindow("Drawing Text");
    glutDisplayFunc(draw);
    glutMainLoop();
    return 0;
}