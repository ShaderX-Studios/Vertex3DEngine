#include <gl/gl.h>

void DrawTriangle(){
    glColor3f(0.0f, 0.0f, 1.0f);

    glBegin(GL_TRIANGLES);
        glVertex3f(-0.75f, 0.0f, 0.25f);
        glVertex3f(0.75f, 0.0f, 0.25f);
        glVertex3f(0.0f, 0.75f, 0.25f);
    glEnd();
    glColor3f(0.0f, 0.0f, 0.0f);
}
