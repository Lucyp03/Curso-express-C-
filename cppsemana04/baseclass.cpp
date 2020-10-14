#include <cstdlib>
#include <iostream>
#include <fstream>
#include "baseclass.hpp"

//Llamamos al constructor sobrecargado y fijamos variables
baseclass::baseclass(double min, double max, int np)
{
	xmin=min;
	xmax=max;
	n=np;
	h=(xmax-xmin)/double(n-1);
}
//Llamamos funcion void
void baseclass::ComputeAndSave(std::string oname)
{
	//Abrir el archivo a utilizar
	std::ofstream ofile(oname.c_str());
	double x=xmin;
	for ( int i=0 ; i<n ; ++i)
	{
		ofile << x << " " << f(x) << "\n";
		x+=h;
	}
	//Cerrar el archivo a utilizar 
	ofile.close();
}
