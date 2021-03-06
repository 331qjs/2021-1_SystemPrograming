#include "find_root.h"

int		cnt = 0;
const dbl	eps = 1e-13;

int main(void){
	dbl a = -10.0;
	dbl b = +10.0;
	dbl root;
	assert(f(a)*f(b) <= 0.0);
	root = bisection(f, a, b);
	printf("%s%d\n%s% .15f\n%s% .15f\n",
		"No. of fct calls: ", cnt,
		"Approximate root: ", root,
		"Function value: ", f(root));
	return 0;
}
