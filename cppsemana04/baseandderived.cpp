#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include "baseclass.hpp"

//Definimos una clase heredada de la clase base
class derivedclass:public baseclass
{
	public:
	//Definimos el constructor sobrecargado de la clase base para la clase heredada
	derivedclass(double min, double max, int np);

	//Definimos el metodo vistual para la clase heredada proveniente de la clase base
	double f(double x);
};
//Implementamos el constructor sobrecargado para la clase heredada
derivedclass::derivedclass(double min, double max, int np):baseclass(min, max, np) {}
//El par de llaves al final de la linea anterio se encarga de llmar al constructor una vez implementado para la clase heredada

//Implementamos método virtual para la clase heredada
double derivedclass::f(double x) {return (sin(x)*cos(x/3));
}

//Definimos funcion principal haciendo uso tanto de la clase base como de la clase heredada
int main (int argc, char* argv[])
{
       if ( argc<4 )
       {
       std::cout << "Not enough arguments!" << std::endl;
       return 0;
       }
double xmin = std::atof(argv[1]);
double xmax = std::atof(argv[2]);
int n = std::atoi(argv[3]);
std::cout << "xmin: " << xmin << std::endl;
std::cout << "xmax: " << xmax << std::endl;
std::cout << "n: " << n << std::endl;
//Definimos una instancia de la clase base
baseclass dgb(xmin, xmax, n);
dgb.ComputeAndSave(std::string ("makebase.dat"));
//Definimos una instancia de la clase heredada
derivedclass dgd(xmin, xmax, n);
dgd.ComputeAndSave(std::string ("makederived.dat"));
return 0;
}
