#include <windows.h>
#include <gl/gl.h>
#include <fstream>
#include <iostream>
#include "Draw.h"

using namespace std;



GLint theta;
void drawHandle(HDC hDC){


ifstream backgroundColor;
backgroundColor.open("C:/Program Files/Vertex3D/Vertex3DModels/Engine/SkyboxColor.enginesys");
ofstream bakcahce;
bakcahce.open("C:/Program Files/Vertex3DModels/Vertex3D/Vertex3DModels/Engine/SkyboxCache.scdf");

    float r;
    float g;
    float b;
    float a;
while(backgroundColor >> r >> g >> b >> a){
   glClearColor(r, g, b, a);
   // glClearColor(r, g, b, a);//0.5f, 0.5f, 1.5f, 1.0f
    bakcahce << r << " " << g << " " << b << " " << a << endl;

}
     bakcahce.close();
            backgroundColor.close();

            glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

            glPushMatrix();
            glRotatef(theta, 0.0f, 0.5f, 0.0f);

            DrawAll();

            glPopMatrix();
            glFlush();

            glFinish();

            SwapBuffers(hDC);
            theta += 1.0;


}
