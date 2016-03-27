@echo off

echo SYNTAX:
echo 0.0 0.0 0.0 1.0 (This is an example of the color black with an alpha of 1.0)
echo Always make your values a decimal
echo The first number is your red value, the second is green, the third is blue, and the last is alpha (Transparencey)

:main
set /p NewColor=New RGBA Value: 

cd "c://Program Files/Vertex3D/Vertex3DModels/Engine"

echo %NewColor% > SkyboxColor.enginesys

goto main