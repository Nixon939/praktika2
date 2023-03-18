#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main () {
	double a = 4; // Storona A
	double b = 6; // Storona B
	double perim;
	double plosh;
	perim = sqrt(a*a+b*b);
	printf ("Perimetr treugolnika: %5.2f\n", perim);
	plosh = 1.0/2*(a*b);
	printf ("Ploshyad treugolnika: %5.2f\n", plosh);
	return 0;
}
