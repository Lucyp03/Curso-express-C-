#include <iostream>
#include <chrono>
#include <thread>
#include <omp.h>

void function1()
{
std::cout << "Hello from function 1\n";
std::this_thread::sleep_for(std::chrono::milliseconds(100));std::cout << "Bye from function 1\n";
}
void function2()
{
std::cout << "Hello from function 2\n";
std::this_thread::sleep_for(std::chrono::milliseconds(100));std::cout << "Bye from function 2\n";
}
int main (int argc, char **argv)
{
#pragma omp parallel

#pragma omp single
{
#pragma omp task
function1();
#pragma omp task
function2();
}
return 0;
}

