#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

int main(int argc, char* argv[])
{
	if ( argc<4 )
	{
		std::cout << "Not enough arguments!" << std::endl;
		return 0;
	}
	double xmin = std::atof(argv[1]);
	double xmax = std::atof(argv[2]);
	int n = std::stoi(argv[3]);
	std::cout << "xmin: " << xmin << std::endl;
	std::cout << "xmax: " << xmax << std::endl;
	std::cout << "n: " << n << std::endl;
	char name[]="table02.dat";
	std::ofstream ofile(name, std::ios::out);
	double xi=xmin, dx=(xmax-xmin)/double(n-1);
	for (int i=0 ; i<n ; ++i)
	{
		ofile << (xi) << " " << (sin(xi)*cos(xi/3)) << std::endl;
		xi+=dx;
	}
	ofile.close();
	return 0;
}

