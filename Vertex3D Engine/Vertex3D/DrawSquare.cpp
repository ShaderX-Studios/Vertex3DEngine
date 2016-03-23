#include <gl/gl.h>
void DrawSquare(){
    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
        glVertex3f(0.75f, 0.75f, 0.5f);
        glVertex3f(0.75f, -0.75f, 0.5f);
        glVertex3f(-0.75f, -0.75f, 0.5f);
        glVertex3f(-0.75f, 0.75f, 0.5f);

    glEnd();
    glColor3f(0.0f, 0.0f, 0.0f);
}
