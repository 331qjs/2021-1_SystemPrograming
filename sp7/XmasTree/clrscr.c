#include "xmastree.h"

void clrscr(){
	system("@cls||clear");
}

void triangle(int f, int n, int toth){
	int i, j, k = 2 * toth -2;
	for(i = 0; i < f -1; i++)
		k--;
	for(i = f-1; i < n; i++){
		for(j = 0; j < k; j++)
			printf(" ");
		k = k-1;
		for(j = 0; j <= i; j++)
			RandLeaf();
		printf("\n");
	}
}
