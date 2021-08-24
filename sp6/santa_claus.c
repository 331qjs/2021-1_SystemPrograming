#include <stdio.h>

void wrt_address(void){
	printf("%s\n%s\n%s\n%s\n%s\n\n",
		"	*********************",
		"	**  SANTA CLAUS     *",
		"	**  NORTH POLE      *",
		"	**  EARTH           *",
		"	*********************");
}

int main(void){
	int i, n;
	printf("How many count do you want?");
	scanf("%d", &n);
	for(i = 0; i < n; ++i)
		wrt_address();
	return 0;
}

