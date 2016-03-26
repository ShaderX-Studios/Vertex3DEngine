@echo off

set /p name=Enter Project Name: 

set /p dir=Where do you want the project to be saved? (This feature is disabled)

cd "C://Program Files/Vertex3D/Projects"

mkdir %name%

pause

echo Setting up project files...

cd "C://Program Files/Vertex3D/Projects/%name%"

mkdir Vertex3DModels

xcopy /s/e "C://Program Files/Vertex3D/Vertex3DModels" "C://Program Files/Vertex3D/Projects/%name%/Vertex3DModels"

pause