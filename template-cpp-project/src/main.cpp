#include "header.h"

int main(void)
{
	std::cout << "Hello, World!" << std::endl;

	omp_for(10);


	return 0;
}