#include "transcendentals_api.h"
#include <math.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	import_transcendentals();
	printf("pi**e: %f\n", pow(get_pi(), get_e()));
	return 0;
}
