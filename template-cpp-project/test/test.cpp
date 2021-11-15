#include "../src/header.h"

int omp_for(int count)
{
#pragma omp parallel for
	for (int i = 0; i < count; i++)
		printf("Iteration\t%d\n", i);

	return 0;
}