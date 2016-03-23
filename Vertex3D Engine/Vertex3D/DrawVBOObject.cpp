#include <gl/gl.h>
#include <windows.h>
#include <fstream>
#include <iostream>

using namespace std;

void DrawVBOObject(){

    string datType;
    float vpo;
    float vpt;
    float vptr;

ifstream matColor;
matColor.open("C:/Program Files/Vertex3D/Vertex3DModels/Engine/matColor.enginesys");

    glBegin(GL_QUADS);
    float r;
    float g;
    float b;
while(matColor >> r >> g >> b){
       // if(datType == "rgb"){
            glColor3f(r, g, b);
      //  }
       // else if(datType == "n"){
   //glColor3f(r, g, b);
      //  }
      //  else{
      //         glColor3f(r, g, b);

      //  }
}
            matColor.close();




    ifstream VBO;
    VBO.open("C:/Program Files/Vertex3D/Vertex3DModels/Sphere.sxm");

    ofstream vertexOutput;
vertexOutput.open("C:/Program Files/Vertex3D/Vertex3DModels/Cache/vertexCache.scdf");

   while(VBO >> datType >> vpo >> vpt >> vptr) {


        glVertex3f(vpo, vpt, vptr);

        vertexOutput << datType << " " << vpo << " " << vpt << " " << vptr << endl;

    }

vertexOutput.close();

    glEnd();
glColor3f(0.0f, 0.0f, 0.0f);
    VBO.close();


}
