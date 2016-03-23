#include <gl/gl.h>
#include <windows.h>
#include <fstream>
#include <iostream>

using namespace std;

void DrawTerrain(){
    string datType;
    float vpo;
    float vpt;
    float vptr;


glBegin(GL_QUADS);
glColor3f(1.3f, 0.4f, 1.12f);

    ifstream terrainvo;
    terrainvo.open("C:/Users/radio/Documents/Vertex3D/Vertex3DModels/cube.sxm");

    ofstream vertexOutput;
vertexOutput.open("C:/Users/radio/Documents/Vertex3D/Vertex3DModels/vertexCache.scdf");

   while(terrainvo >> datType >> vpo >> vpt >> vptr) {
        glVertex3f(vpo, vpt, vptr);


        vertexOutput << datType << " " << vpo << " " << vpt << " " << vptr << endl;


    }

vertexOutput.close();

    glEnd();
glColor3f(0.0f, 0.0f, 0.0f);
    terrainvo.close();


}
