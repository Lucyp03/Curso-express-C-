#ifndef _VECTOR3DCLASS_H_
#define _VECTOR3DCLASS_H_
#include <cmath>
#include <iostream>

//Definimos clase
class Vector3D
{
private:
//Puntos que representan el vector
double x, y, z;

public:
//Constructor predeterminado
Vector3D();
//Constructor sobrecargado 
Vector3D(double i, double j, double k);
//Declaracion de la funcion que regrese
//la magnitud del vector instanciado 
double norm() const;
//Sobrecarga del operador suma  
Vector3D operator +(const Vector3D&) const;
};
#endif
