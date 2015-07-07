#include "Python.h"
#include "transcendentals.h"
#include <math.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	Py_Initialize();
#if PY_MAJOR_VERSION < 3
	inittranscendentals();
#else
	PyInit_transcendentals();
#endif
	printf("pi**e: %f\n", pow(PI, get_e()));
	Py_Finalize();
	return 0;
}
