#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "vector3d.hpp"

//Implementacion del constructor predeterminado
//para fijar las variables x, y, z.
Vector3D::Vector3D()
{
x=0;
y=0;
z=0;
}
//Implementacion del constructor sobrecargado
Vector3D::Vector3D(double i, double j, double k)
{
x=i;
y=j;
z=k;
}
//Implementacion de la funcion norm()
double Vector3D::norm () const
{
double magnitud = sqrt(x*x + y*y + z*z);
return magnitud;
}
