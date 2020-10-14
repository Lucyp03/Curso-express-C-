#ifndef _BASECLASS_H_
#define _BASECLASS_H_
#include <string>
#include <cmath>

//Definimos clase
class baseclass
{
	public:
	//Construtor predeterminado
	baseclass ();
	//Constructor sobrecargado
	baseclass (double min, double max, int np);
	//Definicion de funcion ComputeAndSave
	void ComputeAndSave(std::string oname);
	//Defincion de método virtual
	virtual double f(double x)
	{
		//Funcion predeterminada
		return (sin(x)/x);
	}
	protected:
	int n;
	double xmin, xmax;
	double h;
};
#endif

