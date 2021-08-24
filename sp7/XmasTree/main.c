#include "xmastree.h"

int main(){
	srand(time(NULL));
	int ht = 6;
	printf("\n************** MERRY CHRINSTMAS **************\n\n");
	while(1){
		clrscr();
		Tree(ht);
		Bottom(ht);
		usleep(RefRate);
	}
	return 0;
}
