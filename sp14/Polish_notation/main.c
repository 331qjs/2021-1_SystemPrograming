#include "polish.h"

int main(void){
	char	str[] = " 13, 4, -, 2, 3, *, +";
	stack	polish;
	printf("\n%s%s\n\n",
		"Polish expresstion: ", str);
	fill(&polish, str);
	prn_stack(&polish);
	printf("\n%s%d\n\n",
		"Polish evaluation: ", evaluate(&polish));
	return 0;
}
