@echo off

echo SYNTAX:
echo 0.0 0.0 0.0 (This is an example of the color black)
echo Always make your values a decimal
echo The first number is your red value, the second is green, and the third is blue

:main
set /p NewColor=New RGB Value: 

cd "c://Program Files/Vertex3D/Vertex3DModels/Engine"

echo %NewColor% > matColor.enginesys

goto main