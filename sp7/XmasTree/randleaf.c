#include "xmastree.h"

void RandLeaf(){
	char leaftypes[5] = { '.', '*', '+', 'o', '0'};
	int temp = rand() % randomness;

	if(temp == 1)
		printf("%c ", leaftypes[rand() % 5]);
	else
		printf("%c ", leaftypes[1]);
}
