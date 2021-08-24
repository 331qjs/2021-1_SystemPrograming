#include <stdio.h>

int main(void){
	printf("size of char pointer: %ld\n", sizeof(char *));
	printf("size of short pointer: %ld\n", sizeof(short *));
	printf("size of int pointer: %ld\n", sizeof(int *));
	printf("size of long pointer: %ld\n", sizeof(long *));
	printf("size of signed pointer: %ld\n", sizeof(signed *));
	printf("size of unsigned pointer: %ld\n", sizeof(unsigned *));
	printf("size of float pointer: %ld\n", sizeof(float *));
	printf("size of double pointer: %ld\n", sizeof(double *));
	printf("size of longdouble pointer: %ld\n", sizeof(long double *));
	return 0;
}	
