#include <gl/gl.h>

void DrawPlane(){

    glBegin(GL_QUADS);

    glColor3f(1.0f, 0.0f, 0.0f);
        glVertex3f(0.5f, 0.5f, 0.5f);
        glVertex3f(0.5f, -0.5f, 0.5f);
        glVertex3f(-0.5f, -0.5f, 0.5f);
        glVertex3f(-0.5f, 0.5f, 0.5f);


        glEnd();
    glColor3f(0.0f, 0.0f, 0.0f);

}
