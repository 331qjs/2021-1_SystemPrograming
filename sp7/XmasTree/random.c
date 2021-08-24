#include "xmastree.h"

void Tree(int h){
	int start = 1, stop = 0, diff = 3;
	while(stop < h + 1){
		stop = start + diff;
		triangle(start, stop, h);
		diff++;
		start = stop - 2;
	}
}

void Bottom(int n){
	int i, j, k = 2*n-4;
	for(i = 1; i <= 6; i++){
		for(j = 0; j < k; j++)
			printf(" ");
		for(j = 1; j <= 6; j++)
			printf("#");
		printf("\n");
	}
}
