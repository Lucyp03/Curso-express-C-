#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

int main(int argc, char* argv[])
{
	double xmin, xmax;
	int n;
	std::cout << "Enter a pair xmin, xmax: ";
	std::cin >> xmin >> xmax;
	std::cout << "Now enter a number of points: ";
	std::cin >> n;
	char name[]="table01.dat";
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

